#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 148
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  sym_statement_label = 2,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 3,
  sym_end_statement = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_EQ = 7,
  anon_sym_EQ_GT = 8,
  anon_sym_PERCENT = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_STAR_STAR = 14,
  anon_sym_COMMA = 15,
  anon_sym_COLON = 16,
  sym_number_literal = 17,
  sym__double_quoted_string = 18,
  sym__single_quoted_string = 19,
  sym_boolean_literal = 20,
  sym_identifier = 21,
  sym_comment = 22,
  sym__semicolon = 23,
  sym__newline = 24,
  sym_translation_unit = 25,
  sym_program_block = 26,
  sym_subroutine_call = 27,
  sym__expression = 28,
  sym_parenthesized_expression = 29,
  sym_assignment_expression = 30,
  sym_pointer_assignment_expression = 31,
  sym_derived_type_member_expression = 32,
  sym_math_expression = 33,
  sym_call_expression = 34,
  sym_argument_list = 35,
  sym_keyword_argument = 36,
  sym_array_slice = 37,
  sym_complex_literal = 38,
  sym_string_literal = 39,
  sym__end_of_statement = 40,
  aux_sym_translation_unit_repeat1 = 41,
  aux_sym_program_block_repeat1 = 42,
  aux_sym_argument_list_repeat1 = 43,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [sym_statement_label] = "statement_label",
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
  [sym_statement_label] = {
    .visible = true,
    .named = true,
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
      ACCEPT_TOKEN(sym_statement_label);
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
      ACCEPT_TOKEN(sym_statement_label);
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
      ACCEPT_TOKEN(sym_statement_label);
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
        ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(105);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'a' ||
          lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(76);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(108);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 106:
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
        ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(107);
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
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(106);
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
        ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(109);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(92);
      END_STATE();
    case 110:
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
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(107);
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
        SKIP(110);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(108);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 111:
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
        SKIP(111);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(116);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(113);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(108);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(115);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(57);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(115);
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
    case 116:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(117);
      END_STATE();
    case 118:
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
  [12] = {.lex_state = 105},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 109},
  [15] = {.lex_state = 110},
  [16] = {.lex_state = 110},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 111},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 100},
  [21] = {.lex_state = 111},
  [22] = {.lex_state = 100},
  [23] = {.lex_state = 104},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 104},
  [26] = {.lex_state = 100},
  [27] = {.lex_state = 100},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 100},
  [30] = {.lex_state = 112},
  [31] = {.lex_state = 91},
  [32] = {.lex_state = 110},
  [33] = {.lex_state = 111},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 111},
  [37] = {.lex_state = 110},
  [38] = {.lex_state = 100},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 110},
  [42] = {.lex_state = 110},
  [43] = {.lex_state = 110},
  [44] = {.lex_state = 110},
  [45] = {.lex_state = 110},
  [46] = {.lex_state = 104},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 100},
  [52] = {.lex_state = 111},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 110},
  [55] = {.lex_state = 111},
  [56] = {.lex_state = 111},
  [57] = {.lex_state = 110},
  [58] = {.lex_state = 110},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 110},
  [61] = {.lex_state = 100},
  [62] = {.lex_state = 110},
  [63] = {.lex_state = 110},
  [64] = {.lex_state = 111},
  [65] = {.lex_state = 111},
  [66] = {.lex_state = 99},
  [67] = {.lex_state = 110},
  [68] = {.lex_state = 110},
  [69] = {.lex_state = 100},
  [70] = {.lex_state = 100},
  [71] = {.lex_state = 100},
  [72] = {.lex_state = 100},
  [73] = {.lex_state = 100},
  [74] = {.lex_state = 111},
  [75] = {.lex_state = 111},
  [76] = {.lex_state = 111},
  [77] = {.lex_state = 111},
  [78] = {.lex_state = 100},
  [79] = {.lex_state = 91},
  [80] = {.lex_state = 112},
  [81] = {.lex_state = 99},
  [82] = {.lex_state = 111},
  [83] = {.lex_state = 111},
  [84] = {.lex_state = 99},
  [85] = {.lex_state = 111},
  [86] = {.lex_state = 111},
  [87] = {.lex_state = 111},
  [88] = {.lex_state = 111},
  [89] = {.lex_state = 111},
  [90] = {.lex_state = 110},
  [91] = {.lex_state = 111},
  [92] = {.lex_state = 110},
  [93] = {.lex_state = 100},
  [94] = {.lex_state = 110},
  [95] = {.lex_state = 110},
  [96] = {.lex_state = 110},
  [97] = {.lex_state = 110},
  [98] = {.lex_state = 110},
  [99] = {.lex_state = 110},
  [100] = {.lex_state = 99},
  [101] = {.lex_state = 111},
  [102] = {.lex_state = 111},
  [103] = {.lex_state = 100},
  [104] = {.lex_state = 110},
  [105] = {.lex_state = 110},
  [106] = {.lex_state = 110},
  [107] = {.lex_state = 110},
  [108] = {.lex_state = 91},
  [109] = {.lex_state = 100},
  [110] = {.lex_state = 111},
  [111] = {.lex_state = 111},
  [112] = {.lex_state = 99},
  [113] = {.lex_state = 110},
  [114] = {.lex_state = 111},
  [115] = {.lex_state = 110},
  [116] = {.lex_state = 111},
  [117] = {.lex_state = 111},
  [118] = {.lex_state = 111},
  [119] = {.lex_state = 111},
  [120] = {.lex_state = 111},
  [121] = {.lex_state = 111},
  [122] = {.lex_state = 99},
  [123] = {.lex_state = 111},
  [124] = {.lex_state = 100},
  [125] = {.lex_state = 99},
  [126] = {.lex_state = 113},
  [127] = {.lex_state = 100},
  [128] = {.lex_state = 100},
  [129] = {.lex_state = 100},
  [130] = {.lex_state = 100},
  [131] = {.lex_state = 100},
  [132] = {.lex_state = 91},
  [133] = {.lex_state = 111},
  [134] = {.lex_state = 111},
  [135] = {.lex_state = 110},
  [136] = {.lex_state = 110},
  [137] = {.lex_state = 110},
  [138] = {.lex_state = 110},
  [139] = {.lex_state = 111},
  [140] = {.lex_state = 110},
  [141] = {.lex_state = 99},
  [142] = {.lex_state = 111},
  [143] = {.lex_state = 111},
  [144] = {.lex_state = 111},
  [145] = {.lex_state = 111},
  [146] = {.lex_state = 111},
  [147] = {.lex_state = 100},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [sym_statement_label] = ACTIONS(3),
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
    [sym_statement_label] = ACTIONS(36),
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
    [sym_subroutine_call] = STATE(20),
    [sym__expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(17),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(22),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [aux_sym_program_block_repeat1] = STATE(23),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [sym_end_statement] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym_subroutine_call] = STATE(20),
    [sym__expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(17),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(22),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [aux_sym_program_block_repeat1] = STATE(25),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [sym_end_statement] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [sym_subroutine_call] = STATE(26),
    [sym__expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(17),
    [sym_assignment_expression] = STATE(26),
    [sym_pointer_assignment_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(27),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [sym_call_expression] = STATE(29),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(64),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(66),
  },
  [15] = {
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(70),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym__expression] = STATE(36),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_EQ_GT] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym_argument_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [sym__end_of_statement] = STATE(39),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__end_of_statement] = STATE(39),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_EQ_GT] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [23] = {
    [sym_subroutine_call] = STATE(20),
    [sym__expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(17),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(22),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [aux_sym_program_block_repeat1] = STATE(46),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [sym_end_statement] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(102),
  },
  [25] = {
    [sym_subroutine_call] = STATE(20),
    [sym__expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(17),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(22),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [aux_sym_program_block_repeat1] = STATE(46),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [sym_end_statement] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym__end_of_statement] = STATE(50),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [27] = {
    [sym__end_of_statement] = STATE(50),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_EQ_GT] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [28] = {
    [sym_argument_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(82),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [30] = {
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(102),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [sym__expression] = STATE(52),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [36] = {
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__expression] = STATE(65),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_keyword_argument] = STATE(66),
    [sym_array_slice] = STATE(66),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_EQ_GT] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_STAR_STAR] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(140),
    [sym__newline] = ACTIONS(140),
  },
  [39] = {
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(142),
    [sym_end_statement] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(142),
    [sym__single_quoted_string] = ACTIONS(142),
    [sym_boolean_literal] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(14),
  },
  [40] = {
    [sym__expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym__expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [sym__expression] = STATE(74),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym__expression] = STATE(75),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym__expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym__expression] = STATE(77),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym_subroutine_call] = STATE(20),
    [sym__expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(17),
    [sym_assignment_expression] = STATE(20),
    [sym_pointer_assignment_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(22),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [aux_sym_program_block_repeat1] = STATE(46),
    [sym_statement_label] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(163),
    [sym_end_statement] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [sym_number_literal] = ACTIONS(172),
    [sym__double_quoted_string] = ACTIONS(175),
    [sym__single_quoted_string] = ACTIONS(175),
    [sym_boolean_literal] = ACTIONS(178),
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(14),
  },
  [47] = {
    [sym_identifier] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(186),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(188),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(186),
  },
  [50] = {
    [sym_statement_label] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(192),
    [sym_end_statement] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(196),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(186),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [sym_number_literal] = ACTIONS(198),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [sym__expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_keyword_argument] = STATE(84),
    [sym_array_slice] = STATE(84),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_EQ_GT] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_STAR] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_EQ_GT] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym__expression] = STATE(85),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [sym__expression] = STATE(87),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(210),
    [anon_sym_EQ_GT] = ACTIONS(210),
    [anon_sym_PERCENT] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(210),
    [sym__newline] = ACTIONS(210),
  },
  [62] = {
    [sym__expression] = STATE(89),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [63] = {
    [sym__expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(214),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [64] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [aux_sym_argument_list_repeat1] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [aux_sym_argument_list_repeat1] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [sym__expression] = STATE(102),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(234),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [sym__expression] = STATE(103),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [70] = {
    [anon_sym_PERCENT] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_STAR_STAR] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(236),
    [sym__newline] = ACTIONS(236),
  },
  [71] = {
    [sym_argument_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [72] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(248),
    [sym__newline] = ACTIONS(248),
  },
  [73] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(250),
    [sym__newline] = ACTIONS(250),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_EQ_GT] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_EQ_GT] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_EQ_GT] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_EQ_GT] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(260),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(262),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [sym_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(260),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(268),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [aux_sym_argument_list_repeat1] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [aux_sym_argument_list_repeat1] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__expression] = STATE(116),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_EQ_GT] = ACTIONS(280),
    [anon_sym_PERCENT] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(280),
    [anon_sym_SLASH] = ACTIONS(280),
    [anon_sym_STAR_STAR] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
  },
  [94] = {
    [sym__expression] = STATE(117),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [sym__expression] = STATE(118),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [sym__expression] = STATE(119),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [sym__expression] = STATE(120),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [sym__expression] = STATE(121),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_keyword_argument] = STATE(122),
    [sym_array_slice] = STATE(122),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [sym__expression] = STATE(123),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [aux_sym_argument_list_repeat1] = STATE(125),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(288),
    [sym__newline] = ACTIONS(288),
  },
  [104] = {
    [sym__expression] = STATE(128),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [sym__expression] = STATE(129),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [sym__expression] = STATE(130),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [sym__expression] = STATE(131),
    [sym_parenthesized_expression] = STATE(69),
    [sym_derived_type_member_expression] = STATE(69),
    [sym_math_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_complex_literal] = STATE(69),
    [sym_string_literal] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(152),
    [sym__double_quoted_string] = ACTIONS(154),
    [sym__single_quoted_string] = ACTIONS(154),
    [sym_boolean_literal] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(290),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [sym_comment] = ACTIONS(34),
    [sym__newline] = ACTIONS(292),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_STAR_STAR] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [aux_sym_argument_list_repeat1] = STATE(125),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [113] = {
    [sym__expression] = STATE(134),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [sym__expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_COLON] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(318),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [124] = {
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym_EQ_GT] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_STAR_STAR] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [125] = {
    [aux_sym_argument_list_repeat1] = STATE(125),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(14),
  },
  [126] = {
    [sym_number_literal] = ACTIONS(327),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [anon_sym_PERCENT] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_STAR_STAR] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(329),
    [sym__newline] = ACTIONS(329),
  },
  [128] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_STAR_STAR] = ACTIONS(331),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(331),
    [sym__newline] = ACTIONS(331),
  },
  [129] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
  },
  [130] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
  },
  [131] = {
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(335),
    [sym_comment] = ACTIONS(14),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(339),
    [anon_sym_EQ_GT] = ACTIONS(337),
    [anon_sym_PERCENT] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(337),
    [anon_sym_STAR_STAR] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [sym_comment] = ACTIONS(14),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [135] = {
    [sym__expression] = STATE(142),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [136] = {
    [sym__expression] = STATE(143),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [137] = {
    [sym__expression] = STATE(144),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [138] = {
    [sym__expression] = STATE(145),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(341),
    [sym_comment] = ACTIONS(14),
  },
  [140] = {
    [sym__expression] = STATE(146),
    [sym_parenthesized_expression] = STATE(17),
    [sym_derived_type_member_expression] = STATE(17),
    [sym_math_expression] = STATE(17),
    [sym_call_expression] = STATE(17),
    [sym_complex_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(14),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(343),
    [sym_comment] = ACTIONS(14),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(345),
    [sym_comment] = ACTIONS(14),
  },
  [147] = {
    [anon_sym_PERCENT] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(347),
    [sym__newline] = ACTIONS(347),
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
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [160] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(12),
  [163] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [166] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [169] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [172] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [175] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [178] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [181] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 1),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 2),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 3),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [324] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(98),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 4),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 5),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
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
