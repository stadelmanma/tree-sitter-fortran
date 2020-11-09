#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::wstring;
using std::isalpha;
using std::iswalnum;
using std::iswdigit;
using std::iswxdigit;
using std::iswspace;

enum TokenType {
    _LINE_CONTINUATION,
    _INTEGER_LITERAL,
    _FLOAT_LITERAL,
    _BOZ_LITERAL
};

struct Scanner {
    //  consume current character into current token and advance
    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    // ignore current character and advance
    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    bool is_ident_char(char c) {
        return iswalnum(c) || c == '_';
    }

    bool is_boz_sentinel(char c) {
        switch (c) {
        case 'B':
        case 'b':
        case 'O':
        case 'o':
        case 'Z':
        case 'z':
            return true;
        default:
            return false;
        }
    }

    bool is_exp_sentinel(char c) {
        switch (c) {
        case 'D':
        case 'd':
        case 'E':
        case 'e':
            return true;
        default:
            return false;
        }
    }

    bool scan_int(TSLexer *lexer) {
        if (!iswdigit(lexer->lookahead)) {
            return false;
        }
        // consume digits
        while (iswdigit(lexer->lookahead)) {
            advance(lexer); // store all digits
        }

        lexer->mark_end(lexer);
        return true;
    }

    /// Scan a number of the forms 1XXX, 1.0XXX, 0.1XXX, 1.XDX, etc.
    bool scan_number(TSLexer *lexer) {
        lexer->result_symbol = _INTEGER_LITERAL;
        bool digits = scan_int(lexer);
        if (lexer->lookahead == '.') {
            advance(lexer);
            // exclude decimal if followed by any letter other than d/D and e/E
            // if no leading digits are present and a non-digit follows
            // the decimal it's a nonmatch.
            if (digits && (is_exp_sentinel(lexer->lookahead) || !iswalnum(lexer->lookahead))) {
                lexer->mark_end(lexer); // add decimal to token
            }
            lexer->result_symbol = _FLOAT_LITERAL;
        }
        // if next char isn't number return since we handle exp
        // notation and precision identifiers separately. If there are
        // no leading digit it's a nonmatch.
        digits = scan_int(lexer) || digits;
        if (digits) {
            // process exp notation
            if (is_exp_sentinel(lexer->lookahead)) {
                advance(lexer);
                if (lexer->lookahead == '+' || lexer->lookahead == '-') {
                    advance(lexer);
                }
                if (!scan_int(lexer)) {
                    return true; // valid number token with junk after it
                }
                lexer->mark_end(lexer);
                lexer->result_symbol = _FLOAT_LITERAL;
            }
            // get size qualifer
            if (lexer->lookahead == '_') {
                advance(lexer);
                if (!isalpha(lexer->lookahead)) {
                    return true; // valid number token with junk after it
                }
                while (is_ident_char(lexer->lookahead)) {
                    advance(lexer); // store all digits
                }
                lexer->mark_end(lexer);
            }
        }
        return digits;
    }

    bool scan_boz(TSLexer *lexer) {
        lexer->result_symbol = _BOZ_LITERAL;
        bool boz_prefix = false;
        char quote = '\0';
        if (is_boz_sentinel(lexer->lookahead)) {
            advance(lexer);
            boz_prefix = true;
        }
        if (lexer->lookahead == '\'' || lexer->lookahead == '"') {
            quote = lexer->lookahead;
            advance(lexer);
            if (!isxdigit(lexer->lookahead)) {
                return false;
            }
            while (isxdigit(lexer->lookahead)) {
                advance(lexer); // store all hex digits
            }
            if (lexer->lookahead != quote) {
                return false;
            }
            advance(lexer); // store enclosing quote
            if (!boz_prefix && !is_boz_sentinel(lexer->lookahead)) {
                return false; // no boz suffix or prefix provided
            }
            lexer->mark_end(lexer);
            return true;
        }
        else {
            return false;
        }
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
        while (iswspace(lexer->lookahead)) {
            skip(lexer);
        }
        if (valid_symbols[_INTEGER_LITERAL] || valid_symbols[_FLOAT_LITERAL] || valid_symbols[_BOZ_LITERAL]) {
            // extract out root number from expression
            if (scan_number(lexer)) {
                return true;
            }
            if (scan_boz(lexer)) {
                return true;
            }
        }

        // always check for line cont. if nothing else found
        lexer->result_symbol = _LINE_CONTINUATION;

        // Consume '&' at the end of the line
        if (lexer->lookahead != '&') {
            return false;
        }
        advance(lexer);

        // Consume end of line characters, we allow '\n', '\r\n' and
        // '\r' to cover unix, MSDOS and old style Macintosh
        if (lexer->lookahead == '\r') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\n') {
              advance(lexer);
          }
        }
        else {
          if (lexer->lookahead != '\n') return false;
          advance(lexer);
        }

        // in some instances a second ampersand exists, on the following line
        // I assume this is to allow the code to compile properly as free form
        // or fixed form (i.e. put the first ampersand past column 72 and the
        // second in column 6)
        while (iswspace(lexer->lookahead)) {
          advance(lexer);
        }
        if (lexer->lookahead == '&') advance(lexer);
        return true;
    }
};

}

extern "C" {

void *tree_sitter_fortran_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_fortran_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_fortran_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_fortran_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

void tree_sitter_fortran_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
