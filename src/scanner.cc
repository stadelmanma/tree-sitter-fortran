#include <cctype>
#include "tree_sitter/parser.h"
#include <string>
#include <cwctype>
#include <cstring>

namespace {

using std::wstring;
using std::iswalnum;
using std::iswdigit;
using std::iswspace;

enum TokenType {
    _LINE_CONTINUATION,
    _INTEGER_LITERAL,
    _FLOAT_LITERAL,
    _BOZ_LITERAL,
    STRING_LITERAL,
    _END_OF_STATEMENT
};

struct Scanner {
    // Was the last non-blank, non-comment a line continuation?
    bool in_line_continuation = false;

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
                if (!std::isalnum(lexer->lookahead)) {
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

    bool scan_end_of_statement(TSLexer *lexer) {
        // Things that end statements in Fortran:
        //
        // - semicolons
        // - end-of-line (various representations)
        // - comments
        //
        // Comments are a bit surprising, but it turns out to be
        // easier to handle line continuations if comments consume the
        // newline

        // Semicolons and EOF always end the statement
        if (lexer->lookahead == ';' || lexer->eof(lexer)) {
          skip(lexer);
          lexer->result_symbol = _END_OF_STATEMENT;
          return true;
        }

        // If we're in a line continuation, then don't end the statement
        if (in_line_continuation) return false;

        // Consume end of line characters, we allow '\n', '\r\n' and
        // '\r' to cover unix, MSDOS and old style Macintosh.
        // Handle comments here too, but don't consume them
        if (lexer->lookahead == '\r') {
          skip(lexer);
          if (lexer->lookahead == '\n') {
              skip(lexer);
          }
        } else {
          if (lexer->lookahead == '\n') {
            skip(lexer);
          } else if (lexer->lookahead != '!') {
            // Not a newline and not a comment, so not an
            // end-of-statement
            return false;
          }
        }

        lexer->result_symbol = _END_OF_STATEMENT;
        return true;
    }

    bool scan_start_line_continuation(TSLexer *lexer) {
      // Now see if we should start a line continuation
      in_line_continuation = (lexer->lookahead == '&');
      if (!in_line_continuation) {
        return false;
      }
      // Consume the '&'
      advance(lexer);
      lexer->result_symbol = _LINE_CONTINUATION;
      return true;
    }

    bool scan_end_line_continuation(TSLexer *lexer) {
      if (!in_line_continuation) {
        return false;
      }
      // Everything except comments ends a line continuation
      if (lexer->lookahead == '!') {
        return false;
      }

      in_line_continuation = false;

      // Consume any leading line continuation markers
      if (lexer->lookahead == '&') {
        advance(lexer);
      }
      lexer->result_symbol = _LINE_CONTINUATION;
      return true;
    }

    bool scan_string_literal(TSLexer *lexer) {
      const char opening_quote = lexer->lookahead;

      if (opening_quote != '"' && opening_quote != '\'') {
        return false;
      }

      advance(lexer);
      lexer->result_symbol = STRING_LITERAL;

      while (lexer->lookahead != '\n') {
        // Handle line continuations: strictly speaking, we MUST have
        // both trailing '&' on first line AND leading '&' on second
        // line, though most compilers do accept string literals
        // missing the second '&'. In practice, everyone does seem to
        // include it.

        // We need to handle this here because sometimes '&' is part
        // of the literal and not a continuation marker, and otherwise
        // the parser gets confused, especially if there's no
        // whitespace before the '&' in the string

        // The literal token will end up containing the line
        // continuation as well as any blank or comment lines inside
        // the quotes (yes, you can have comments _inside_ string
        // literals if they contain a line continuation)
        if (lexer->lookahead == '&') {
          advance(lexer);
          // Consume blanks up to the end of the line or non-blank
          while (std::iswblank(lexer->lookahead)) {
            advance(lexer);
          }
          // If we hit the end of the line, consume all whitespace,
          // including new lines
          if (lexer->lookahead == '\n') {
            while (std::iswspace(lexer->lookahead)) {
              advance(lexer);
            }
          }
        }

        // If we hit the same kind of quote that opened this literal,
        // check to see if there's two in a row, and if so, consume
        // both of them
        if (lexer->lookahead == opening_quote) {
          advance(lexer);
          // It was just one quote, so we've successfully reached the
          // end of the literal
          if (lexer->lookahead != opening_quote) {
            return true;
          }
        }
        advance(lexer);
      }

      // We hit the end of the line without an '&', so this is an
      // unclosed string literal (an error)
      return false;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
        // Consume any leading whitespace except newlines
        while (std::iswblank(lexer->lookahead)) {
          skip(lexer);
        }

        // Close the current statement if we can
        if (valid_symbols[_END_OF_STATEMENT]) {
            if (scan_end_of_statement(lexer)) {
                return true;
            }
        }

        // We're now either in a line continuation or between
        // statements, so we should eat all whitespace including
        // newlines, until we come to something more interesting
        while (iswspace(lexer->lookahead)) {
            skip(lexer);
        }

        if (scan_end_line_continuation(lexer)) {
          return true;
        }

        if (valid_symbols[STRING_LITERAL]) {
          if (scan_string_literal(lexer)) {
            return true;
          }
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

        if (scan_start_line_continuation(lexer)) {
          return true;
        }

        return false;
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
  Scanner *scanner = static_cast<Scanner *>(payload);
  size_t size = sizeof(bool);
  std::memcpy(buffer, &scanner->in_line_continuation, size);
  return size;
}

void tree_sitter_fortran_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  std::memcpy(&scanner->in_line_continuation, buffer, length);
}

void tree_sitter_fortran_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
