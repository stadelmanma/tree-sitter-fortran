#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 144
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_PERCENT = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_STAR_STAR = 13,
  anon_sym_COMMA = 14,
  anon_sym_COLON = 15,
  sym_number_literal = 16,
  sym__double_quoted_string = 17,
  sym__single_quoted_string = 18,
  sym_boolean_literal = 19,
  sym_identifier = 20,
  sym_comment = 21,
  sym__semicolon = 22,
  sym__newline = 23,
  sym_translation_unit = 24,
  sym_program_block = 25,
  sym_subroutine_call = 26,
  sym__expression = 27,
  sym_parenthesized_expression = 28,
  sym_assignment_expression = 29,
  sym_pointer_assignment_expression = 30,
  sym_derived_type_member_expression = 31,
  sym_math_expression = 32,
  sym_call_expression = 33,
  sym_argument_list = 34,
  sym_keyword_argument = 35,
  sym_array_slice = 36,
  sym_complex_literal = 37,
  sym_string_literal = 38,
  sym__end_of_statement = 39,
  aux_sym_translation_unit_repeat1 = 40,
  aux_sym_program_block_repeat1 = 41,
  aux_sym_argument_list_repeat1 = 42,
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
  [anon_sym_PERCENT] = "%",
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
  [sym_derived_type_member_expression] = "derived_type_member_expression",
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
  [anon_sym_PERCENT] = {
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
  [sym_derived_type_member_expression] = {
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
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '9')
        ADVANCE(56);
      if (lookahead == ':')
        ADVANCE(61);
      if (lookahead == ';')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(83);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(66);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
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
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 7:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__single_quoted_string);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == '[')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'f')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'F')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == ']')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '[')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'a')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'A')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ']')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '[')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'l')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'L')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ']')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '[')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 's')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'S')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ']')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '[')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'E')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ']')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '/')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '.')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 46:
      if (lookahead == 'T')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == ']')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '[')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'r')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'R')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ']')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '[')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'U')
        ADVANCE(38);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
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
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(73);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(74);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(82);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(82);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(91);
      END_STATE();
    case 92:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 99:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '9')
        ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(66);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(105);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(92);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '9')
        ADVANCE(56);
      if (lookahead == ':')
        ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(106);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(66);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == ':')
        ADVANCE(61);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(107);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(65);
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
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(66);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(111);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(113);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 91},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 100},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 100},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 105},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 107},
  [17] = {.lex_state = 107},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 100},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 100},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 105},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 99},
  [26] = {.lex_state = 100},
  [27] = {.lex_state = 108},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 107},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 106},
  [35] = {.lex_state = 100},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 106},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 106},
  [42] = {.lex_state = 106},
  [43] = {.lex_state = 104},
  [44] = {.lex_state = 108},
  [45] = {.lex_state = 91},
  [46] = {.lex_state = 105},
  [47] = {.lex_state = 100},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 107},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 100},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 106},
  [60] = {.lex_state = 107},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 99},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 100},
  [66] = {.lex_state = 100},
  [67] = {.lex_state = 100},
  [68] = {.lex_state = 100},
  [69] = {.lex_state = 100},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 100},
  [75] = {.lex_state = 91},
  [76] = {.lex_state = 108},
  [77] = {.lex_state = 99},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 107},
  [80] = {.lex_state = 99},
  [81] = {.lex_state = 107},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 107},
  [84] = {.lex_state = 107},
  [85] = {.lex_state = 107},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 107},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 100},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 106},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 106},
  [96] = {.lex_state = 99},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 107},
  [99] = {.lex_state = 100},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 106},
  [102] = {.lex_state = 106},
  [103] = {.lex_state = 106},
  [104] = {.lex_state = 91},
  [105] = {.lex_state = 100},
  [106] = {.lex_state = 107},
  [107] = {.lex_state = 107},
  [108] = {.lex_state = 99},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 107},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 107},
  [113] = {.lex_state = 107},
  [114] = {.lex_state = 107},
  [115] = {.lex_state = 107},
  [116] = {.lex_state = 107},
  [117] = {.lex_state = 107},
  [118] = {.lex_state = 99},
  [119] = {.lex_state = 107},
  [120] = {.lex_state = 100},
  [121] = {.lex_state = 99},
  [122] = {.lex_state = 109},
  [123] = {.lex_state = 100},
  [124] = {.lex_state = 100},
  [125] = {.lex_state = 100},
  [126] = {.lex_state = 100},
  [127] = {.lex_state = 100},
  [128] = {.lex_state = 91},
  [129] = {.lex_state = 107},
  [130] = {.lex_state = 107},
  [131] = {.lex_state = 106},
  [132] = {.lex_state = 106},
  [133] = {.lex_state = 106},
  [134] = {.lex_state = 106},
  [135] = {.lex_state = 107},
  [136] = {.lex_state = 106},
  [137] = {.lex_state = 99},
  [138] = {.lex_state = 107},
  [139] = {.lex_state = 107},
  [140] = {.lex_state = 107},
  [141] = {.lex_state = 107},
  [142] = {.lex_state = 107},
  [143] = {.lex_state = 100},
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
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym_derived_type_member_expression] = STATE(16),
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
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
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
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
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
    [sym_argument_list] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym__end_of_statement] = STATE(36),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [sym__end_of_statement] = STATE(36),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_EQ_GT] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
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
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(43),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(100),
  },
  [24] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(43),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [sym_end_statement] = ACTIONS(102),
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
    [sym_argument_list] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [27] = {
    [sym_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(100),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [sym__expression] = STATE(48),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [sym_argument_list] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
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
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [sym__expression] = STATE(61),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(62),
    [sym_array_slice] = STATE(62),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
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
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__expression] = STATE(68),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym__expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [39] = {
    [sym__expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym__expression] = STATE(71),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym__expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym__expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
  [43] = {
    [sym_subroutine_call] = STATE(19),
    [sym__expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(16),
    [sym_assignment_expression] = STATE(19),
    [sym_pointer_assignment_expression] = STATE(19),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(21),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [aux_sym_program_block_repeat1] = STATE(43),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(158),
    [sym_end_statement] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [sym_number_literal] = ACTIONS(167),
    [sym__double_quoted_string] = ACTIONS(170),
    [sym__single_quoted_string] = ACTIONS(170),
    [sym_boolean_literal] = ACTIONS(173),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(181),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(183),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(185),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(181),
  },
  [47] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(181),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [sym_number_literal] = ACTIONS(187),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [sym__expression] = STATE(79),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(80),
    [sym_array_slice] = STATE(80),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_EQ_GT] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_STAR_STAR] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [sym__expression] = STATE(81),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
    [sym__expression] = STATE(82),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
  [55] = {
    [sym__expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
  [56] = {
    [sym__expression] = STATE(84),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
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
  [57] = {
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_EQ_GT] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(199),
    [sym__newline] = ACTIONS(199),
  },
  [58] = {
    [sym__expression] = STATE(85),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [sym__expression] = STATE(87),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym_argument_list] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [aux_sym_argument_list_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [aux_sym_argument_list_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_comment] = ACTIONS(14),
  },
  [63] = {
    [sym__expression] = STATE(98),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(223),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [64] = {
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [66] = {
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(225),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(225),
    [sym__newline] = ACTIONS(225),
  },
  [67] = {
    [sym_argument_list] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [68] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(235),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(237),
    [sym__newline] = ACTIONS(237),
  },
  [69] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(235),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(239),
    [sym__newline] = ACTIONS(239),
  },
  [70] = {
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_STAR_STAR] = ACTIONS(243),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(249),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(251),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [sym_identifier] = ACTIONS(253),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(249),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_EQ_GT] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_STAR_STAR] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(257),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [aux_sym_argument_list_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [aux_sym_argument_list_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_STAR_STAR] = ACTIONS(243),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(128),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [sym__expression] = STATE(110),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(267),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [sym__expression] = STATE(112),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_EQ_GT] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_STAR_STAR] = ACTIONS(269),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(269),
    [sym__newline] = ACTIONS(269),
  },
  [90] = {
    [sym__expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [sym__expression] = STATE(116),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__expression] = STATE(117),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_keyword_argument] = STATE(118),
    [sym_array_slice] = STATE(118),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [sym__expression] = STATE(119),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(267),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [aux_sym_argument_list_repeat1] = STATE(121),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(273),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(277),
    [sym__newline] = ACTIONS(277),
  },
  [100] = {
    [sym__expression] = STATE(124),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [sym__expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [sym__expression] = STATE(126),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [sym__expression] = STATE(127),
    [sym_parenthesized_expression] = STATE(65),
    [sym_derived_type_member_expression] = STATE(65),
    [sym_math_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_complex_literal] = STATE(65),
    [sym_string_literal] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(279),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(281),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_EQ_GT] = ACTIONS(283),
    [anon_sym_PERCENT] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(283),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_EQ_GT] = ACTIONS(287),
    [anon_sym_PERCENT] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [aux_sym_argument_list_repeat1] = STATE(121),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [sym__expression] = STATE(130),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(293),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [sym__expression] = STATE(135),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(305),
    [sym_comment] = ACTIONS(14),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_STAR_STAR] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(221),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_EQ_GT] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_STAR_STAR] = ACTIONS(311),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(311),
    [sym__newline] = ACTIONS(311),
  },
  [121] = {
    [aux_sym_argument_list_repeat1] = STATE(121),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(14),
  },
  [122] = {
    [sym_number_literal] = ACTIONS(316),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [anon_sym_PERCENT] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(318),
    [sym__newline] = ACTIONS(318),
  },
  [124] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(320),
    [anon_sym_STAR_STAR] = ACTIONS(320),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
  },
  [125] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(235),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [126] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_STAR_STAR] = ACTIONS(235),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [127] = {
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_STAR_STAR] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(324),
    [sym_comment] = ACTIONS(14),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [sym_comment] = ACTIONS(14),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_comment] = ACTIONS(14),
  },
  [131] = {
    [sym__expression] = STATE(138),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [sym__expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [133] = {
    [sym__expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [134] = {
    [sym__expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(330),
    [sym_comment] = ACTIONS(14),
  },
  [136] = {
    [sym__expression] = STATE(142),
    [sym_parenthesized_expression] = STATE(16),
    [sym_derived_type_member_expression] = STATE(16),
    [sym_math_expression] = STATE(16),
    [sym_call_expression] = STATE(16),
    [sym_complex_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(50),
    [sym__double_quoted_string] = ACTIONS(52),
    [sym__single_quoted_string] = ACTIONS(52),
    [sym_boolean_literal] = ACTIONS(54),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
  },
  [137] = {
    [anon_sym_RPAREN] = ACTIONS(332),
    [sym_comment] = ACTIONS(14),
  },
  [138] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_STAR_STAR] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(334),
    [sym_comment] = ACTIONS(14),
  },
  [143] = {
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
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
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [158] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(12),
  [161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [164] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [167] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [170] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [173] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [176] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 3),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [313] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(94),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 4),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 5),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
