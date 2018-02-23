#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 136
#define SYMBOL_COUNT 40
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
  sym__expression_component = 25,
  sym_parenthesized_expression = 26,
  sym_assignment_expression = 27,
  sym_pointer_assignment_expression = 28,
  sym_math_expression = 29,
  sym_call_expression = 30,
  sym_argument_list = 31,
  sym_keyword_argument = 32,
  sym_array_slice = 33,
  sym__literals = 34,
  sym_complex_literal = 35,
  sym__end_of_statement = 36,
  aux_sym_translation_unit_repeat1 = 37,
  aux_sym_program_block_repeat1 = 38,
  aux_sym_argument_list_repeat1 = 39,
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
  [sym__expression_component] = "_expression_component",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_pointer_assignment_expression] = "pointer_assignment_expression",
  [sym_math_expression] = "math_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_keyword_argument] = "keyword_argument",
  [sym_array_slice] = "array_slice",
  [sym__literals] = "_literals",
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
  [sym__expression_component] = {
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
  [sym__literals] = {
    .visible = false,
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
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 93},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 99},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 100},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 101},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 101},
  [37] = {.lex_state = 100},
  [38] = {.lex_state = 100},
  [39] = {.lex_state = 93},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 100},
  [42] = {.lex_state = 100},
  [43] = {.lex_state = 100},
  [44] = {.lex_state = 100},
  [45] = {.lex_state = 98},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 99},
  [49] = {.lex_state = 93},
  [50] = {.lex_state = 101},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 100},
  [53] = {.lex_state = 101},
  [54] = {.lex_state = 101},
  [55] = {.lex_state = 100},
  [56] = {.lex_state = 100},
  [57] = {.lex_state = 100},
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 100},
  [60] = {.lex_state = 100},
  [61] = {.lex_state = 101},
  [62] = {.lex_state = 101},
  [63] = {.lex_state = 101},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 100},
  [66] = {.lex_state = 100},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 101},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 101},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 93},
  [78] = {.lex_state = 84},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 92},
  [81] = {.lex_state = 101},
  [82] = {.lex_state = 101},
  [83] = {.lex_state = 92},
  [84] = {.lex_state = 101},
  [85] = {.lex_state = 101},
  [86] = {.lex_state = 100},
  [87] = {.lex_state = 101},
  [88] = {.lex_state = 100},
  [89] = {.lex_state = 100},
  [90] = {.lex_state = 93},
  [91] = {.lex_state = 100},
  [92] = {.lex_state = 100},
  [93] = {.lex_state = 100},
  [94] = {.lex_state = 100},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 101},
  [97] = {.lex_state = 101},
  [98] = {.lex_state = 93},
  [99] = {.lex_state = 100},
  [100] = {.lex_state = 100},
  [101] = {.lex_state = 100},
  [102] = {.lex_state = 84},
  [103] = {.lex_state = 93},
  [104] = {.lex_state = 101},
  [105] = {.lex_state = 101},
  [106] = {.lex_state = 92},
  [107] = {.lex_state = 100},
  [108] = {.lex_state = 101},
  [109] = {.lex_state = 101},
  [110] = {.lex_state = 100},
  [111] = {.lex_state = 101},
  [112] = {.lex_state = 101},
  [113] = {.lex_state = 101},
  [114] = {.lex_state = 101},
  [115] = {.lex_state = 92},
  [116] = {.lex_state = 101},
  [117] = {.lex_state = 93},
  [118] = {.lex_state = 92},
  [119] = {.lex_state = 103},
  [120] = {.lex_state = 93},
  [121] = {.lex_state = 93},
  [122] = {.lex_state = 93},
  [123] = {.lex_state = 93},
  [124] = {.lex_state = 84},
  [125] = {.lex_state = 101},
  [126] = {.lex_state = 100},
  [127] = {.lex_state = 100},
  [128] = {.lex_state = 100},
  [129] = {.lex_state = 101},
  [130] = {.lex_state = 100},
  [131] = {.lex_state = 92},
  [132] = {.lex_state = 101},
  [133] = {.lex_state = 101},
  [134] = {.lex_state = 101},
  [135] = {.lex_state = 93},
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
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(24),
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
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(26),
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
    [sym_call_expression] = STATE(28),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(62),
  },
  [14] = {
    [sym__expression] = STATE(34),
    [sym__expression_component] = STATE(35),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
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
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(36),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
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
    [sym_argument_list] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__end_of_statement] = STATE(40),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_STAR_STAR] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__end_of_statement] = STATE(40),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(45),
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
  [25] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(100),
  },
  [26] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(45),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym_argument_list] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [29] = {
    [sym_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(100),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [sym__expression] = STATE(50),
    [sym__expression_component] = STATE(36),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(112),
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
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(63),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym_keyword_argument] = STATE(64),
    [sym_array_slice] = STATE(64),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym__expression] = STATE(69),
    [sym__expression_component] = STATE(70),
    [sym_parenthesized_expression] = STATE(71),
    [sym_math_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym__literals] = STATE(72),
    [sym_complex_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_STAR_STAR] = ACTIONS(146),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
  },
  [40] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [sym_end_statement] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(73),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym__expression] = STATE(69),
    [sym__expression_component] = STATE(74),
    [sym_parenthesized_expression] = STATE(71),
    [sym_math_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym__literals] = STATE(72),
    [sym_complex_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(75),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(18),
    [sym_pointer_assignment_expression] = STATE(18),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(45),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(154),
    [sym_end_statement] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(163),
    [sym_boolean_literal] = ACTIONS(166),
    [sym_identifier] = ACTIONS(169),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(174),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(174),
  },
  [49] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(174),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym_number_literal] = ACTIONS(180),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(82),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym_keyword_argument] = STATE(83),
    [sym_array_slice] = STATE(83),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(184),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(184),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_STAR_STAR] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [sym__expression] = STATE(50),
    [sym__expression_component] = STATE(84),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym__expression] = STATE(50),
    [sym__expression_component] = STATE(85),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym__expression] = STATE(50),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [anon_sym_STAR_STAR] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
  },
  [59] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(36),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(87),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(196),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [63] = {
    [aux_sym_argument_list_repeat1] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(212),
    [sym_comment] = ACTIONS(14),
  },
  [64] = {
    [aux_sym_argument_list_repeat1] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(210),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [sym__expression] = STATE(97),
    [sym__expression_component] = STATE(35),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(214),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym__expression] = STATE(69),
    [sym__expression_component] = STATE(98),
    [sym_parenthesized_expression] = STATE(71),
    [sym_math_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym__literals] = STATE(72),
    [sym_complex_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(216),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(216),
    [sym__newline] = ACTIONS(216),
  },
  [68] = {
    [sym_argument_list] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(216),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(216),
    [sym__newline] = ACTIONS(216),
  },
  [69] = {
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(220),
    [sym__newline] = ACTIONS(220),
  },
  [70] = {
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_STAR_STAR] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
  },
  [71] = {
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [72] = {
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(220),
    [sym__newline] = ACTIONS(220),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_STAR_STAR] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(234),
    [sym__newline] = ACTIONS(234),
  },
  [75] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(236),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(236),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [aux_sym_argument_list_repeat1] = STATE(106),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(212),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [aux_sym_argument_list_repeat1] = STATE(106),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(210),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(109),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(111),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(112),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(256),
    [sym__newline] = ACTIONS(256),
  },
  [91] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(113),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(114),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym_keyword_argument] = STATE(115),
    [sym_array_slice] = STATE(115),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__expression] = STATE(62),
    [sym__expression_component] = STATE(116),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(254),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [aux_sym_argument_list_repeat1] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(210),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(260),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(264),
    [sym__newline] = ACTIONS(264),
  },
  [99] = {
    [sym__expression] = STATE(69),
    [sym__expression_component] = STATE(121),
    [sym_parenthesized_expression] = STATE(71),
    [sym_math_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym__literals] = STATE(72),
    [sym_complex_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym__expression] = STATE(69),
    [sym__expression_component] = STATE(122),
    [sym_parenthesized_expression] = STATE(71),
    [sym_math_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym__literals] = STATE(72),
    [sym_complex_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [sym__expression] = STATE(69),
    [sym__expression_component] = STATE(123),
    [sym_parenthesized_expression] = STATE(71),
    [sym_math_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym__literals] = STATE(72),
    [sym_complex_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(266),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(268),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_STAR_STAR] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(270),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(274),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [aux_sym_argument_list_repeat1] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(210),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(36),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(280),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(129),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(290),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_COLON] = ACTIONS(212),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(294),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
  },
  [118] = {
    [aux_sym_argument_list_repeat1] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(298),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [sym_number_literal] = ACTIONS(301),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(303),
    [sym__newline] = ACTIONS(303),
  },
  [121] = {
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_STAR_STAR] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(305),
    [sym__newline] = ACTIONS(305),
  },
  [122] = {
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_STAR_STAR] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(305),
    [sym__newline] = ACTIONS(305),
  },
  [123] = {
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_STAR_STAR] = ACTIONS(305),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(305),
    [sym__newline] = ACTIONS(305),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(307),
    [sym_comment] = ACTIONS(14),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_comment] = ACTIONS(14),
  },
  [126] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(132),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(133),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [128] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(14),
  },
  [130] = {
    [sym__expression] = STATE(108),
    [sym__expression_component] = STATE(134),
    [sym_parenthesized_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(317),
    [sym_comment] = ACTIONS(14),
  },
  [135] = {
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(319),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
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
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_component, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [154] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(12),
  [157] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [160] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [163] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [166] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 3),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [298] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(93),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 4),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 5),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
