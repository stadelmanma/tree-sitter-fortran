#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 207
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  sym_statement_label = 3,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_EQ = 7,
  anon_sym_EQ_GT = 8,
  anon_sym_PERCENT = 9,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 10,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 11,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 12,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 13,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 14,
  anon_sym_LT = 15,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 16,
  anon_sym_GT = 17,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 18,
  anon_sym_LT_EQ = 19,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 20,
  anon_sym_GT_EQ = 21,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 22,
  anon_sym_EQ_EQ = 23,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 24,
  anon_sym_SLASH_EQ = 25,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_STAR_STAR = 31,
  anon_sym_COMMA = 32,
  anon_sym_COLON = 33,
  sym_number_literal = 34,
  sym__double_quoted_string = 35,
  sym__single_quoted_string = 36,
  sym_boolean_literal = 37,
  sym_identifier = 38,
  sym_comment = 39,
  sym__semicolon = 40,
  sym__newline = 41,
  sym_translation_unit = 42,
  sym_program_block = 43,
  sym_subroutine_call = 44,
  sym__expression = 45,
  sym_parenthesized_expression = 46,
  sym_assignment_expression = 47,
  sym_pointer_assignment_expression = 48,
  sym_derived_type_member_expression = 49,
  sym_logical_expression = 50,
  sym_relational_expression = 51,
  sym_math_expression = 52,
  sym_call_expression = 53,
  sym_argument_list = 54,
  sym_keyword_argument = 55,
  sym_array_slice = 56,
  sym_complex_literal = 57,
  sym_string_literal = 58,
  sym__end_of_statement = 59,
  aux_sym_translation_unit_repeat1 = 60,
  aux_sym_program_block_repeat1 = 61,
  aux_sym_argument_list_repeat1 = 62,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [sym_statement_label] = "statement_label",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[cC][aA][lL][lL]/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT] = "%",
  [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = "/.[oO][rR]./",
  [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = "/.[aA][nN][dD]./",
  [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = "/.[eE][qQ][vV]./",
  [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = "/.[nN][eE][qQ][vV]./",
  [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = "/.[nN][oO][tT]./",
  [anon_sym_LT] = "<",
  [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = "/.[lL][tT]./",
  [anon_sym_GT] = ">",
  [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = "/.[gG][tT]./",
  [anon_sym_LT_EQ] = "<=",
  [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = "/.[lL][eE]./",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = "/.[gG][eE]./",
  [anon_sym_EQ_EQ] = "==",
  [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = "/.[eE][qQ]./",
  [anon_sym_SLASH_EQ] = "/=",
  [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = "/.[nN][eE]./",
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
  [sym_logical_expression] = "logical_expression",
  [sym_relational_expression] = "relational_expression",
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
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = {
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
  [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = {
    .visible = false,
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
  [sym_logical_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
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
        ADVANCE(57);
      if (lookahead == ':')
        ADVANCE(62);
      if (lookahead == ';')
        ADVANCE(63);
      if (lookahead == '<')
        ADVANCE(64);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(71);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(87);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(89);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
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
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
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
        ADVANCE(58);
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
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == '>')
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(71);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(75);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(88);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(88);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(97);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 105:
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
        SKIP(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(98);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(108);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(114);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(136);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(149);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(150);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 114:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 115:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 116:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 117:
      if (lookahead == '\"')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 120:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 121:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 122:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 123:
      if (lookahead == '\'')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(108);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(114);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(136);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(149);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(150);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(71);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(72);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(145);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(88);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(77);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(57);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(72);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(153);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(114);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(157);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(142);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(148);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'a' ||
          lookahead == 'f')
        ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(143);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(153);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(114);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(157);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(148);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'a' ||
          lookahead == 'f')
        ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(143);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(161);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(114);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == ')')
        ADVANCE(162);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == ',')
        ADVANCE(163);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(154);
      if (lookahead == ':')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(165);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(157);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(148);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(149);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(161);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(114);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == ')')
        ADVANCE(162);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == ',')
        ADVANCE(163);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(154);
      if (lookahead == ':')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(165);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(157);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(148);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(149);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        SKIP(166);
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(196);
      if (lookahead == '(')
        ADVANCE(225);
      if (lookahead == ')')
        ADVANCE(226);
      if (lookahead == '*')
        ADVANCE(227);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == ',')
        ADVANCE(229);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ':')
        ADVANCE(232);
      if (lookahead == '<')
        ADVANCE(233);
      if (lookahead == '=')
        ADVANCE(234);
      if (lookahead == '>')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(236);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(172);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(177);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(182);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(187);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 201:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 209:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 212:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 214:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(65);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(70);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 236:
      if (lookahead == '\n')
        SKIP(166);
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(196);
      if (lookahead == '(')
        ADVANCE(225);
      if (lookahead == ')')
        ADVANCE(226);
      if (lookahead == '*')
        ADVANCE(227);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == ',')
        ADVANCE(229);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ':')
        ADVANCE(232);
      if (lookahead == '<')
        ADVANCE(233);
      if (lookahead == '=')
        ADVANCE(234);
      if (lookahead == '>')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(236);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(239);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(243);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(246);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 237:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(199);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 239:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(202);
      END_STATE();
    case 240:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(241);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(209);
      END_STATE();
    case 241:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(208);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 243:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 244:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(213);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 246:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(247);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 247:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 249:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(223);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 251:
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(196);
      if (lookahead == '(')
        ADVANCE(225);
      if (lookahead == '*')
        ADVANCE(227);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ';')
        ADVANCE(252);
      if (lookahead == '<')
        ADVANCE(233);
      if (lookahead == '=')
        ADVANCE(234);
      if (lookahead == '>')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 253:
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(196);
      if (lookahead == '(')
        ADVANCE(225);
      if (lookahead == '*')
        ADVANCE(227);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ';')
        ADVANCE(252);
      if (lookahead == '<')
        ADVANCE(233);
      if (lookahead == '=')
        ADVANCE(234);
      if (lookahead == '>')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(239);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(243);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(246);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(258);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(255);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(159);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(257);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(257);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(259);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 261:
      if (lookahead == '\n')
        SKIP(261);
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(196);
      if (lookahead == '(')
        ADVANCE(225);
      if (lookahead == ')')
        ADVANCE(226);
      if (lookahead == '*')
        ADVANCE(227);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == ',')
        ADVANCE(229);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ':')
        ADVANCE(232);
      if (lookahead == '<')
        ADVANCE(233);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 263:
      if (lookahead == '\n')
        SKIP(261);
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(196);
      if (lookahead == '(')
        ADVANCE(225);
      if (lookahead == ')')
        ADVANCE(226);
      if (lookahead == '*')
        ADVANCE(227);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == ',')
        ADVANCE(229);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ':')
        ADVANCE(232);
      if (lookahead == '<')
        ADVANCE(233);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(239);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(243);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(246);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 105},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 97},
  [5] = {.lex_state = 97},
  [6] = {.lex_state = 106},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 106},
  [9] = {.lex_state = 108},
  [10] = {.lex_state = 108},
  [11] = {.lex_state = 108},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 153},
  [14] = {.lex_state = 105},
  [15] = {.lex_state = 161},
  [16] = {.lex_state = 161},
  [17] = {.lex_state = 161},
  [18] = {.lex_state = 166},
  [19] = {.lex_state = 166},
  [20] = {.lex_state = 166},
  [21] = {.lex_state = 106},
  [22] = {.lex_state = 166},
  [23] = {.lex_state = 251},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 106},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 254},
  [28] = {.lex_state = 97},
  [29] = {.lex_state = 97},
  [30] = {.lex_state = 106},
  [31] = {.lex_state = 251},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 106},
  [34] = {.lex_state = 161},
  [35] = {.lex_state = 161},
  [36] = {.lex_state = 166},
  [37] = {.lex_state = 166},
  [38] = {.lex_state = 166},
  [39] = {.lex_state = 166},
  [40] = {.lex_state = 166},
  [41] = {.lex_state = 161},
  [42] = {.lex_state = 251},
  [43] = {.lex_state = 108},
  [44] = {.lex_state = 161},
  [45] = {.lex_state = 161},
  [46] = {.lex_state = 161},
  [47] = {.lex_state = 161},
  [48] = {.lex_state = 161},
  [49] = {.lex_state = 161},
  [50] = {.lex_state = 161},
  [51] = {.lex_state = 161},
  [52] = {.lex_state = 161},
  [53] = {.lex_state = 161},
  [54] = {.lex_state = 108},
  [55] = {.lex_state = 254},
  [56] = {.lex_state = 97},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 108},
  [60] = {.lex_state = 161},
  [61] = {.lex_state = 106},
  [62] = {.lex_state = 166},
  [63] = {.lex_state = 166},
  [64] = {.lex_state = 255},
  [65] = {.lex_state = 161},
  [66] = {.lex_state = 166},
  [67] = {.lex_state = 166},
  [68] = {.lex_state = 161},
  [69] = {.lex_state = 161},
  [70] = {.lex_state = 161},
  [71] = {.lex_state = 161},
  [72] = {.lex_state = 161},
  [73] = {.lex_state = 161},
  [74] = {.lex_state = 161},
  [75] = {.lex_state = 161},
  [76] = {.lex_state = 251},
  [77] = {.lex_state = 161},
  [78] = {.lex_state = 161},
  [79] = {.lex_state = 161},
  [80] = {.lex_state = 261},
  [81] = {.lex_state = 166},
  [82] = {.lex_state = 105},
  [83] = {.lex_state = 161},
  [84] = {.lex_state = 161},
  [85] = {.lex_state = 161},
  [86] = {.lex_state = 251},
  [87] = {.lex_state = 251},
  [88] = {.lex_state = 251},
  [89] = {.lex_state = 251},
  [90] = {.lex_state = 251},
  [91] = {.lex_state = 166},
  [92] = {.lex_state = 166},
  [93] = {.lex_state = 166},
  [94] = {.lex_state = 166},
  [95] = {.lex_state = 166},
  [96] = {.lex_state = 166},
  [97] = {.lex_state = 166},
  [98] = {.lex_state = 166},
  [99] = {.lex_state = 106},
  [100] = {.lex_state = 97},
  [101] = {.lex_state = 254},
  [102] = {.lex_state = 106},
  [103] = {.lex_state = 166},
  [104] = {.lex_state = 105},
  [105] = {.lex_state = 105},
  [106] = {.lex_state = 166},
  [107] = {.lex_state = 166},
  [108] = {.lex_state = 105},
  [109] = {.lex_state = 166},
  [110] = {.lex_state = 166},
  [111] = {.lex_state = 166},
  [112] = {.lex_state = 166},
  [113] = {.lex_state = 166},
  [114] = {.lex_state = 166},
  [115] = {.lex_state = 166},
  [116] = {.lex_state = 166},
  [117] = {.lex_state = 166},
  [118] = {.lex_state = 166},
  [119] = {.lex_state = 161},
  [120] = {.lex_state = 166},
  [121] = {.lex_state = 161},
  [122] = {.lex_state = 251},
  [123] = {.lex_state = 161},
  [124] = {.lex_state = 161},
  [125] = {.lex_state = 161},
  [126] = {.lex_state = 161},
  [127] = {.lex_state = 161},
  [128] = {.lex_state = 161},
  [129] = {.lex_state = 161},
  [130] = {.lex_state = 161},
  [131] = {.lex_state = 161},
  [132] = {.lex_state = 161},
  [133] = {.lex_state = 105},
  [134] = {.lex_state = 166},
  [135] = {.lex_state = 166},
  [136] = {.lex_state = 251},
  [137] = {.lex_state = 251},
  [138] = {.lex_state = 161},
  [139] = {.lex_state = 161},
  [140] = {.lex_state = 161},
  [141] = {.lex_state = 161},
  [142] = {.lex_state = 161},
  [143] = {.lex_state = 161},
  [144] = {.lex_state = 161},
  [145] = {.lex_state = 161},
  [146] = {.lex_state = 97},
  [147] = {.lex_state = 106},
  [148] = {.lex_state = 106},
  [149] = {.lex_state = 105},
  [150] = {.lex_state = 166},
  [151] = {.lex_state = 166},
  [152] = {.lex_state = 105},
  [153] = {.lex_state = 161},
  [154] = {.lex_state = 161},
  [155] = {.lex_state = 166},
  [156] = {.lex_state = 161},
  [157] = {.lex_state = 166},
  [158] = {.lex_state = 166},
  [159] = {.lex_state = 166},
  [160] = {.lex_state = 166},
  [161] = {.lex_state = 166},
  [162] = {.lex_state = 166},
  [163] = {.lex_state = 166},
  [164] = {.lex_state = 166},
  [165] = {.lex_state = 166},
  [166] = {.lex_state = 166},
  [167] = {.lex_state = 105},
  [168] = {.lex_state = 166},
  [169] = {.lex_state = 251},
  [170] = {.lex_state = 105},
  [171] = {.lex_state = 255},
  [172] = {.lex_state = 251},
  [173] = {.lex_state = 251},
  [174] = {.lex_state = 251},
  [175] = {.lex_state = 251},
  [176] = {.lex_state = 251},
  [177] = {.lex_state = 251},
  [178] = {.lex_state = 251},
  [179] = {.lex_state = 251},
  [180] = {.lex_state = 251},
  [181] = {.lex_state = 97},
  [182] = {.lex_state = 106},
  [183] = {.lex_state = 166},
  [184] = {.lex_state = 166},
  [185] = {.lex_state = 166},
  [186] = {.lex_state = 161},
  [187] = {.lex_state = 161},
  [188] = {.lex_state = 161},
  [189] = {.lex_state = 161},
  [190] = {.lex_state = 161},
  [191] = {.lex_state = 161},
  [192] = {.lex_state = 161},
  [193] = {.lex_state = 161},
  [194] = {.lex_state = 166},
  [195] = {.lex_state = 161},
  [196] = {.lex_state = 105},
  [197] = {.lex_state = 166},
  [198] = {.lex_state = 166},
  [199] = {.lex_state = 166},
  [200] = {.lex_state = 166},
  [201] = {.lex_state = 166},
  [202] = {.lex_state = 166},
  [203] = {.lex_state = 166},
  [204] = {.lex_state = 166},
  [205] = {.lex_state = 166},
  [206] = {.lex_state = 251},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [sym_statement_label] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(36),
    [sym_statement_label] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(40),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(24),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(42),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(26),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(62),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(29),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(64),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [13] = {
    [sym_subroutine_call] = STATE(30),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(30),
    [sym_pointer_assignment_expression] = STATE(30),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym_call_expression] = STATE(33),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [sym__expression] = STATE(39),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [sym__end_of_statement] = STATE(43),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__end_of_statement] = STATE(43),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [24] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(62),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [sym__end_of_statement] = STATE(56),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [26] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(118),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym__end_of_statement] = STATE(56),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym__end_of_statement] = STATE(59),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [31] = {
    [sym__end_of_statement] = STATE(59),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [32] = {
    [sym_argument_list] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
  },
  [34] = {
    [sym__expression] = STATE(62),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym__expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym_argument_list] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__expression] = STATE(81),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(82),
    [sym_array_slice] = STATE(82),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_EQ_GT] = ACTIONS(176),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_STAR_STAR] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(176),
    [sym__newline] = ACTIONS(176),
  },
  [43] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(178),
    [sym_statement_label] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [sym_number_literal] = ACTIONS(180),
    [sym__double_quoted_string] = ACTIONS(180),
    [sym__single_quoted_string] = ACTIONS(180),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [sym__expression] = STATE(89),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [45] = {
    [sym__expression] = STATE(90),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [sym__expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym__expression] = STATE(92),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym__expression] = STATE(93),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym__expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [sym__expression] = STATE(96),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [sym__expression] = STATE(98),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(178),
    [sym_statement_label] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(213),
    [sym__double_quoted_string] = ACTIONS(216),
    [sym__single_quoted_string] = ACTIONS(216),
    [sym_boolean_literal] = ACTIONS(219),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [sym__end_of_statement] = STATE(100),
    [sym_identifier] = ACTIONS(225),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(227),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [sym__end_of_statement] = STATE(100),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(229),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [58] = {
    [sym__end_of_statement] = STATE(100),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [59] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(231),
    [sym_statement_label] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [sym_number_literal] = ACTIONS(233),
    [sym__double_quoted_string] = ACTIONS(233),
    [sym__single_quoted_string] = ACTIONS(233),
    [sym_boolean_literal] = ACTIONS(235),
    [sym_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [sym__expression] = STATE(103),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(104),
    [sym_array_slice] = STATE(104),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(237),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(176),
    [sym__newline] = ACTIONS(176),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym_number_literal] = ACTIONS(239),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [sym__expression] = STATE(107),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(108),
    [sym_array_slice] = STATE(108),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(241),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_EQ_GT] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(243),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(243),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(243),
    [anon_sym_SLASH_EQ] = ACTIONS(245),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_STAR_STAR] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [sym__expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym__expression] = STATE(110),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [sym__expression] = STATE(111),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [sym__expression] = STATE(112),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym__expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym__expression] = STATE(116),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_SLASH_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_STAR_STAR] = ACTIONS(253),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(253),
    [sym__newline] = ACTIONS(253),
  },
  [77] = {
    [sym__expression] = STATE(117),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__expression] = STATE(118),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [sym__expression] = STATE(120),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym_argument_list] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [aux_sym_argument_list_repeat1] = STATE(133),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [aux_sym_argument_list_repeat1] = STATE(133),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [sym__expression] = STATE(135),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(291),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym__expression] = STATE(136),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__expression] = STATE(137),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
  },
  [87] = {
    [anon_sym_PERCENT] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [88] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
  },
  [89] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(297),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(311),
    [sym__newline] = ACTIONS(311),
  },
  [90] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(297),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(313),
    [sym__newline] = ACTIONS(313),
  },
  [91] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_EQ_GT] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_SLASH_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_EQ_GT] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_SLASH_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_EQ_GT] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_EQ_GT] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_EQ_GT] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(335),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [sym__end_of_statement] = STATE(146),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(339),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [sym__end_of_statement] = STATE(146),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [102] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(253),
    [sym__newline] = ACTIONS(253),
  },
  [103] = {
    [aux_sym_argument_list_repeat1] = STATE(149),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [aux_sym_argument_list_repeat1] = STATE(149),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_EQ] = ACTIONS(349),
    [anon_sym_EQ_GT] = ACTIONS(351),
    [anon_sym_PERCENT] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(349),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(349),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(349),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(349),
    [anon_sym_SLASH_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_STAR_STAR] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [aux_sym_argument_list_repeat1] = STATE(152),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [aux_sym_argument_list_repeat1] = STATE(152),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_SLASH_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_SLASH_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(335),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym__expression] = STATE(155),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(363),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym__expression] = STATE(157),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_EQ_GT] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_GT_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(365),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(365),
    [sym__newline] = ACTIONS(365),
  },
  [123] = {
    [sym__expression] = STATE(158),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [sym__expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__expression] = STATE(160),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym__expression] = STATE(161),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym__expression] = STATE(162),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(163),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(164),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym__expression] = STATE(166),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(167),
    [sym_array_slice] = STATE(167),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [sym__expression] = STATE(168),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(361),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(363),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(369),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
  },
  [137] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(164),
    [sym__newline] = ACTIONS(164),
  },
  [138] = {
    [sym__expression] = STATE(173),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [sym__expression] = STATE(174),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [sym__expression] = STATE(175),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [sym__expression] = STATE(176),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [sym__expression] = STATE(177),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [sym__expression] = STATE(178),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__expression] = STATE(179),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [sym__expression] = STATE(180),
    [sym_parenthesized_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(86),
    [sym_logical_expression] = STATE(86),
    [sym_relational_expression] = STATE(86),
    [sym_math_expression] = STATE(86),
    [sym_call_expression] = STATE(86),
    [sym_complex_literal] = STATE(86),
    [sym_string_literal] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(14),
  },
  [147] = {
    [sym__end_of_statement] = STATE(181),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [148] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(365),
    [sym__newline] = ACTIONS(365),
  },
  [149] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_EQ_GT] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(377),
    [anon_sym_GT_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(377),
    [anon_sym_SLASH_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_STAR_STAR] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_EQ_GT] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(383),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(383),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(383),
    [anon_sym_SLASH_EQ] = ACTIONS(385),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_comment] = ACTIONS(14),
  },
  [153] = {
    [sym__expression] = STATE(184),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [154] = {
    [sym__expression] = STATE(185),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(389),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [sym__expression] = STATE(194),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_SLASH_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_SLASH_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(285),
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(415),
    [sym_comment] = ACTIONS(14),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(263),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_EQ_GT] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_GT_EQ] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_EQ_EQ] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_SLASH_EQ] = ACTIONS(419),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(419),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_STAR_STAR] = ACTIONS(419),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(419),
    [sym__newline] = ACTIONS(419),
  },
  [170] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(421),
    [sym_comment] = ACTIONS(14),
  },
  [171] = {
    [sym_number_literal] = ACTIONS(424),
    [sym_comment] = ACTIONS(14),
  },
  [172] = {
    [anon_sym_PERCENT] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_SLASH_EQ] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(251),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(251),
    [sym__newline] = ACTIONS(251),
  },
  [173] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(319),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
  },
  [174] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
  },
  [175] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
  },
  [176] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(297),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
  },
  [177] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_SLASH_EQ] = ACTIONS(331),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(331),
    [sym__newline] = ACTIONS(331),
  },
  [178] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(337),
    [sym__newline] = ACTIONS(337),
  },
  [179] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(337),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(337),
    [sym__newline] = ACTIONS(337),
  },
  [180] = {
    [anon_sym_PERCENT] = ACTIONS(295),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(337),
    [anon_sym_STAR_STAR] = ACTIONS(337),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(337),
    [sym__newline] = ACTIONS(337),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(426),
    [sym_comment] = ACTIONS(14),
  },
  [182] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(419),
    [sym__newline] = ACTIONS(419),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_EQ_GT] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_STAR_STAR] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [sym_comment] = ACTIONS(34),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [sym__expression] = STATE(197),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [sym__expression] = STATE(198),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [sym__expression] = STATE(199),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [sym__expression] = STATE(200),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [sym__expression] = STATE(201),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [sym__expression] = STATE(202),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [sym__expression] = STATE(204),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(432),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__expression] = STATE(205),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(14),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_SLASH_EQ] = ACTIONS(317),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(315),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_SLASH_EQ] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(327),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_STAR_STAR] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(436),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_PERCENT] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_GT_EQ] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_STAR_STAR] = ACTIONS(381),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(381),
    [sym__newline] = ACTIONS(381),
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
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [198] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [201] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [204] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [210] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [213] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [216] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [219] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [222] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [421] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(131),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
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
