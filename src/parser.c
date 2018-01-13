#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 54
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  anon_sym_LF = 2,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH = 3,
  sym_end_statement = 4,
  anon_sym_SEMI = 5,
  anon_sym_COLON_COLON = 6,
  anon_sym_COMMA = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_string_literal = 10,
  sym_true = 11,
  sym_false = 12,
  sym_identifier = 13,
  sym_comment = 14,
  sym_translation_unit = 15,
  sym__top_level_item = 16,
  sym_program_block = 17,
  sym_subroutine_block = 18,
  sym_parameters = 19,
  aux_sym_translation_unit_repeat1 = 20,
  aux_sym_parameters_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [anon_sym_LF] = "\n",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[sS][uU][bB][rR][oO][uU][tT][iI][nN][eE]/",
  [sym_end_statement] = "end_statement",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_string_literal] = "string_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym_program_block] = "program_block",
  [sym_subroutine_block] = "subroutine_block",
  [sym_parameters] = "parameters",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_end_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_program_block] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 18:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 23:
      if (lookahead == ':')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(47);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_end_statement);
      END_STATE();
    case 51:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 58:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 68:
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(70);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(71);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 69},
  [9] = {.lex_state = 69},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 71},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 71},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 71},
  [53] = {.lex_state = 71},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [sym_end_statement] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_translation_unit] = STATE(4),
    [sym__top_level_item] = STATE(5),
    [sym_program_block] = STATE(6),
    [sym_subroutine_block] = STATE(6),
    [aux_sym_translation_unit_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [2] = {
    [sym_identifier] = ACTIONS(18),
    [sym_comment] = ACTIONS(16),
  },
  [3] = {
    [sym_identifier] = ACTIONS(20),
    [sym_comment] = ACTIONS(16),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_comment] = ACTIONS(16),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(24),
    [sym_end_statement] = ACTIONS(24),
    [sym_comment] = ACTIONS(16),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(26),
    [sym_end_statement] = ACTIONS(26),
    [sym_comment] = ACTIONS(16),
  },
  [7] = {
    [sym__top_level_item] = STATE(10),
    [sym_program_block] = STATE(6),
    [sym_subroutine_block] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
  },
  [9] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LF] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_comment] = ACTIONS(16),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [sym_end_statement] = ACTIONS(36),
    [sym_comment] = ACTIONS(16),
  },
  [11] = {
    [sym__top_level_item] = STATE(5),
    [sym_program_block] = STATE(6),
    [sym_subroutine_block] = STATE(6),
    [aux_sym_translation_unit_repeat1] = STATE(18),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(40),
    [sym_end_statement] = ACTIONS(42),
    [sym_comment] = ACTIONS(16),
  },
  [12] = {
    [sym_end_statement] = ACTIONS(44),
    [sym_comment] = ACTIONS(16),
  },
  [13] = {
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(16),
  },
  [14] = {
    [anon_sym_LF] = ACTIONS(48),
    [sym_comment] = ACTIONS(16),
  },
  [15] = {
    [sym_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(16),
  },
  [16] = {
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(16),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
  },
  [18] = {
    [sym__top_level_item] = STATE(10),
    [sym_program_block] = STATE(6),
    [sym_subroutine_block] = STATE(6),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(40),
    [sym_end_statement] = ACTIONS(58),
    [sym_comment] = ACTIONS(16),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(16),
  },
  [20] = {
    [aux_sym_parameters_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym_comment] = ACTIONS(16),
  },
  [21] = {
    [sym_end_statement] = ACTIONS(68),
    [sym_comment] = ACTIONS(16),
  },
  [22] = {
    [anon_sym_LF] = ACTIONS(70),
    [sym_comment] = ACTIONS(16),
  },
  [23] = {
    [sym_parameters] = STATE(33),
    [anon_sym_LF] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_comment] = ACTIONS(16),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(16),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(16),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(16),
  },
  [27] = {
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
  },
  [28] = {
    [anon_sym_LF] = ACTIONS(90),
    [sym_comment] = ACTIONS(16),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_comment] = ACTIONS(16),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(16),
  },
  [31] = {
    [sym__top_level_item] = STATE(5),
    [sym_program_block] = STATE(6),
    [sym_subroutine_block] = STATE(6),
    [aux_sym_translation_unit_repeat1] = STATE(42),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(40),
    [sym_end_statement] = ACTIONS(98),
    [sym_comment] = ACTIONS(16),
  },
  [32] = {
    [sym_end_statement] = ACTIONS(100),
    [sym_comment] = ACTIONS(16),
  },
  [33] = {
    [anon_sym_LF] = ACTIONS(102),
    [sym_comment] = ACTIONS(16),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [sym_end_statement] = ACTIONS(104),
    [sym_comment] = ACTIONS(16),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(16),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [sym_end_statement] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [sym_comment] = ACTIONS(16),
  },
  [38] = {
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(16),
  },
  [39] = {
    [anon_sym_LF] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(16),
  },
  [41] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(54),
    [sym_end_statement] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
  },
  [42] = {
    [sym__top_level_item] = STATE(10),
    [sym_program_block] = STATE(6),
    [sym_subroutine_block] = STATE(6),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(40),
    [sym_end_statement] = ACTIONS(124),
    [sym_comment] = ACTIONS(16),
  },
  [43] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(126),
    [sym_end_statement] = ACTIONS(60),
    [sym_comment] = ACTIONS(16),
  },
  [44] = {
    [sym_end_statement] = ACTIONS(128),
    [sym_comment] = ACTIONS(16),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [sym_end_statement] = ACTIONS(130),
    [sym_comment] = ACTIONS(16),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [sym_comment] = ACTIONS(16),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(134),
    [sym_end_statement] = ACTIONS(134),
    [sym_comment] = ACTIONS(16),
  },
  [48] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(76),
    [sym_end_statement] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(16),
  },
  [49] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [sym_end_statement] = ACTIONS(74),
    [sym_comment] = ACTIONS(16),
  },
  [50] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [sym_end_statement] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(16),
  },
  [51] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(138),
    [sym_end_statement] = ACTIONS(82),
    [sym_comment] = ACTIONS(16),
  },
  [52] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(106),
    [sym_end_statement] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(16),
  },
  [53] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [sym_end_statement] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(16),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_translation_unit, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_item, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_translation_unit, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 4, .fragile = true),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subroutine_block, 4, .fragile = true),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5, .fragile = true),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_program_block, 5, .fragile = true),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subroutine_block, 5, .fragile = true),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subroutine_block, 5, .fragile = true),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_program_block, 6),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subroutine_block, 6),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subroutine_block, 6),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subroutine_block, 7),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fortran() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
