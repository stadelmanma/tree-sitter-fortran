#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::wstring;
using std::iswspace;

enum TokenType {
  LINE_CONTINUATION,
};

struct Scanner {
  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    lexer->result_symbol = LINE_CONTINUATION;

    // Consume '&' at the end of the line
    if (lexer->lookahead != '&') return false;
    lexer->advance(lexer, false);

    // Consume end of line characters, we allow '\n', '\r\n' and
    // '\r' to cover unix, MSDOS and old style Macintosh
    if (lexer->lookahead == '\r') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\n') {
          lexer->advance(lexer, false);
      }
      return true;
    }
    if (lexer->lookahead != '\n') return false;
    lexer->advance(lexer, false);
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
