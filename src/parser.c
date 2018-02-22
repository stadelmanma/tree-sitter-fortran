#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 120
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_number_literal = 14,
  sym_boolean_literal = 15,
  sym_identifier = 16,
  sym_comment = 17,
  sym__semicolon = 18,
  sym__newline = 19,
  sym_translation_unit = 20,
  sym_program_block = 21,
  sym_subroutine_call = 22,
  sym__expression = 23,
  sym__expression_component = 24,
  sym_parenthesized_expression = 25,
  sym_assignment_expression = 26,
  sym_pointer_assignment_expression = 27,
  sym_math_expression = 28,
  sym_call_expression = 29,
  sym_argument_list = 30,
  sym_keyword_argument = 31,
  sym__literals = 32,
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
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(75);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(58);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
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
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '9')
        ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(57);
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
        ADVANCE(58);
      END_STATE();
    case 58:
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
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(60);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(60);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(65);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(66);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(74);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(74);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 83:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(83);
      END_STATE();
    case 84:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 91:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead == '\n')
        ADVANCE(93);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == '-')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
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
        ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(73);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(58);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == '\n')
        ADVANCE(93);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(97);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(84);
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
        ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(73);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(98);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(58);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 99:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(99);
      END_STATE();
    case 100:
      if (lookahead == '\n')
        ADVANCE(93);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 101:
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
        ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(104);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(101);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(58);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(103);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(103);
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
    case 104:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(105);
      END_STATE();
    case 106:
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
  [1] = {.lex_state = 83},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 83},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 99},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 96},
  [24] = {.lex_state = 97},
  [25] = {.lex_state = 96},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 100},
  [29] = {.lex_state = 83},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 99},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 99},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 98},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 98},
  [44] = {.lex_state = 98},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 98},
  [48] = {.lex_state = 98},
  [49] = {.lex_state = 98},
  [50] = {.lex_state = 98},
  [51] = {.lex_state = 96},
  [52] = {.lex_state = 100},
  [53] = {.lex_state = 83},
  [54] = {.lex_state = 97},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 99},
  [57] = {.lex_state = 99},
  [58] = {.lex_state = 99},
  [59] = {.lex_state = 101},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 99},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 98},
  [65] = {.lex_state = 98},
  [66] = {.lex_state = 98},
  [67] = {.lex_state = 98},
  [68] = {.lex_state = 99},
  [69] = {.lex_state = 98},
  [70] = {.lex_state = 99},
  [71] = {.lex_state = 99},
  [72] = {.lex_state = 99},
  [73] = {.lex_state = 99},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 92},
  [78] = {.lex_state = 92},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 100},
  [82] = {.lex_state = 99},
  [83] = {.lex_state = 99},
  [84] = {.lex_state = 99},
  [85] = {.lex_state = 99},
  [86] = {.lex_state = 99},
  [87] = {.lex_state = 99},
  [88] = {.lex_state = 99},
  [89] = {.lex_state = 99},
  [90] = {.lex_state = 99},
  [91] = {.lex_state = 101},
  [92] = {.lex_state = 99},
  [93] = {.lex_state = 98},
  [94] = {.lex_state = 98},
  [95] = {.lex_state = 98},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 98},
  [98] = {.lex_state = 98},
  [99] = {.lex_state = 98},
  [100] = {.lex_state = 98},
  [101] = {.lex_state = 99},
  [102] = {.lex_state = 83},
  [103] = {.lex_state = 92},
  [104] = {.lex_state = 99},
  [105] = {.lex_state = 99},
  [106] = {.lex_state = 99},
  [107] = {.lex_state = 99},
  [108] = {.lex_state = 99},
  [109] = {.lex_state = 99},
  [110] = {.lex_state = 99},
  [111] = {.lex_state = 99},
  [112] = {.lex_state = 99},
  [113] = {.lex_state = 99},
  [114] = {.lex_state = 99},
  [115] = {.lex_state = 92},
  [116] = {.lex_state = 99},
  [117] = {.lex_state = 83},
  [118] = {.lex_state = 99},
  [119] = {.lex_state = 92},
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
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(23),
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
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(25),
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
    [sym_call_expression] = STATE(27),
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
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym__expression] = STATE(40),
    [sym__expression_component] = STATE(41),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(42),
    [sym_complex_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(74),
    [sym_boolean_literal] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_argument_list] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__end_of_statement] = STATE(46),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [19] = {
    [sym__end_of_statement] = STATE(46),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_STAR_STAR] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(100),
    [sym__newline] = ACTIONS(100),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(51),
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
  [24] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(108),
  },
  [25] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(51),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym_argument_list] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(112),
    [sym__newline] = ACTIONS(112),
  },
  [28] = {
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(108),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym__expression] = STATE(56),
    [sym__expression_component] = STATE(35),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [sym__expression] = STATE(57),
    [sym__expression_component] = STATE(58),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(118),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_argument_list] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__expression] = STATE(34),
    [sym__expression_component] = STATE(35),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_STAR_STAR] = ACTIONS(142),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(142),
    [sym__newline] = ACTIONS(142),
  },
  [39] = {
    [sym_argument_list] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_EQ_GT] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_STAR_STAR] = ACTIONS(142),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(142),
    [sym__newline] = ACTIONS(142),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(148),
    [anon_sym_STAR_STAR] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(148),
    [sym__newline] = ACTIONS(148),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [43] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(72),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym_keyword_argument] = STATE(73),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym__expression] = STATE(40),
    [sym__expression_component] = STATE(74),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(42),
    [sym_complex_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(74),
    [sym_boolean_literal] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(154),
    [sym__newline] = ACTIONS(154),
  },
  [46] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(156),
    [sym_end_statement] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [sym_number_literal] = ACTIONS(160),
    [sym_boolean_literal] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(14),
  },
  [47] = {
    [sym__expression] = STATE(40),
    [sym__expression_component] = STATE(75),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(42),
    [sym_complex_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(74),
    [sym_boolean_literal] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym__expression] = STATE(40),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(42),
    [sym_complex_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(74),
    [sym_boolean_literal] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [sym__expression] = STATE(40),
    [sym__expression_component] = STATE(77),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(42),
    [sym_complex_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(74),
    [sym_boolean_literal] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [sym__expression] = STATE(40),
    [sym__expression_component] = STATE(78),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(42),
    [sym_complex_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(74),
    [sym_boolean_literal] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym_subroutine_call] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_parenthesized_expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(51),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(162),
    [sym_end_statement] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [sym_number_literal] = ACTIONS(171),
    [sym_boolean_literal] = ACTIONS(174),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [sym_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(182),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(184),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(182),
  },
  [55] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(182),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_STAR_STAR] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [sym_number_literal] = ACTIONS(194),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(84),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym_keyword_argument] = STATE(85),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [sym__expression] = STATE(57),
    [sym__expression_component] = STATE(86),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_comment] = ACTIONS(14),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(200),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
  },
  [64] = {
    [sym__expression] = STATE(57),
    [sym__expression_component] = STATE(87),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [sym__expression] = STATE(57),
    [sym__expression_component] = STATE(88),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym__expression] = STATE(57),
    [sym__expression_component] = STATE(89),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [sym__expression] = STATE(57),
    [sym__expression_component] = STATE(90),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(58),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [70] = {
    [sym_argument_list] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_EQ_GT] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [aux_sym_argument_list_repeat1] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [aux_sym_argument_list_repeat1] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(224),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(224),
    [sym__newline] = ACTIONS(224),
  },
  [75] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
  },
  [76] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(234),
    [sym__newline] = ACTIONS(234),
  },
  [77] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
  },
  [78] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
  },
  [79] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(236),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(236),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(242),
    [anon_sym_STAR_STAR] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(246),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [aux_sym_argument_list_repeat1] = STATE(106),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [aux_sym_argument_list_repeat1] = STATE(106),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [sym_number_literal] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym_argument_list] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(108),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(109),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(110),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_STAR_STAR] = ACTIONS(260),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(260),
    [sym__newline] = ACTIONS(260),
  },
  [97] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(111),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(112),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(90),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym__expression] = STATE(71),
    [sym__expression_component] = STATE(113),
    [sym_parenthesized_expression] = STATE(36),
    [sym_assignment_expression] = STATE(36),
    [sym_pointer_assignment_expression] = STATE(36),
    [sym_math_expression] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym_keyword_argument] = STATE(114),
    [sym__literals] = STATE(22),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [aux_sym_argument_list_repeat1] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(264),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(266),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(272),
    [anon_sym_STAR_STAR] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [aux_sym_argument_list_repeat1] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(278),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(250),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(256),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(14),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
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
  [116] = {
    [aux_sym_argument_list_repeat1] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(295),
    [sym__newline] = ACTIONS(295),
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
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_component, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [162] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(12),
  [165] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [168] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [171] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [174] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [177] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [286] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(100),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
