#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 126
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 2,
  sym_end_statement = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_EQ = 6,
  anon_sym_EQ_GT = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_STAR_STAR = 12,
  anon_sym_COMMA = 13,
  anon_sym_COLON = 14,
  sym_number_literal = 15,
  sym_boolean_literal = 16,
  sym_identifier = 17,
  sym_comment = 18,
  sym__semicolon = 19,
  sym__newline = 20,
  sym_translation_unit = 21,
  sym_program_block = 22,
  sym_subroutine_call = 23,
  sym__expression = 24,
  sym_parenthesized_expression = 25,
  sym_assignment_expression = 26,
  sym_pointer_assignment_expression = 27,
  sym_math_expression = 28,
  sym_call_expression = 29,
  sym_argument_list = 30,
  sym_keyword_argument = 31,
  sym_array_slice = 32,
  sym_complex_literal = 33,
  sym__end_of_statement = 34,
  aux_sym_translation_unit_repeat1 = 35,
  aux_sym_program_block_repeat1 = 36,
  aux_sym_argument_list_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[cC][aA][lL][lL]/",
  [sym_end_statement] = "end_statement",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [sym_number_literal] = "number_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__semicolon] = "_semicolon",
  [sym__newline] = "_newline",
  [sym_translation_unit] = "translation_unit",
  [sym_program_block] = "program_block",
  [sym_subroutine_call] = "subroutine_call",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_pointer_assignment_expression] = "pointer_assignment_expression",
  [sym_math_expression] = "math_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_keyword_argument] = "keyword_argument",
  [sym_array_slice] = "array_slice",
  [sym_complex_literal] = "complex_literal",
  [sym__end_of_statement] = "_end_of_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
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
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_end_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
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
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_program_block] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_call] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_math_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_array_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_complex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_statement] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == ':')
        ADVANCE(54);
      if (lookahead == ';')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(65);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(76);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == '[')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'F')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == ']')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '[')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'a')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'A')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == ']')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '[')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'l')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'L')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ']')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '[')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 's')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'S')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == ']')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '[')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'E')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ']')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '/')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '.')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 39:
      if (lookahead == 'T')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ']')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '[')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'r')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'R')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == ']')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '[')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'U')
        ADVANCE(31);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(50);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(50);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(61);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(66);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(67);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(75);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(75);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(84);
      END_STATE();
    case 85:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 92:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == '\n')
        ADVANCE(94);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(95);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == ';')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(65);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(74);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == '\n')
        ADVANCE(94);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(99);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(85);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == ':')
        ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(74);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(100);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(95);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == ':')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 102:
      if (lookahead == '\n')
        ADVANCE(94);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(106);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(103);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(59);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(105);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(107);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 93},
  [9] = {.lex_state = 98},
  [10] = {.lex_state = 98},
  [11] = {.lex_state = 98},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 100},
  [15] = {.lex_state = 100},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 102},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 100},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 101},
  [31] = {.lex_state = 101},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 100},
  [34] = {.lex_state = 100},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 100},
  [38] = {.lex_state = 100},
  [39] = {.lex_state = 100},
  [40] = {.lex_state = 100},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 84},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 93},
  [46] = {.lex_state = 103},
  [47] = {.lex_state = 100},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 100},
  [51] = {.lex_state = 100},
  [52] = {.lex_state = 100},
  [53] = {.lex_state = 93},
  [54] = {.lex_state = 100},
  [55] = {.lex_state = 100},
  [56] = {.lex_state = 101},
  [57] = {.lex_state = 101},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 100},
  [60] = {.lex_state = 100},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 93},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 101},
  [66] = {.lex_state = 101},
  [67] = {.lex_state = 101},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 102},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 101},
  [73] = {.lex_state = 101},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 101},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 100},
  [78] = {.lex_state = 101},
  [79] = {.lex_state = 100},
  [80] = {.lex_state = 93},
  [81] = {.lex_state = 100},
  [82] = {.lex_state = 100},
  [83] = {.lex_state = 100},
  [84] = {.lex_state = 100},
  [85] = {.lex_state = 100},
  [86] = {.lex_state = 92},
  [87] = {.lex_state = 101},
  [88] = {.lex_state = 101},
  [89] = {.lex_state = 93},
  [90] = {.lex_state = 100},
  [91] = {.lex_state = 100},
  [92] = {.lex_state = 100},
  [93] = {.lex_state = 84},
  [94] = {.lex_state = 93},
  [95] = {.lex_state = 101},
  [96] = {.lex_state = 101},
  [97] = {.lex_state = 92},
  [98] = {.lex_state = 100},
  [99] = {.lex_state = 101},
  [100] = {.lex_state = 100},
  [101] = {.lex_state = 101},
  [102] = {.lex_state = 101},
  [103] = {.lex_state = 101},
  [104] = {.lex_state = 101},
  [105] = {.lex_state = 92},
  [106] = {.lex_state = 101},
  [107] = {.lex_state = 93},
  [108] = {.lex_state = 92},
  [109] = {.lex_state = 103},
  [110] = {.lex_state = 93},
  [111] = {.lex_state = 93},
  [112] = {.lex_state = 93},
  [113] = {.lex_state = 93},
  [114] = {.lex_state = 84},
  [115] = {.lex_state = 101},
  [116] = {.lex_state = 100},
  [117] = {.lex_state = 100},
  [118] = {.lex_state = 100},
  [119] = {.lex_state = 101},
  [120] = {.lex_state = 100},
  [121] = {.lex_state = 92},
  [122] = {.lex_state = 101},
  [123] = {.lex_state = 101},
  [124] = {.lex_state = 101},
  [125] = {.lex_state = 93},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [sym_end_statement] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(5),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__semicolon] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_unit] = STATE(3),
    [sym_program_block] = STATE(4),
    [aux_sym_translation_unit_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [2] = {
    [sym_identifier] = ACTIONS(16),
    [sym_comment] = ACTIONS(14),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(18),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(20),
    [sym_comment] = ACTIONS(14),
  },
  [5] = {
    [sym_program_block] = STATE(4),
    [aux_sym_translation_unit_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [sym__end_of_statement] = STATE(10),
    [sym_comment] = ACTIONS(24),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [7] = {
    [sym_program_block] = STATE(4),
    [aux_sym_translation_unit_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(31),
    [sym_comment] = ACTIONS(14),
  },
  [8] = {
    [sym__end_of_statement] = STATE(11),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [9] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [sym_end_statement] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_number_literal] = ACTIONS(40),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(21),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(23),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [sym_call_expression] = STATE(25),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(62),
  },
  [14] = {
    [sym__expression] = STATE(31),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym__expression] = STATE(32),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_argument_list] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__end_of_statement] = STATE(36),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [sym__end_of_statement] = STATE(36),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [21] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(92),
  },
  [23] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [sym_argument_list] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [26] = {
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(92),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [sym__expression] = STATE(32),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym_argument_list] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym__expression] = STATE(57),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(58),
    [sym_array_slice] = STATE(58),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [sym__expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(61),
    [sym_math_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_complex_literal] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(132),
    [sym_boolean_literal] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [36] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(140),
    [sym_end_statement] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [sym_number_literal] = ACTIONS(144),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__expression] = STATE(64),
    [sym_parenthesized_expression] = STATE(61),
    [sym_math_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_complex_literal] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(132),
    [sym_boolean_literal] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym__expression] = STATE(65),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [39] = {
    [sym__expression] = STATE(66),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [40] = {
    [sym__expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(146),
    [sym_end_statement] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [sym_number_literal] = ACTIONS(155),
    [sym_boolean_literal] = ACTIONS(158),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(166),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(166),
  },
  [45] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(166),
  },
  [46] = {
    [sym_number_literal] = ACTIONS(172),
    [sym_comment] = ACTIONS(14),
  },
  [47] = {
    [sym__expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(74),
    [sym_array_slice] = STATE(74),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_STAR_STAR] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [sym__expression] = STATE(75),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym__expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [sym__expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(184),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(184),
    [sym__newline] = ACTIONS(184),
  },
  [54] = {
    [sym__expression] = STATE(32),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [sym__expression] = STATE(78),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym_argument_list] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [aux_sym_argument_list_repeat1] = STATE(86),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [aux_sym_argument_list_repeat1] = STATE(86),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [sym__expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(206),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(89),
    [sym_parenthesized_expression] = STATE(61),
    [sym_math_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_complex_literal] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(132),
    [sym_boolean_literal] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [62] = {
    [sym_argument_list] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [63] = {
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(216),
    [sym__newline] = ACTIONS(216),
  },
  [64] = {
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(218),
    [sym__newline] = ACTIONS(218),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(224),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(14),
  },
  [70] = {
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(224),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(232),
    [anon_sym_STAR_STAR] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_COLON] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [aux_sym_argument_list_repeat1] = STATE(97),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [aux_sym_argument_list_repeat1] = STATE(97),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym__expression] = STATE(101),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(244),
    [sym__newline] = ACTIONS(244),
  },
  [81] = {
    [sym__expression] = STATE(102),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [sym__expression] = STATE(103),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [sym__expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [sym__expression] = STATE(104),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(105),
    [sym_array_slice] = STATE(105),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [sym__expression] = STATE(106),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [aux_sym_argument_list_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(248),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(252),
    [sym__newline] = ACTIONS(252),
  },
  [90] = {
    [sym__expression] = STATE(111),
    [sym_parenthesized_expression] = STATE(61),
    [sym_math_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_complex_literal] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(132),
    [sym_boolean_literal] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [sym__expression] = STATE(112),
    [sym_parenthesized_expression] = STATE(61),
    [sym_math_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_complex_literal] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(132),
    [sym_boolean_literal] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(61),
    [sym_math_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_complex_literal] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(132),
    [sym_boolean_literal] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(256),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [aux_sym_argument_list_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [sym__expression] = STATE(32),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym__expression] = STATE(119),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(278),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_COLON] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(284),
    [anon_sym_STAR_STAR] = ACTIONS(284),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(284),
    [sym__newline] = ACTIONS(284),
  },
  [108] = {
    [aux_sym_argument_list_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [sym_number_literal] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(291),
    [sym__newline] = ACTIONS(291),
  },
  [111] = {
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
  },
  [112] = {
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
  },
  [113] = {
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_STAR_STAR] = ACTIONS(293),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(295),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_STAR_STAR] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [sym__expression] = STATE(122),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [sym__expression] = STATE(123),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [sym__expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(301),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [sym__expression] = STATE(124),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(303),
    [sym_comment] = ACTIONS(14),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_comment] = ACTIONS(14),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(305),
    [sym_comment] = ACTIONS(14),
  },
  [125] = {
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(307),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(307),
    [sym__newline] = ACTIONS(307),
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
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_translation_unit, 1),
  [24] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT(8), SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [31] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__end_of_statement, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [146] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(12),
  [149] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [152] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [155] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [158] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [161] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 1),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 2),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 3),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [286] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(84),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 4),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 5),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
