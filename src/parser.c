#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 63
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  sym_end_statement = 5,
  anon_sym_EQ = 6,
  anon_sym_EQ_GT = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_STAR_STAR = 12,
  sym_number_literal = 13,
  sym_boolean_literal = 14,
  sym_identifier = 15,
  sym_comment = 16,
  sym__semicolon = 17,
  sym__newline = 18,
  sym_translation_unit = 19,
  sym__top_level_item = 20,
  sym_program_block = 21,
  sym__statement = 22,
  sym__simple_statements = 23,
  sym__simple_statement = 24,
  sym__compound_statement = 25,
  sym__expression = 26,
  sym__expression_component = 27,
  sym_assignment_expression = 28,
  sym_pointer_assignment_expression = 29,
  sym_math_expression = 30,
  sym__literals = 31,
  aux_sym_translation_unit_repeat1 = 32,
  aux_sym_program_block_repeat1 = 33,
  aux_sym__simple_statements_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_end_statement] = "end_statement",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [sym_number_literal] = "number_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__semicolon] = "_semicolon",
  [sym__newline] = "_newline",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym_program_block] = "program_block",
  [sym__statement] = "_statement",
  [sym__simple_statements] = "_simple_statements",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym__expression] = "_expression",
  [sym__expression_component] = "_expression_component",
  [sym_assignment_expression] = "assignment_expression",
  [sym_pointer_assignment_expression] = "pointer_assignment_expression",
  [sym_math_expression] = "math_expression",
  [sym__literals] = "_literals",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym__simple_statements_repeat1] = "_simple_statements_repeat1",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_end_statement] = {
    .visible = true,
    .named = true,
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
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
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
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__simple_statements_repeat1] = {
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
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(60);
      if (lookahead == '9')
        ADVANCE(61);
      if (lookahead == ';')
        ADVANCE(65);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(82);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
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
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(11);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 6:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ')')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == ',')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == '[')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'f')
        ADVANCE(30);
      if (lookahead == 't')
        ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'F')
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
      if (lookahead == 'a')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'A')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ']')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '[')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'l')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'L')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ']')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '[')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 's')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == ']')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '[')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'E')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == ']')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '/')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '.')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 51:
      if (lookahead == 'T')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == ']')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '[')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'r')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'R')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == ']')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '[')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'u')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'U')
        ADVANCE(43);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '9')
        ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(5);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '9')
        ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(5);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(71);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(71);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(72);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(22);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(81);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(81);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(90);
      END_STATE();
    case 91:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 98:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == '\n')
        ADVANCE(100);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(99);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(91);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(102);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '9')
        ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 102:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(11);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(102);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '9')
        ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(103);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    case 104:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(106);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        ADVANCE(100);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(106);
      if (lookahead == '/')
        ADVANCE(60);
      if (lookahead == ';')
        ADVANCE(65);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(107);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        ADVANCE(100);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(100);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(102);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '9')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(109);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 98},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 90},
  [9] = {.lex_state = 99},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 104},
  [15] = {.lex_state = 104},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 104},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 99},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 107},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 107},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 109},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 107},
  [37] = {.lex_state = 103},
  [38] = {.lex_state = 103},
  [39] = {.lex_state = 103},
  [40] = {.lex_state = 103},
  [41] = {.lex_state = 101},
  [42] = {.lex_state = 108},
  [43] = {.lex_state = 90},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 99},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 101},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 107},
  [53] = {.lex_state = 107},
  [54] = {.lex_state = 107},
  [55] = {.lex_state = 99},
  [56] = {.lex_state = 90},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 101},
  [59] = {.lex_state = 103},
  [60] = {.lex_state = 90},
  [61] = {.lex_state = 99},
  [62] = {.lex_state = 90},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_end_statement] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(26),
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
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(38),
  },
  [10] = {
    [sym__statement] = STATE(16),
    [sym__simple_statements] = STATE(17),
    [sym__simple_statement] = STATE(18),
    [sym__compound_statement] = STATE(17),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [aux_sym_program_block_repeat1] = STATE(23),
    [sym_end_statement] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym__statement] = STATE(16),
    [sym__simple_statements] = STATE(17),
    [sym__simple_statement] = STATE(18),
    [sym__compound_statement] = STATE(17),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [aux_sym_program_block_repeat1] = STATE(25),
    [sym_end_statement] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(52),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(54),
  },
  [13] = {
    [sym__expression] = STATE(30),
    [sym__expression_component] = STATE(31),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_STAR_STAR] = ACTIONS(62),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_EQ_GT] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_STAR_STAR] = ACTIONS(62),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_end_statement] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(72),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_end_statement] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [sym_number_literal] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(78),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [aux_sym__simple_statements_repeat1] = STATE(36),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(80),
    [sym__newline] = ACTIONS(82),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_STAR_STAR] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [sym__statement] = STATE(16),
    [sym__simple_statements] = STATE(17),
    [sym__simple_statement] = STATE(18),
    [sym__compound_statement] = STATE(17),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [aux_sym_program_block_repeat1] = STATE(41),
    [sym_end_statement] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(106),
  },
  [25] = {
    [sym__statement] = STATE(16),
    [sym__simple_statements] = STATE(17),
    [sym__simple_statement] = STATE(18),
    [sym__compound_statement] = STATE(17),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [aux_sym_program_block_repeat1] = STATE(41),
    [sym_end_statement] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(106),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(114),
    [sym__newline] = ACTIONS(114),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(114),
    [sym__newline] = ACTIONS(114),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(118),
    [sym__newline] = ACTIONS(118),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [33] = {
    [sym__expression] = STATE(30),
    [sym__expression_component] = STATE(46),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [sym__simple_statement] = STATE(48),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(122),
  },
  [35] = {
    [sym_end_statement] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [sym_number_literal] = ACTIONS(126),
    [sym_boolean_literal] = ACTIONS(128),
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [36] = {
    [aux_sym__simple_statements_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(130),
    [sym__newline] = ACTIONS(122),
  },
  [37] = {
    [sym__expression] = STATE(30),
    [sym__expression_component] = STATE(51),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym__expression] = STATE(30),
    [sym__expression_component] = STATE(52),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [39] = {
    [sym__expression] = STATE(30),
    [sym__expression_component] = STATE(53),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [40] = {
    [sym__expression] = STATE(30),
    [sym__expression_component] = STATE(54),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym__statement] = STATE(16),
    [sym__simple_statements] = STATE(17),
    [sym__simple_statement] = STATE(18),
    [sym__compound_statement] = STATE(17),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [aux_sym_program_block_repeat1] = STATE(41),
    [sym_end_statement] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(137),
    [sym_boolean_literal] = ACTIONS(140),
    [sym_identifier] = ACTIONS(143),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(148),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(148),
  },
  [45] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(148),
  },
  [46] = {
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(154),
    [sym__newline] = ACTIONS(154),
  },
  [47] = {
    [sym_end_statement] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(164),
    [sym_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
  },
  [49] = {
    [sym__simple_statement] = STATE(48),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(168),
  },
  [50] = {
    [aux_sym__simple_statements_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(170),
    [sym__newline] = ACTIONS(166),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(173),
    [sym__newline] = ACTIONS(173),
  },
  [52] = {
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(177),
    [sym__newline] = ACTIONS(177),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(173),
    [sym__newline] = ACTIONS(173),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_STAR_STAR] = ACTIONS(173),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(173),
    [sym__newline] = ACTIONS(173),
  },
  [55] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(179),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(181),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(179),
  },
  [58] = {
    [sym_end_statement] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [sym_number_literal] = ACTIONS(187),
    [sym_boolean_literal] = ACTIONS(189),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [sym__simple_statement] = STATE(48),
    [sym__expression] = STATE(19),
    [sym__expression_component] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_math_expression] = STATE(21),
    [sym__literals] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(44),
    [sym_boolean_literal] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(191),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(193),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(195),
    [sym_comment] = ACTIONS(14),
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
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_component, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statements, 2),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 2),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [134] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [137] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [140] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [143] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statements, 3),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 3),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 3),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [170] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(59),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statements, 4),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 4),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 4),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
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
