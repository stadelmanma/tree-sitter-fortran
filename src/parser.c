#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 117
#define SYMBOL_COUNT 37
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
  anon_sym_COMMA = 12,
  sym_number_literal = 13,
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
  sym_call_expression = 28,
  sym_argument_list = 29,
  sym_keyword_argument = 30,
  sym__literals = 31,
  sym_complex_literal = 32,
  sym__end_of_statement = 33,
  aux_sym_translation_unit_repeat1 = 34,
  aux_sym_program_block_repeat1 = 35,
  aux_sym_argument_list_repeat1 = 36,
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
  [anon_sym_COMMA] = ",",
  [sym_number_literal] = "number_literal",
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
      if (lookahead == '(')
        ADVANCE(3);
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
      if (lookahead == '(')
        ADVANCE(3);
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
  [42] = {.lex_state = 88},
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
  [58] = {.lex_state = 94},
  [59] = {.lex_state = 95},
  [60] = {.lex_state = 88},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 94},
  [65] = {.lex_state = 95},
  [66] = {.lex_state = 94},
  [67] = {.lex_state = 95},
  [68] = {.lex_state = 95},
  [69] = {.lex_state = 95},
  [70] = {.lex_state = 95},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 88},
  [74] = {.lex_state = 88},
  [75] = {.lex_state = 88},
  [76] = {.lex_state = 88},
  [77] = {.lex_state = 79},
  [78] = {.lex_state = 96},
  [79] = {.lex_state = 95},
  [80] = {.lex_state = 95},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 95},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 95},
  [86] = {.lex_state = 95},
  [87] = {.lex_state = 95},
  [88] = {.lex_state = 97},
  [89] = {.lex_state = 95},
  [90] = {.lex_state = 94},
  [91] = {.lex_state = 94},
  [92] = {.lex_state = 94},
  [93] = {.lex_state = 88},
  [94] = {.lex_state = 94},
  [95] = {.lex_state = 94},
  [96] = {.lex_state = 94},
  [97] = {.lex_state = 94},
  [98] = {.lex_state = 95},
  [99] = {.lex_state = 79},
  [100] = {.lex_state = 88},
  [101] = {.lex_state = 95},
  [102] = {.lex_state = 95},
  [103] = {.lex_state = 95},
  [104] = {.lex_state = 95},
  [105] = {.lex_state = 95},
  [106] = {.lex_state = 95},
  [107] = {.lex_state = 95},
  [108] = {.lex_state = 95},
  [109] = {.lex_state = 95},
  [110] = {.lex_state = 95},
  [111] = {.lex_state = 95},
  [112] = {.lex_state = 88},
  [113] = {.lex_state = 95},
  [114] = {.lex_state = 79},
  [115] = {.lex_state = 95},
  [116] = {.lex_state = 88},
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
    [sym_call_expression] = STATE(20),
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
    [sym_call_expression] = STATE(20),
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
    [sym_call_expression] = STATE(33),
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
    [sym_call_expression] = STATE(20),
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
    [anon_sym_COMMA] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_end_statement] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [sym_number_literal] = ACTIONS(88),
    [sym_boolean_literal] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__end_of_statement] = STATE(44),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(102),
    [sym__newline] = ACTIONS(102),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_STAR_STAR] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
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
    [sym_call_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(48),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(110),
  },
  [24] = {
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(48),
    [sym_end_statement] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(110),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym__expression] = STATE(53),
    [sym__expression_component] = STATE(32),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(55),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
    [anon_sym_COMMA] = ACTIONS(118),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym_argument_list] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(104),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
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
  [34] = {
    [sym__expression] = STATE(31),
    [sym__expression_component] = STATE(32),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
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
  [36] = {
    [sym_argument_list] = STATE(42),
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
  [37] = {
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [38] = {
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
  [39] = {
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [40] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(69),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(70),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(71),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
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
  [43] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(72),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
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
    [sym_end_statement] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [sym_number_literal] = ACTIONS(160),
    [sym_boolean_literal] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(73),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
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
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(74),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
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
  [47] = {
    [sym__expression] = STATE(37),
    [sym__expression_component] = STATE(75),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
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
  [48] = {
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [aux_sym_program_block_repeat1] = STATE(48),
    [sym_end_statement] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [sym_number_literal] = ACTIONS(170),
    [sym_boolean_literal] = ACTIONS(173),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [sym_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(181),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(183),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(185),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(181),
  },
  [52] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(181),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(104),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(104),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_STAR_STAR] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym_number_literal] = ACTIONS(193),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(81),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(82),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(83),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_STAR_STAR] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(199),
    [sym__newline] = ACTIONS(199),
  },
  [61] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(84),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
  [62] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(85),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
  [63] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(86),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
  [64] = {
    [sym__expression] = STATE(54),
    [sym__expression_component] = STATE(87),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
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
  [65] = {
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(201),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(55),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [sym_argument_list] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [aux_sym_argument_list_repeat1] = STATE(98),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [70] = {
    [aux_sym_argument_list_repeat1] = STATE(98),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(223),
    [sym__newline] = ACTIONS(223),
  },
  [72] = {
    [anon_sym_EQ] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(229),
    [sym__newline] = ACTIONS(229),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(233),
    [sym__newline] = ACTIONS(233),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(229),
    [sym__newline] = ACTIONS(229),
  },
  [75] = {
    [anon_sym_EQ] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(229),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(229),
    [sym__newline] = ACTIONS(229),
  },
  [76] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(235),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(237),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(235),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_STAR_STAR] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(245),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [aux_sym_argument_list_repeat1] = STATE(103),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [aux_sym_argument_list_repeat1] = STATE(103),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [sym_number_literal] = ACTIONS(257),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [sym_argument_list] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(105),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(106),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(107),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(259),
    [sym__newline] = ACTIONS(259),
  },
  [94] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(108),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(109),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(87),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [sym__expression] = STATE(68),
    [sym__expression_component] = STATE(110),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(111),
    [sym__literals] = STATE(21),
    [sym_complex_literal] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(48),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [aux_sym_argument_list_repeat1] = STATE(113),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(263),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(265),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(267),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [aux_sym_argument_list_repeat1] = STATE(113),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(277),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(279),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(281),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(283),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(283),
    [sym__newline] = ACTIONS(283),
  },
  [113] = {
    [aux_sym_argument_list_repeat1] = STATE(113),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(285),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(288),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(290),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_STAR_STAR] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(294),
    [sym__newline] = ACTIONS(294),
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
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_component, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [164] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [167] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [170] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [173] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [176] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [285] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(97),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
