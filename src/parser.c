#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 86
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  sym_end_statement = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_PLUS = 7,
  anon_sym_DASH = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  anon_sym_STAR_STAR = 11,
  sym_number_literal = 12,
  anon_sym_COMMA = 13,
  sym_boolean_literal = 14,
  sym_identifier = 15,
  sym_comment = 16,
  sym__semicolon = 17,
  sym__newline = 18,
  sym_translation_unit = 19,
  sym__top_level_item = 20,
  sym_program_block = 21,
  sym__statement = 22,
  sym__expression_statement = 23,
  sym__expression = 24,
  sym__expression_component = 25,
  sym_parenthesized_expression = 26,
  sym_assignment_expression = 27,
  sym_pointer_assignment_expression = 28,
  sym_math_expression = 29,
  sym__literals = 30,
  sym_complex_literal = 31,
  sym__end_of_statement = 32,
  aux_sym_translation_unit_repeat1 = 33,
  aux_sym_program_block_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
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
  [sym_number_literal] = "number_literal",
  [anon_sym_COMMA] = ",",
  [sym_boolean_literal] = "boolean_literal",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__semicolon] = "_semicolon",
  [sym__newline] = "_newline",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym_program_block] = "program_block",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym__expression_component] = "_expression_component",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_pointer_assignment_expression] = "pointer_assignment_expression",
  [sym_math_expression] = "math_expression",
  [sym__literals] = "_literals",
  [sym_complex_literal] = "complex_literal",
  [sym__end_of_statement] = "_end_of_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
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
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_program_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
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
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(71);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(78);
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
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(67);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(70);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(70);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 78:
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
    case 79:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(79);
      END_STATE();
    case 80:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 87:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        ADVANCE(89);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == '-')
        ADVANCE(91);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 92:
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
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(69);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(92);
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
    case 93:
      if (lookahead == '\n')
        ADVANCE(89);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(93);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(80);
      END_STATE();
    case 94:
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
        ADVANCE(69);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(94);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(64);
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
    case 95:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(91);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(95);
      END_STATE();
    case 96:
      if (lookahead == '\n')
        ADVANCE(89);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 97:
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
        ADVANCE(98);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(100);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(97);
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
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(99);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(99);
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
    case 100:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(101);
      END_STATE();
    case 102:
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
  [1] = {.lex_state = 79},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 88},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 88},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 95},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 88},
  [23] = {.lex_state = 95},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 96},
  [28] = {.lex_state = 79},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 95},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 94},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 79},
  [51] = {.lex_state = 93},
  [52] = {.lex_state = 88},
  [53] = {.lex_state = 95},
  [54] = {.lex_state = 95},
  [55] = {.lex_state = 95},
  [56] = {.lex_state = 97},
  [57] = {.lex_state = 94},
  [58] = {.lex_state = 88},
  [59] = {.lex_state = 94},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 95},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 88},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 79},
  [71] = {.lex_state = 96},
  [72] = {.lex_state = 95},
  [73] = {.lex_state = 95},
  [74] = {.lex_state = 95},
  [75] = {.lex_state = 95},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 95},
  [78] = {.lex_state = 95},
  [79] = {.lex_state = 97},
  [80] = {.lex_state = 79},
  [81] = {.lex_state = 88},
  [82] = {.lex_state = 95},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 79},
  [85] = {.lex_state = 88},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
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
    [sym_number_literal] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__semicolon] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_unit] = STATE(3),
    [sym__top_level_item] = STATE(4),
    [sym_program_block] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(6),
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
    [ts_builtin_sym_end] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [sym__top_level_item] = STATE(4),
    [sym_program_block] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [7] = {
    [sym__end_of_statement] = STATE(11),
    [sym_comment] = ACTIONS(26),
    [sym__semicolon] = ACTIONS(29),
    [sym__newline] = ACTIONS(29),
  },
  [8] = {
    [sym__top_level_item] = STATE(4),
    [sym_program_block] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(33),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [sym__end_of_statement] = STATE(12),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(29),
    [sym__newline] = ACTIONS(29),
  },
  [10] = {
    [sym_end_statement] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(42),
    [sym_boolean_literal] = ACTIONS(40),
    [sym_identifier] = ACTIONS(42),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(19),
    [sym__expression] = STATE(20),
    [sym__expression_component] = STATE(21),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(24),
    [sym_end_statement] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(19),
    [sym__expression] = STATE(20),
    [sym__expression_component] = STATE(21),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(26),
    [sym_end_statement] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(58),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(60),
  },
  [14] = {
    [sym__expression] = STATE(33),
    [sym__expression_component] = STATE(34),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(40),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(41),
    [sym_complex_literal] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(72),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym_end_statement] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [sym_number_literal] = ACTIONS(88),
    [sym_boolean_literal] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym_end_statement] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_number_literal] = ACTIONS(94),
    [sym_boolean_literal] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [sym__end_of_statement] = STATE(44),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(29),
    [sym__newline] = ACTIONS(29),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_STAR_STAR] = ACTIONS(106),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_STAR_STAR] = ACTIONS(108),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(108),
    [sym__newline] = ACTIONS(108),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(19),
    [sym__expression] = STATE(20),
    [sym__expression_component] = STATE(21),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(48),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(116),
  },
  [26] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(19),
    [sym__expression] = STATE(20),
    [sym__expression_component] = STATE(21),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(48),
    [sym_end_statement] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(116),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [sym__expression] = STATE(53),
    [sym__expression_component] = STATE(34),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(55),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_EQ_GT] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_STAR_STAR] = ACTIONS(140),
    [sym_comment] = ACTIONS(14),
  },
  [36] = {
    [sym__expression] = STATE(33),
    [sym__expression_component] = STATE(34),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(144),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_STAR_STAR] = ACTIONS(146),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_EQ_GT] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_STAR_STAR] = ACTIONS(146),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(150),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(150),
    [sym__newline] = ACTIONS(150),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [42] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(64),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(41),
    [sym_complex_literal] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(72),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(65),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(41),
    [sym_complex_literal] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(72),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym_end_statement] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [sym_number_literal] = ACTIONS(156),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(66),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(41),
    [sym_complex_literal] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(72),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(67),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(41),
    [sym_complex_literal] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(72),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [47] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(68),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(41),
    [sym_complex_literal] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(72),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(19),
    [sym__expression] = STATE(20),
    [sym__expression_component] = STATE(21),
    [sym_parenthesized_expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_pointer_assignment_expression] = STATE(22),
    [sym_math_expression] = STATE(22),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(48),
    [sym_end_statement] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [sym_number_literal] = ACTIONS(166),
    [sym_boolean_literal] = ACTIONS(169),
    [sym_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(177),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(181),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(177),
  },
  [52] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(177),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_STAR_STAR] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym_number_literal] = ACTIONS(189),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(74),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(191),
    [sym__newline] = ACTIONS(191),
  },
  [59] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(75),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(77),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(78),
    [sym_parenthesized_expression] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_pointer_assignment_expression] = STATE(35),
    [sym_math_expression] = STATE(35),
    [sym__literals] = STATE(23),
    [sym_complex_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(50),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_comment] = ACTIONS(14),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(195),
    [sym__newline] = ACTIONS(195),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(201),
    [sym__newline] = ACTIONS(201),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(205),
    [sym__newline] = ACTIONS(205),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(201),
    [sym__newline] = ACTIONS(201),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_STAR_STAR] = ACTIONS(201),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(201),
    [sym__newline] = ACTIONS(201),
  },
  [69] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(207),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(207),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_STAR_STAR] = ACTIONS(213),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(217),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_STAR_STAR] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym_number_literal] = ACTIONS(227),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(229),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(231),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(233),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(237),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(239),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_STAR_STAR] = ACTIONS(241),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(241),
    [sym__newline] = ACTIONS(241),
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
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_item, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_translation_unit, 1),
  [26] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT(9), SHIFT_EXTRA(),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [33] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__end_of_statement, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_component, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [160] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [163] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [166] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [172] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
