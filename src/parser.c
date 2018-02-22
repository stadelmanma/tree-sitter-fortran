#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 84
#define SYMBOL_COUNT 33
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
  sym_program_block = 20,
  sym__expression_statement = 21,
  sym__expression = 22,
  sym__expression_component = 23,
  sym_parenthesized_expression = 24,
  sym_assignment_expression = 25,
  sym_pointer_assignment_expression = 26,
  sym_math_expression = 27,
  sym__literals = 28,
  sym_complex_literal = 29,
  sym__end_of_statement = 30,
  aux_sym_translation_unit_repeat1 = 31,
  aux_sym_program_block_repeat1 = 32,
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
  [sym_program_block] = "program_block",
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
  [sym_program_block] = {
    .visible = true,
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
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 88},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 94},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 92},
  [18] = {.lex_state = 88},
  [19] = {.lex_state = 95},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 96},
  [26] = {.lex_state = 79},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 95},
  [34] = {.lex_state = 94},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 94},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 94},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 96},
  [48] = {.lex_state = 79},
  [49] = {.lex_state = 93},
  [50] = {.lex_state = 88},
  [51] = {.lex_state = 95},
  [52] = {.lex_state = 95},
  [53] = {.lex_state = 95},
  [54] = {.lex_state = 97},
  [55] = {.lex_state = 94},
  [56] = {.lex_state = 88},
  [57] = {.lex_state = 94},
  [58] = {.lex_state = 94},
  [59] = {.lex_state = 94},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 95},
  [62] = {.lex_state = 88},
  [63] = {.lex_state = 88},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 88},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 79},
  [69] = {.lex_state = 96},
  [70] = {.lex_state = 95},
  [71] = {.lex_state = 95},
  [72] = {.lex_state = 95},
  [73] = {.lex_state = 95},
  [74] = {.lex_state = 95},
  [75] = {.lex_state = 95},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 97},
  [78] = {.lex_state = 79},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 95},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 79},
  [83] = {.lex_state = 88},
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
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(22),
    [sym_end_statement] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(24),
    [sym_end_statement] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(58),
  },
  [13] = {
    [sym__expression] = STATE(31),
    [sym__expression_component] = STATE(32),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(64),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(38),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_complex_literal] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_end_statement] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [sym_number_literal] = ACTIONS(86),
    [sym_boolean_literal] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__end_of_statement] = STATE(42),
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
  [19] = {
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
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
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(46),
    [sym_end_statement] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(108),
  },
  [24] = {
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(46),
    [sym_end_statement] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(108),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym__expression] = STATE(51),
    [sym__expression_component] = STATE(32),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(64),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [sym__expression] = STATE(52),
    [sym__expression_component] = STATE(53),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_STAR_STAR] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [sym__expression] = STATE(31),
    [sym__expression_component] = STATE(32),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(136),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
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
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [37] = {
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
  [40] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(62),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_complex_literal] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(63),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_complex_literal] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym_end_statement] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [sym_number_literal] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(64),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_complex_literal] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(65),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_complex_literal] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(66),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_complex_literal] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(46),
    [sym_end_statement] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [sym_number_literal] = ACTIONS(158),
    [sym_boolean_literal] = ACTIONS(161),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(14),
  },
  [47] = {
    [sym_identifier] = ACTIONS(167),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(169),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(171),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(169),
  },
  [50] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(169),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_STAR_STAR] = ACTIONS(177),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [sym_number_literal] = ACTIONS(181),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [sym__expression] = STATE(52),
    [sym__expression_component] = STATE(72),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_STAR_STAR] = ACTIONS(183),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(183),
    [sym__newline] = ACTIONS(183),
  },
  [57] = {
    [sym__expression] = STATE(52),
    [sym__expression_component] = STATE(73),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [sym__expression] = STATE(52),
    [sym__expression_component] = STATE(74),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [sym__expression] = STATE(52),
    [sym__expression_component] = STATE(75),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(52),
    [sym__expression_component] = STATE(76),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(187),
    [sym__newline] = ACTIONS(187),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(193),
    [sym__newline] = ACTIONS(193),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(197),
    [sym__newline] = ACTIONS(197),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(193),
    [sym__newline] = ACTIONS(193),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_STAR_STAR] = ACTIONS(193),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(193),
    [sym__newline] = ACTIONS(193),
  },
  [67] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(199),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(201),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(199),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_STAR_STAR] = ACTIONS(205),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(209),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_STAR_STAR] = ACTIONS(213),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [sym_number_literal] = ACTIONS(219),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(223),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(225),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(229),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(231),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(233),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(233),
    [sym__newline] = ACTIONS(233),
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
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_component, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [152] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [155] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [158] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [164] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
