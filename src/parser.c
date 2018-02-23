#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 128
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym__double_quoted_string = 16,
  sym__single_quoted_string = 17,
  sym_boolean_literal = 18,
  sym_identifier = 19,
  sym_comment = 20,
  sym__semicolon = 21,
  sym__newline = 22,
  sym_translation_unit = 23,
  sym_program_block = 24,
  sym_subroutine_call = 25,
  sym__expression = 26,
  sym_parenthesized_expression = 27,
  sym_assignment_expression = 28,
  sym_pointer_assignment_expression = 29,
  sym_math_expression = 30,
  sym_call_expression = 31,
  sym_argument_list = 32,
  sym_keyword_argument = 33,
  sym_array_slice = 34,
  sym_complex_literal = 35,
  sym_string_literal = 36,
  sym__end_of_statement = 37,
  aux_sym_translation_unit_repeat1 = 38,
  aux_sym_program_block_repeat1 = 39,
  aux_sym_argument_list_repeat1 = 40,
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
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__single_quoted_string] = "_single_quoted_string",
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
  [sym_string_literal] = "string_literal",
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
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quoted_string] = {
    .visible = false,
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
  [sym_string_literal] = {
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
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == '9')
        ADVANCE(55);
      if (lookahead == ':')
        ADVANCE(60);
      if (lookahead == ';')
        ADVANCE(61);
      if (lookahead == '=')
        ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(71);
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
        ADVANCE(68);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(65);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
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
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__double_quoted_string);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__single_quoted_string);
      if (lookahead == '\'')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == '[')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f')
        ADVANCE(24);
      if (lookahead == 't')
        ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'F')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ']')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '[')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'a')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'A')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == ']')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '[')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'L')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == ']')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '[')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'S')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ']')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '[')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'E')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ']')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '/')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '.')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 45:
      if (lookahead == 'T')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == ']')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '[')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'R')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == ']')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '[')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'u')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'U')
        ADVANCE(37);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(16);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '9')
        ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(56);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '9')
        ADVANCE(55);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(56);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(67);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(67);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(73);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(16);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
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
        ADVANCE(70);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(81);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(81);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
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
        ADVANCE(70);
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
        ADVANCE(70);
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
        ADVANCE(70);
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
        ADVANCE(70);
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
        ADVANCE(70);
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
        ADVANCE(70);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
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
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 99:
      if (lookahead == '\n')
        ADVANCE(100);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == ';')
        ADVANCE(61);
      if (lookahead == '=')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '9')
        ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(71);
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
        SKIP(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(65);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == '\n')
        ADVANCE(100);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(105);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(91);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '9')
        ADVANCE(55);
      if (lookahead == ':')
        ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(106);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(65);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(70);
      END_STATE();
    case 107:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == ':')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
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
        ADVANCE(70);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '9')
        ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(18);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(112);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(109);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(65);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(111);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(56);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(113);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 98},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 99},
  [7] = {.lex_state = 90},
  [8] = {.lex_state = 99},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 105},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 107},
  [17] = {.lex_state = 107},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 99},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 105},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 99},
  [27] = {.lex_state = 108},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 107},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 106},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 106},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 106},
  [42] = {.lex_state = 104},
  [43] = {.lex_state = 108},
  [44] = {.lex_state = 90},
  [45] = {.lex_state = 105},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 106},
  [49] = {.lex_state = 107},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 106},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 107},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 98},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 106},
  [62] = {.lex_state = 99},
  [63] = {.lex_state = 99},
  [64] = {.lex_state = 99},
  [65] = {.lex_state = 99},
  [66] = {.lex_state = 99},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 99},
  [71] = {.lex_state = 90},
  [72] = {.lex_state = 108},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 107},
  [75] = {.lex_state = 107},
  [76] = {.lex_state = 98},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 106},
  [80] = {.lex_state = 107},
  [81] = {.lex_state = 106},
  [82] = {.lex_state = 99},
  [83] = {.lex_state = 106},
  [84] = {.lex_state = 106},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 98},
  [89] = {.lex_state = 107},
  [90] = {.lex_state = 107},
  [91] = {.lex_state = 99},
  [92] = {.lex_state = 106},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 90},
  [96] = {.lex_state = 99},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 107},
  [99] = {.lex_state = 98},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 107},
  [102] = {.lex_state = 106},
  [103] = {.lex_state = 107},
  [104] = {.lex_state = 107},
  [105] = {.lex_state = 107},
  [106] = {.lex_state = 107},
  [107] = {.lex_state = 98},
  [108] = {.lex_state = 107},
  [109] = {.lex_state = 99},
  [110] = {.lex_state = 98},
  [111] = {.lex_state = 109},
  [112] = {.lex_state = 99},
  [113] = {.lex_state = 99},
  [114] = {.lex_state = 99},
  [115] = {.lex_state = 99},
  [116] = {.lex_state = 90},
  [117] = {.lex_state = 107},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 106},
  [120] = {.lex_state = 106},
  [121] = {.lex_state = 107},
  [122] = {.lex_state = 106},
  [123] = {.lex_state = 98},
  [124] = {.lex_state = 107},
  [125] = {.lex_state = 107},
  [126] = {.lex_state = 107},
  [127] = {.lex_state = 99},
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
    [sym__double_quoted_string] = ACTIONS(3),
    [sym__single_quoted_string] = ACTIONS(3),
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
    [sym__double_quoted_string] = ACTIONS(36),
    [sym__single_quoted_string] = ACTIONS(36),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(22),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(24),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [sym_call_expression] = STATE(26),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(64),
  },
  [14] = {
    [sym__expression] = STATE(32),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym_argument_list] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym__end_of_statement] = STATE(37),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(92),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [sym__end_of_statement] = STATE(37),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [22] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(98),
  },
  [24] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym_argument_list] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(102),
    [sym__newline] = ACTIONS(102),
  },
  [27] = {
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(98),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(108),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [sym_argument_list] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [sym__expression] = STATE(58),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(59),
    [sym_array_slice] = STATE(59),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [sym__expression] = STATE(65),
    [sym_parenthesized_expression] = STATE(62),
    [sym_math_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_complex_literal] = STATE(62),
    [sym_string_literal] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [36] = {
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
  [37] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [sym_end_statement] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym__expression] = STATE(66),
    [sym_parenthesized_expression] = STATE(62),
    [sym_math_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_complex_literal] = STATE(62),
    [sym_string_literal] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [39] = {
    [sym__expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [40] = {
    [sym__expression] = STATE(68),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym__expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(154),
    [sym_end_statement] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(163),
    [sym__double_quoted_string] = ACTIONS(166),
    [sym__single_quoted_string] = ACTIONS(166),
    [sym_boolean_literal] = ACTIONS(169),
    [sym_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(177),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(181),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(177),
  },
  [46] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(177),
  },
  [47] = {
    [sym_number_literal] = ACTIONS(183),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym__expression] = STATE(75),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(76),
    [sym_array_slice] = STATE(76),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_STAR_STAR] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym__expression] = STATE(77),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [sym__expression] = STATE(78),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [sym__expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_STAR_STAR] = ACTIONS(195),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(195),
    [sym__newline] = ACTIONS(195),
  },
  [55] = {
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym__expression] = STATE(80),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(199),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym_argument_list] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [aux_sym_argument_list_repeat1] = STATE(88),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(215),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [aux_sym_argument_list_repeat1] = STATE(88),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(90),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(217),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [sym__expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(62),
    [sym_math_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_complex_literal] = STATE(62),
    [sym_string_literal] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(94),
    [sym__newline] = ACTIONS(94),
  },
  [63] = {
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(219),
    [sym__newline] = ACTIONS(219),
  },
  [64] = {
    [sym_argument_list] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(94),
    [sym__newline] = ACTIONS(94),
  },
  [65] = {
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(229),
    [sym__newline] = ACTIONS(229),
  },
  [66] = {
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(231),
    [sym__newline] = ACTIONS(231),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(92),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(92),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [sym_comment] = ACTIONS(14),
  },
  [70] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(237),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(239),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [sym_identifier] = ACTIONS(241),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(237),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_STAR_STAR] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [aux_sym_argument_list_repeat1] = STATE(99),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(215),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [aux_sym_argument_list_repeat1] = STATE(99),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym__expression] = STATE(101),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(255),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [sym__expression] = STATE(103),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_STAR_STAR] = ACTIONS(257),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(257),
    [sym__newline] = ACTIONS(257),
  },
  [83] = {
    [sym__expression] = STATE(104),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [sym__expression] = STATE(105),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [sym__expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [sym__expression] = STATE(106),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(107),
    [sym_array_slice] = STATE(107),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [sym__expression] = STATE(108),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(255),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [aux_sym_argument_list_repeat1] = STATE(110),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(261),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_STAR_STAR] = ACTIONS(265),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(265),
    [sym__newline] = ACTIONS(265),
  },
  [92] = {
    [sym__expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(62),
    [sym_math_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_complex_literal] = STATE(62),
    [sym_string_literal] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(62),
    [sym_math_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_complex_literal] = STATE(62),
    [sym_string_literal] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(62),
    [sym_math_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_complex_literal] = STATE(62),
    [sym_string_literal] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(267),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(269),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(271),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_STAR_STAR] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [aux_sym_argument_list_repeat1] = STATE(110),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(281),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [sym__expression] = STATE(121),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(215),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(295),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_STAR_STAR] = ACTIONS(297),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(297),
    [sym__newline] = ACTIONS(297),
  },
  [110] = {
    [aux_sym_argument_list_repeat1] = STATE(110),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(299),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [sym_number_literal] = ACTIONS(302),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
  },
  [113] = {
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
  },
  [114] = {
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
  },
  [115] = {
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [sym__expression] = STATE(124),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [sym__expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [sym__expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(314),
    [sym_comment] = ACTIONS(14),
  },
  [122] = {
    [sym__expression] = STATE(126),
    [sym_parenthesized_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(316),
    [sym_comment] = ACTIONS(14),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(14),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(14),
  },
  [126] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(318),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(320),
    [anon_sym_STAR_STAR] = ACTIONS(320),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
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
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [154] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(12),
  [157] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [160] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [163] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [166] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [169] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [172] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 3),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [299] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(86),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 4),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 5),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
