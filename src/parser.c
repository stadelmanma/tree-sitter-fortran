#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 54
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_STAR_STAR = 10,
  sym_number_literal = 11,
  sym_boolean_literal = 12,
  sym_identifier = 13,
  sym_comment = 14,
  sym__semicolon = 15,
  sym__newline = 16,
  sym_translation_unit = 17,
  sym__top_level_item = 18,
  sym_program_block = 19,
  sym__statement = 20,
  sym__simple_statements = 21,
  sym__simple_statement = 22,
  sym__compound_statement = 23,
  sym__expression = 24,
  sym__expression_component = 25,
  sym_assignment_expression = 26,
  sym_pointer_assignment_expression = 27,
  sym__literals = 28,
  aux_sym_translation_unit_repeat1 = 29,
  aux_sym_program_block_repeat1 = 30,
  aux_sym__simple_statements_repeat1 = 31,
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
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == ';')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(63);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(78);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(67);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == '[')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'f')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'F')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == ']')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '[')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'A')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == ']')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '[')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'L')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ']')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '[')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 's')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'S')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ']')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '[')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'E')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ']')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '/')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '.')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 44:
      if (lookahead == 'T')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == ']')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '[')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'r')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'R')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == ']')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '[')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'U')
        ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(56);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(54);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(56);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b')
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
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(56);
      if (lookahead == '9')
        ADVANCE(58);
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
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(69);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(71);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(69);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(71);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(54);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(76);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(79);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(79);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(88);
      END_STATE();
    case 89:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 96:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 97:
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(97);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(89);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(78);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(67);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 100:
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
    case 101:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 102:
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 103:
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(78);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(104);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(67);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(105);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(78);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(87);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(67);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 96},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 88},
  [5] = {.lex_state = 88},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 88},
  [9] = {.lex_state = 97},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 97},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 101},
  [15] = {.lex_state = 99},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 102},
  [18] = {.lex_state = 102},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 97},
  [24] = {.lex_state = 99},
  [25] = {.lex_state = 103},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 104},
  [28] = {.lex_state = 105},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 102},
  [31] = {.lex_state = 104},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 88},
  [35] = {.lex_state = 97},
  [36] = {.lex_state = 97},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 102},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 97},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 99},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 88},
  [52] = {.lex_state = 97},
  [53] = {.lex_state = 88},
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
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(3),
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
    [sym__statement] = STATE(15),
    [sym__simple_statements] = STATE(16),
    [sym__simple_statement] = STATE(17),
    [sym__compound_statement] = STATE(16),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [aux_sym_program_block_repeat1] = STATE(22),
    [sym_end_statement] = ACTIONS(40),
    [sym_number_literal] = ACTIONS(42),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym__statement] = STATE(15),
    [sym__simple_statements] = STATE(16),
    [sym__simple_statement] = STATE(17),
    [sym__compound_statement] = STATE(16),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [aux_sym_program_block_repeat1] = STATE(24),
    [sym_end_statement] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(42),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(52),
  },
  [13] = {
    [anon_sym_EQ] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym_end_statement] = ACTIONS(60),
    [sym_number_literal] = ACTIONS(60),
    [sym_boolean_literal] = ACTIONS(62),
    [sym_identifier] = ACTIONS(64),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_end_statement] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(66),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [aux_sym__simple_statements_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(74),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(82),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(84),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__statement] = STATE(15),
    [sym__simple_statements] = STATE(16),
    [sym__simple_statement] = STATE(17),
    [sym__compound_statement] = STATE(16),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [aux_sym_program_block_repeat1] = STATE(32),
    [sym_end_statement] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(42),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(88),
  },
  [24] = {
    [sym__statement] = STATE(15),
    [sym__simple_statements] = STATE(16),
    [sym__simple_statement] = STATE(17),
    [sym__compound_statement] = STATE(16),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [aux_sym_program_block_repeat1] = STATE(32),
    [sym_end_statement] = ACTIONS(90),
    [sym_number_literal] = ACTIONS(42),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(88),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(40),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_number_literal] = ACTIONS(96),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [sym__simple_statement] = STATE(42),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_number_literal] = ACTIONS(102),
    [sym_boolean_literal] = ACTIONS(102),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(104),
  },
  [29] = {
    [sym_end_statement] = ACTIONS(106),
    [sym_number_literal] = ACTIONS(106),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [aux_sym__simple_statements_repeat1] = STATE(44),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(112),
    [sym__newline] = ACTIONS(104),
  },
  [31] = {
    [sym__expression] = STATE(39),
    [sym__expression_component] = STATE(45),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(39),
    [sym_number_literal] = ACTIONS(96),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [sym__statement] = STATE(15),
    [sym__simple_statements] = STATE(16),
    [sym__simple_statement] = STATE(17),
    [sym__compound_statement] = STATE(16),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [aux_sym_program_block_repeat1] = STATE(32),
    [sym_end_statement] = ACTIONS(114),
    [sym_number_literal] = ACTIONS(116),
    [sym_boolean_literal] = ACTIONS(119),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_identifier] = ACTIONS(125),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(127),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(131),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(127),
  },
  [36] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(127),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(133),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(133),
    [sym__newline] = ACTIONS(133),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_EQ_GT] = ACTIONS(135),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(133),
    [sym__newline] = ACTIONS(133),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(137),
    [sym__newline] = ACTIONS(137),
  },
  [41] = {
    [sym_end_statement] = ACTIONS(139),
    [sym_number_literal] = ACTIONS(139),
    [sym_boolean_literal] = ACTIONS(141),
    [sym_identifier] = ACTIONS(143),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(145),
    [sym__newline] = ACTIONS(145),
  },
  [43] = {
    [sym__simple_statement] = STATE(42),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_number_literal] = ACTIONS(102),
    [sym_boolean_literal] = ACTIONS(102),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(147),
  },
  [44] = {
    [aux_sym__simple_statements_repeat1] = STATE(44),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(149),
    [sym__newline] = ACTIONS(145),
  },
  [45] = {
    [anon_sym_EQ] = ACTIONS(152),
    [sym_comment] = ACTIONS(36),
    [sym__semicolon] = ACTIONS(154),
    [sym__newline] = ACTIONS(154),
  },
  [46] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(156),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(156),
  },
  [49] = {
    [sym_end_statement] = ACTIONS(162),
    [sym_number_literal] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [sym__simple_statement] = STATE(42),
    [sym__expression] = STATE(18),
    [sym__expression_component] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym__literals] = STATE(21),
    [sym_number_literal] = ACTIONS(42),
    [sym_boolean_literal] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [sym_comment] = ACTIONS(36),
    [sym__newline] = ACTIONS(170),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(172),
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
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_component, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statements, 2),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 2),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 2),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [116] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [119] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [122] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statements, 3),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 3),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 3),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [149] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(50),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statements, 4),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 4),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statements, 4),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
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
