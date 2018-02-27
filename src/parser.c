#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 299
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  sym_statement_label = 3,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 4,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 5,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_PERCENT = 11,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 12,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 13,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 14,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 15,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 16,
  anon_sym_LT = 17,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 18,
  anon_sym_GT = 19,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 20,
  anon_sym_LT_EQ = 21,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 22,
  anon_sym_GT_EQ = 23,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 24,
  anon_sym_EQ_EQ = 25,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 26,
  anon_sym_SLASH_EQ = 27,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 28,
  anon_sym_SLASH_SLASH = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_COMMA = 35,
  anon_sym_COLON = 36,
  sym_block_label_expression = 37,
  sym_number_literal = 38,
  sym__double_quoted_string = 39,
  sym__single_quoted_string = 40,
  sym_boolean_literal = 41,
  sym_identifier = 42,
  sym_comment = 43,
  sym__semicolon = 44,
  sym__newline = 45,
  sym_translation_unit = 46,
  sym_program_block = 47,
  sym_subroutine_call = 48,
  sym_do_loop_statement = 49,
  sym__expression = 50,
  sym_parenthesized_expression = 51,
  sym_assignment_expression = 52,
  sym_pointer_assignment_expression = 53,
  sym_derived_type_member_expression = 54,
  sym_logical_expression = 55,
  sym_relational_expression = 56,
  sym_concatenation_expression = 57,
  sym_math_expression = 58,
  sym_call_expression = 59,
  sym_argument_list = 60,
  sym_keyword_argument = 61,
  sym_array_slice = 62,
  sym__block_label_closing_expression = 63,
  sym_loop_control_expression = 64,
  sym_complex_literal = 65,
  sym_string_literal = 66,
  sym__end_of_statement = 67,
  aux_sym_translation_unit_repeat1 = 68,
  aux_sym_program_block_repeat1 = 69,
  aux_sym_argument_list_repeat1 = 70,
  alias_sym_block_label_closing_expression = 71,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [sym_statement_label] = "statement_label",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[cC][aA][lL][lL]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[dD][oO]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[eE][nN][dD][ 	]*[dD][oO]/",
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
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [sym_block_label_expression] = "block_label_expression",
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
  [sym_do_loop_statement] = "do_loop_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_pointer_assignment_expression] = "pointer_assignment_expression",
  [sym_derived_type_member_expression] = "derived_type_member_expression",
  [sym_logical_expression] = "logical_expression",
  [sym_relational_expression] = "relational_expression",
  [sym_concatenation_expression] = "concatenation_expression",
  [sym_math_expression] = "math_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_keyword_argument] = "keyword_argument",
  [sym_array_slice] = "array_slice",
  [sym__block_label_closing_expression] = "_block_label_closing_expression",
  [sym_loop_control_expression] = "loop_control_expression",
  [sym_complex_literal] = "complex_literal",
  [sym_string_literal] = "string_literal",
  [sym__end_of_statement] = "_end_of_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_block_label_closing_expression] = "block_label_closing_expression",
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
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = {
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
  [anon_sym_SLASH_SLASH] = {
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
  [sym_block_label_expression] = {
    .visible = true,
    .named = true,
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
  [sym_do_loop_statement] = {
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
  [sym_concatenation_expression] = {
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
  [sym__block_label_closing_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_loop_control_expression] = {
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
  [alias_sym_block_label_closing_expression] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_block_label_closing_expression,
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
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(47);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(51);
      if (lookahead == '<')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(71);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(72);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(60);
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
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(14);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__single_quoted_string);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(14);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 14:
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(14);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '\'')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(13);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(24);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(26);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\'')
        ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(24);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(26);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(26);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == '\'')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(13);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\'')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '\'')
        ADVANCE(37);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == '\'')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\'')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == '\'')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
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
        ADVANCE(60);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(81);
      END_STATE();
    case 82:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 89:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == '\n')
        ADVANCE(91);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(90);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(82);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(92);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 106:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 107:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 108:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 109:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 111:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 113:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 114:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 115:
      if (lookahead == '\"')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 118:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 119:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 120:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(121);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(132);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(14);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 121:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 122:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 123:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 124:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 125:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 127:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 128:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 129:
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 132:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 133:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 141:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(138);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(92);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(173);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(179);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_block_label_expression);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(140);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(171);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(175);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 183:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(184);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(185);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(184);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(185);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(179);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        ADVANCE(91);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(189);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == ')')
        ADVANCE(190);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == ',')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == ':')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(209);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(211);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(213);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(189);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == ')')
        ADVANCE(190);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == ',')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == ':')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(207);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(210);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(211);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(213);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(140);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(206);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 214:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(214);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 217:
      if (lookahead == '\n')
        SKIP(217);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '%')
        ADVANCE(247);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == '*')
        ADVANCE(278);
      if (lookahead == '+')
        ADVANCE(279);
      if (lookahead == ',')
        ADVANCE(280);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == ':')
        ADVANCE(283);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(285);
      if (lookahead == '>')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(287);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(219);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(223);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 252:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(258);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(265);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 287:
      if (lookahead == '\n')
        SKIP(217);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '%')
        ADVANCE(247);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == '*')
        ADVANCE(278);
      if (lookahead == '+')
        ADVANCE(279);
      if (lookahead == ',')
        ADVANCE(280);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == ':')
        ADVANCE(283);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(285);
      if (lookahead == '>')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(294);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(300);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 289:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(250);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(268);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(253);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 292:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(259);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(295);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(265);
      END_STATE();
    case 295:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(264);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(298);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 298:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(272);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(274);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 302:
      if (lookahead == '\n')
        ADVANCE(91);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '%')
        ADVANCE(247);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == '*')
        ADVANCE(278);
      if (lookahead == '+')
        ADVANCE(279);
      if (lookahead == ',')
        ADVANCE(280);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == ';')
        ADVANCE(303);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(285);
      if (lookahead == '>')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(304);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 304:
      if (lookahead == '\n')
        ADVANCE(91);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '%')
        ADVANCE(247);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == '*')
        ADVANCE(278);
      if (lookahead == '+')
        ADVANCE(279);
      if (lookahead == ',')
        ADVANCE(280);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == ';')
        ADVANCE(303);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(285);
      if (lookahead == '>')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(304);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(294);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(300);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    case 305:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(307);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(308);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(307);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == '.')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(308);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(179);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(310);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(312);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 312:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(312);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(152);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(318);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(71);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(317);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(60);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        SKIP(320);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '%')
        ADVANCE(247);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == '*')
        ADVANCE(278);
      if (lookahead == '+')
        ADVANCE(279);
      if (lookahead == ',')
        ADVANCE(280);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == ':')
        ADVANCE(283);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(321);
      if (lookahead == '>')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 322:
      if (lookahead == '\n')
        SKIP(320);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '%')
        ADVANCE(247);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == '*')
        ADVANCE(278);
      if (lookahead == '+')
        ADVANCE(279);
      if (lookahead == ',')
        ADVANCE(280);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == ':')
        ADVANCE(283);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(321);
      if (lookahead == '>')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(322);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(294);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(300);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 81},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 81},
  [5] = {.lex_state = 81},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 90},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 184},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 188},
  [16] = {.lex_state = 189},
  [17] = {.lex_state = 189},
  [18] = {.lex_state = 189},
  [19] = {.lex_state = 214},
  [20] = {.lex_state = 217},
  [21] = {.lex_state = 217},
  [22] = {.lex_state = 217},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 217},
  [25] = {.lex_state = 302},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 188},
  [30] = {.lex_state = 81},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 90},
  [33] = {.lex_state = 302},
  [34] = {.lex_state = 89},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 305},
  [37] = {.lex_state = 307},
  [38] = {.lex_state = 90},
  [39] = {.lex_state = 307},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 217},
  [43] = {.lex_state = 217},
  [44] = {.lex_state = 217},
  [45] = {.lex_state = 217},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 217},
  [48] = {.lex_state = 188},
  [49] = {.lex_state = 189},
  [50] = {.lex_state = 302},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 189},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 189},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 189},
  [61] = {.lex_state = 189},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 188},
  [65] = {.lex_state = 81},
  [66] = {.lex_state = 90},
  [67] = {.lex_state = 90},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 189},
  [70] = {.lex_state = 90},
  [71] = {.lex_state = 189},
  [72] = {.lex_state = 307},
  [73] = {.lex_state = 184},
  [74] = {.lex_state = 188},
  [75] = {.lex_state = 90},
  [76] = {.lex_state = 302},
  [77] = {.lex_state = 307},
  [78] = {.lex_state = 217},
  [79] = {.lex_state = 217},
  [80] = {.lex_state = 317},
  [81] = {.lex_state = 189},
  [82] = {.lex_state = 217},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 189},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 189},
  [87] = {.lex_state = 189},
  [88] = {.lex_state = 189},
  [89] = {.lex_state = 189},
  [90] = {.lex_state = 189},
  [91] = {.lex_state = 189},
  [92] = {.lex_state = 189},
  [93] = {.lex_state = 90},
  [94] = {.lex_state = 302},
  [95] = {.lex_state = 189},
  [96] = {.lex_state = 189},
  [97] = {.lex_state = 189},
  [98] = {.lex_state = 320},
  [99] = {.lex_state = 217},
  [100] = {.lex_state = 89},
  [101] = {.lex_state = 189},
  [102] = {.lex_state = 189},
  [103] = {.lex_state = 189},
  [104] = {.lex_state = 302},
  [105] = {.lex_state = 302},
  [106] = {.lex_state = 302},
  [107] = {.lex_state = 302},
  [108] = {.lex_state = 302},
  [109] = {.lex_state = 217},
  [110] = {.lex_state = 217},
  [111] = {.lex_state = 217},
  [112] = {.lex_state = 217},
  [113] = {.lex_state = 217},
  [114] = {.lex_state = 217},
  [115] = {.lex_state = 217},
  [116] = {.lex_state = 217},
  [117] = {.lex_state = 217},
  [118] = {.lex_state = 90},
  [119] = {.lex_state = 81},
  [120] = {.lex_state = 188},
  [121] = {.lex_state = 90},
  [122] = {.lex_state = 217},
  [123] = {.lex_state = 89},
  [124] = {.lex_state = 189},
  [125] = {.lex_state = 189},
  [126] = {.lex_state = 217},
  [127] = {.lex_state = 188},
  [128] = {.lex_state = 307},
  [129] = {.lex_state = 90},
  [130] = {.lex_state = 302},
  [131] = {.lex_state = 90},
  [132] = {.lex_state = 90},
  [133] = {.lex_state = 307},
  [134] = {.lex_state = 307},
  [135] = {.lex_state = 89},
  [136] = {.lex_state = 217},
  [137] = {.lex_state = 217},
  [138] = {.lex_state = 89},
  [139] = {.lex_state = 217},
  [140] = {.lex_state = 217},
  [141] = {.lex_state = 217},
  [142] = {.lex_state = 217},
  [143] = {.lex_state = 217},
  [144] = {.lex_state = 217},
  [145] = {.lex_state = 217},
  [146] = {.lex_state = 217},
  [147] = {.lex_state = 217},
  [148] = {.lex_state = 307},
  [149] = {.lex_state = 217},
  [150] = {.lex_state = 217},
  [151] = {.lex_state = 189},
  [152] = {.lex_state = 217},
  [153] = {.lex_state = 189},
  [154] = {.lex_state = 302},
  [155] = {.lex_state = 189},
  [156] = {.lex_state = 189},
  [157] = {.lex_state = 189},
  [158] = {.lex_state = 189},
  [159] = {.lex_state = 189},
  [160] = {.lex_state = 189},
  [161] = {.lex_state = 189},
  [162] = {.lex_state = 189},
  [163] = {.lex_state = 189},
  [164] = {.lex_state = 189},
  [165] = {.lex_state = 189},
  [166] = {.lex_state = 89},
  [167] = {.lex_state = 217},
  [168] = {.lex_state = 217},
  [169] = {.lex_state = 217},
  [170] = {.lex_state = 302},
  [171] = {.lex_state = 302},
  [172] = {.lex_state = 189},
  [173] = {.lex_state = 189},
  [174] = {.lex_state = 189},
  [175] = {.lex_state = 189},
  [176] = {.lex_state = 189},
  [177] = {.lex_state = 189},
  [178] = {.lex_state = 189},
  [179] = {.lex_state = 189},
  [180] = {.lex_state = 189},
  [181] = {.lex_state = 81},
  [182] = {.lex_state = 90},
  [183] = {.lex_state = 90},
  [184] = {.lex_state = 89},
  [185] = {.lex_state = 217},
  [186] = {.lex_state = 217},
  [187] = {.lex_state = 189},
  [188] = {.lex_state = 189},
  [189] = {.lex_state = 189},
  [190] = {.lex_state = 189},
  [191] = {.lex_state = 189},
  [192] = {.lex_state = 189},
  [193] = {.lex_state = 189},
  [194] = {.lex_state = 189},
  [195] = {.lex_state = 189},
  [196] = {.lex_state = 189},
  [197] = {.lex_state = 90},
  [198] = {.lex_state = 188},
  [199] = {.lex_state = 307},
  [200] = {.lex_state = 217},
  [201] = {.lex_state = 217},
  [202] = {.lex_state = 89},
  [203] = {.lex_state = 307},
  [204] = {.lex_state = 189},
  [205] = {.lex_state = 189},
  [206] = {.lex_state = 217},
  [207] = {.lex_state = 189},
  [208] = {.lex_state = 217},
  [209] = {.lex_state = 217},
  [210] = {.lex_state = 217},
  [211] = {.lex_state = 217},
  [212] = {.lex_state = 217},
  [213] = {.lex_state = 217},
  [214] = {.lex_state = 217},
  [215] = {.lex_state = 217},
  [216] = {.lex_state = 217},
  [217] = {.lex_state = 217},
  [218] = {.lex_state = 217},
  [219] = {.lex_state = 89},
  [220] = {.lex_state = 217},
  [221] = {.lex_state = 302},
  [222] = {.lex_state = 89},
  [223] = {.lex_state = 317},
  [224] = {.lex_state = 302},
  [225] = {.lex_state = 302},
  [226] = {.lex_state = 302},
  [227] = {.lex_state = 302},
  [228] = {.lex_state = 302},
  [229] = {.lex_state = 302},
  [230] = {.lex_state = 302},
  [231] = {.lex_state = 302},
  [232] = {.lex_state = 302},
  [233] = {.lex_state = 302},
  [234] = {.lex_state = 81},
  [235] = {.lex_state = 90},
  [236] = {.lex_state = 217},
  [237] = {.lex_state = 217},
  [238] = {.lex_state = 217},
  [239] = {.lex_state = 217},
  [240] = {.lex_state = 217},
  [241] = {.lex_state = 217},
  [242] = {.lex_state = 217},
  [243] = {.lex_state = 217},
  [244] = {.lex_state = 217},
  [245] = {.lex_state = 189},
  [246] = {.lex_state = 189},
  [247] = {.lex_state = 302},
  [248] = {.lex_state = 90},
  [249] = {.lex_state = 217},
  [250] = {.lex_state = 188},
  [251] = {.lex_state = 217},
  [252] = {.lex_state = 217},
  [253] = {.lex_state = 189},
  [254] = {.lex_state = 189},
  [255] = {.lex_state = 189},
  [256] = {.lex_state = 189},
  [257] = {.lex_state = 189},
  [258] = {.lex_state = 189},
  [259] = {.lex_state = 189},
  [260] = {.lex_state = 189},
  [261] = {.lex_state = 189},
  [262] = {.lex_state = 217},
  [263] = {.lex_state = 189},
  [264] = {.lex_state = 89},
  [265] = {.lex_state = 302},
  [266] = {.lex_state = 302},
  [267] = {.lex_state = 189},
  [268] = {.lex_state = 189},
  [269] = {.lex_state = 189},
  [270] = {.lex_state = 189},
  [271] = {.lex_state = 189},
  [272] = {.lex_state = 189},
  [273] = {.lex_state = 189},
  [274] = {.lex_state = 189},
  [275] = {.lex_state = 189},
  [276] = {.lex_state = 189},
  [277] = {.lex_state = 90},
  [278] = {.lex_state = 217},
  [279] = {.lex_state = 217},
  [280] = {.lex_state = 217},
  [281] = {.lex_state = 217},
  [282] = {.lex_state = 217},
  [283] = {.lex_state = 217},
  [284] = {.lex_state = 217},
  [285] = {.lex_state = 217},
  [286] = {.lex_state = 217},
  [287] = {.lex_state = 217},
  [288] = {.lex_state = 302},
  [289] = {.lex_state = 302},
  [290] = {.lex_state = 302},
  [291] = {.lex_state = 302},
  [292] = {.lex_state = 302},
  [293] = {.lex_state = 302},
  [294] = {.lex_state = 302},
  [295] = {.lex_state = 302},
  [296] = {.lex_state = 302},
  [297] = {.lex_state = 302},
  [298] = {.lex_state = 302},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [sym_statement_label] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(5),
    [sym__double_quoted_string] = ACTIONS(3),
    [sym__single_quoted_string] = ACTIONS(5),
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
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_block_label_expression] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [sym_subroutine_call] = STATE(23),
    [sym_do_loop_statement] = STATE(23),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(23),
    [sym_pointer_assignment_expression] = STATE(23),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(26),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(40),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym_subroutine_call] = STATE(23),
    [sym_do_loop_statement] = STATE(23),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(23),
    [sym_pointer_assignment_expression] = STATE(23),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(28),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(62),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(31),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(64),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [13] = {
    [sym_subroutine_call] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym_call_expression] = STATE(35),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym_loop_control_expression] = STATE(38),
    [sym__end_of_statement] = STATE(39),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [16] = {
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(78),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [sym__expression] = STATE(46),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [sym__expression] = STATE(47),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_SLASH_EQ] = ACTIONS(94),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [sym_comment] = ACTIONS(34),
  },
  [22] = {
    [sym_argument_list] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__end_of_statement] = STATE(51),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [24] = {
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_EQ_GT] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [sym__end_of_statement] = STATE(51),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [26] = {
    [sym_subroutine_call] = STATE(23),
    [sym_do_loop_statement] = STATE(23),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(23),
    [sym_pointer_assignment_expression] = STATE(23),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(63),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(62),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym__end_of_statement] = STATE(65),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [28] = {
    [sym_subroutine_call] = STATE(23),
    [sym_do_loop_statement] = STATE(23),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(23),
    [sym_pointer_assignment_expression] = STATE(23),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(63),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(128),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [29] = {
    [sym__end_of_statement] = STATE(65),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [sym__end_of_statement] = STATE(68),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [33] = {
    [sym__end_of_statement] = STATE(68),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [34] = {
    [sym_argument_list] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [36] = {
    [anon_sym_EQ] = ACTIONS(140),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym_statement_label] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_block_label_expression] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [sym__end_of_statement] = STATE(72),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [39] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(77),
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [sym__expression] = STATE(78),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__expression] = STATE(79),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(34),
  },
  [43] = {
    [sym_argument_list] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [45] = {
    [sym_argument_list] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(176),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym_loop_control_expression] = STATE(93),
    [sym__end_of_statement] = STATE(72),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [49] = {
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_keyword_argument] = STATE(100),
    [sym_array_slice] = STATE(100),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_EQ_GT] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_SLASH_EQ] = ACTIONS(196),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
  },
  [51] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(198),
    [sym_statement_label] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_block_label_expression] = ACTIONS(200),
    [sym_number_literal] = ACTIONS(200),
    [sym__double_quoted_string] = ACTIONS(200),
    [sym__single_quoted_string] = ACTIONS(200),
    [sym_boolean_literal] = ACTIONS(200),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym__expression] = STATE(107),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [sym__expression] = STATE(108),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [sym__expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [sym__expression] = STATE(110),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym__expression] = STATE(111),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [sym__expression] = STATE(112),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [sym__expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [sym__expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [sym__expression] = STATE(116),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [sym__expression] = STATE(117),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [sym_subroutine_call] = STATE(23),
    [sym_do_loop_statement] = STATE(23),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(23),
    [sym_pointer_assignment_expression] = STATE(23),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(63),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(198),
    [sym_statement_label] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(223),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [sym_block_label_expression] = ACTIONS(232),
    [sym_number_literal] = ACTIONS(235),
    [sym__double_quoted_string] = ACTIONS(238),
    [sym__single_quoted_string] = ACTIONS(238),
    [sym_boolean_literal] = ACTIONS(235),
    [sym_identifier] = ACTIONS(241),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym__end_of_statement] = STATE(119),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym__end_of_statement] = STATE(119),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [67] = {
    [sym__end_of_statement] = STATE(119),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [68] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(250),
    [sym_statement_label] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_block_label_expression] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(252),
    [sym__double_quoted_string] = ACTIONS(252),
    [sym__single_quoted_string] = ACTIONS(252),
    [sym_boolean_literal] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym__expression] = STATE(122),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_keyword_argument] = STATE(123),
    [sym_array_slice] = STATE(123),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
  },
  [71] = {
    [sym__expression] = STATE(126),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(128),
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym_subroutine_call] = STATE(129),
    [sym_do_loop_statement] = STATE(129),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(129),
    [sym_pointer_assignment_expression] = STATE(129),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(130),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__block_label_closing_expression] = STATE(132),
    [sym_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(264),
    [sym__newline] = ACTIONS(264),
  },
  [75] = {
    [sym__end_of_statement] = STATE(133),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [76] = {
    [sym__end_of_statement] = STATE(133),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [77] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(134),
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym_number_literal] = ACTIONS(266),
    [sym_identifier] = ACTIONS(268),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [sym__expression] = STATE(137),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_keyword_argument] = STATE(138),
    [sym_array_slice] = STATE(138),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_EQ_GT] = ACTIONS(274),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(272),
    [anon_sym_LT_EQ] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(272),
    [anon_sym_EQ_EQ] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(272),
    [anon_sym_SLASH_EQ] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(272),
    [anon_sym_SLASH_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(272),
    [anon_sym_STAR_STAR] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_COLON] = ACTIONS(272),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_EQ_GT] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(276),
    [anon_sym_LT_EQ] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(276),
    [anon_sym_SLASH_EQ] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym__expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym__expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym__expression] = STATE(142),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym__expression] = STATE(143),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [sym__expression] = STATE(144),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym__expression] = STATE(145),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [sym__expression] = STATE(146),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [sym__expression] = STATE(147),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [sym__end_of_statement] = STATE(148),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(282),
    [anon_sym_EQ_GT] = ACTIONS(282),
    [anon_sym_PERCENT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_STAR] = ACTIONS(282),
    [anon_sym_SLASH] = ACTIONS(282),
    [anon_sym_STAR_STAR] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(282),
    [sym__newline] = ACTIONS(282),
  },
  [95] = {
    [sym__expression] = STATE(149),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [sym__expression] = STATE(150),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym__expression] = STATE(152),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(286),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [sym_argument_list] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [aux_sym_argument_list_repeat1] = STATE(166),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [aux_sym_argument_list_repeat1] = STATE(166),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [sym__expression] = STATE(169),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(322),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym__expression] = STATE(170),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [sym__expression] = STATE(171),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [anon_sym_PERCENT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [105] = {
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_SLASH_EQ] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_STAR_STAR] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [106] = {
    [sym_argument_list] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [107] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(346),
    [sym__newline] = ACTIONS(346),
  },
  [108] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
  },
  [109] = {
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_EQ_GT] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_EQ_GT] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_EQ_GT] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [anon_sym_EQ] = ACTIONS(374),
    [anon_sym_EQ_GT] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [anon_sym_EQ] = ACTIONS(374),
    [anon_sym_EQ_GT] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [anon_sym_EQ] = ACTIONS(374),
    [anon_sym_EQ_GT] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(376),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym__end_of_statement] = STATE(181),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(380),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [sym__end_of_statement] = STATE(181),
    [sym_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [121] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(282),
    [sym__newline] = ACTIONS(282),
  },
  [122] = {
    [aux_sym_argument_list_repeat1] = STATE(184),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [aux_sym_argument_list_repeat1] = STATE(184),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [124] = {
    [sym__expression] = STATE(185),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__expression] = STATE(186),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(410),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym__block_label_closing_expression] = STATE(197),
    [sym_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(412),
    [sym__newline] = ACTIONS(412),
  },
  [128] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(134),
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__end_of_statement] = STATE(199),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [130] = {
    [sym__end_of_statement] = STATE(199),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
  },
  [131] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(416),
    [sym__newline] = ACTIONS(416),
  },
  [132] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(412),
    [sym__newline] = ACTIONS(412),
  },
  [133] = {
    [sym_statement_label] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_block_label_expression] = ACTIONS(200),
    [sym_number_literal] = ACTIONS(200),
    [sym__double_quoted_string] = ACTIONS(200),
    [sym__single_quoted_string] = ACTIONS(200),
    [sym_boolean_literal] = ACTIONS(200),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(134),
    [sym_statement_label] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(223),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [sym_block_label_expression] = ACTIONS(232),
    [sym_number_literal] = ACTIONS(235),
    [sym__double_quoted_string] = ACTIONS(238),
    [sym__single_quoted_string] = ACTIONS(238),
    [sym_boolean_literal] = ACTIONS(235),
    [sym_identifier] = ACTIONS(241),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(421),
    [sym_comment] = ACTIONS(14),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_EQ] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(425),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(423),
    [anon_sym_GT_EQ] = ACTIONS(425),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(423),
    [anon_sym_EQ_EQ] = ACTIONS(425),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(423),
    [anon_sym_SLASH_EQ] = ACTIONS(425),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(423),
    [anon_sym_SLASH_SLASH] = ACTIONS(425),
    [anon_sym_PLUS] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [aux_sym_argument_list_repeat1] = STATE(202),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [aux_sym_argument_list_repeat1] = STATE(202),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(376),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(203),
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [154] = {
    [anon_sym_EQ] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT_EQ] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_GT_EQ] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_EQ_EQ] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_SLASH_EQ] = ACTIONS(439),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_SLASH_SLASH] = ACTIONS(439),
    [anon_sym_PLUS] = ACTIONS(439),
    [anon_sym_DASH] = ACTIONS(439),
    [anon_sym_STAR] = ACTIONS(439),
    [anon_sym_SLASH] = ACTIONS(439),
    [anon_sym_STAR_STAR] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(439),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [155] = {
    [sym__expression] = STATE(209),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [sym__expression] = STATE(210),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [sym__expression] = STATE(211),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [sym__expression] = STATE(212),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [sym__expression] = STATE(213),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym__expression] = STATE(214),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [sym__expression] = STATE(215),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [sym__expression] = STATE(216),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [sym__expression] = STATE(217),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym__expression] = STATE(218),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_keyword_argument] = STATE(219),
    [sym_array_slice] = STATE(219),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [sym__expression] = STATE(220),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [aux_sym_argument_list_repeat1] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(443),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym_argument_list] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(443),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
  },
  [171] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_GT_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_EQ_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_SLASH_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(184),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(184),
    [sym__newline] = ACTIONS(184),
  },
  [172] = {
    [sym__expression] = STATE(225),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [sym__expression] = STATE(226),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym__expression] = STATE(227),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [175] = {
    [sym__expression] = STATE(228),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [sym__expression] = STATE(229),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [sym__expression] = STATE(230),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [sym__expression] = STATE(231),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [179] = {
    [sym__expression] = STATE(232),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [sym__expression] = STATE(233),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(447),
    [sym_comment] = ACTIONS(14),
  },
  [182] = {
    [sym__end_of_statement] = STATE(234),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [183] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [184] = {
    [aux_sym_argument_list_repeat1] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [185] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [sym__expression] = STATE(236),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [sym__expression] = STATE(237),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [sym__expression] = STATE(238),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [sym__expression] = STATE(239),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [sym__expression] = STATE(240),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [sym__expression] = STATE(241),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [sym__expression] = STATE(242),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [sym__expression] = STATE(243),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__expression] = STATE(244),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [sym__expression] = STATE(247),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(455),
    [sym__newline] = ACTIONS(455),
  },
  [198] = {
    [sym__block_label_closing_expression] = STATE(248),
    [sym_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(455),
    [sym__newline] = ACTIONS(455),
  },
  [199] = {
    [sym_statement_label] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_block_label_expression] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(252),
    [sym__double_quoted_string] = ACTIONS(252),
    [sym__single_quoted_string] = ACTIONS(252),
    [sym_boolean_literal] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_EQ_GT] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(457),
    [anon_sym_LT_EQ] = ACTIONS(459),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(457),
    [anon_sym_GT_EQ] = ACTIONS(459),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(457),
    [anon_sym_EQ_EQ] = ACTIONS(459),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(457),
    [anon_sym_SLASH_EQ] = ACTIONS(459),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(457),
    [anon_sym_SLASH_SLASH] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_STAR_STAR] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_EQ] = ACTIONS(463),
    [anon_sym_EQ_GT] = ACTIONS(465),
    [anon_sym_PERCENT] = ACTIONS(463),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(463),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(463),
    [anon_sym_LT_EQ] = ACTIONS(465),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(463),
    [anon_sym_GT_EQ] = ACTIONS(465),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(463),
    [anon_sym_EQ_EQ] = ACTIONS(465),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(463),
    [anon_sym_SLASH_EQ] = ACTIONS(465),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(463),
    [anon_sym_SLASH_SLASH] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(463),
    [anon_sym_DASH] = ACTIONS(463),
    [anon_sym_STAR] = ACTIONS(463),
    [anon_sym_SLASH] = ACTIONS(463),
    [anon_sym_STAR_STAR] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(463),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [aux_sym_argument_list_repeat1] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(14),
  },
  [203] = {
    [sym_subroutine_call] = STATE(75),
    [sym_do_loop_statement] = STATE(75),
    [sym__expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(20),
    [sym_assignment_expression] = STATE(75),
    [sym_pointer_assignment_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(76),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [aux_sym_program_block_repeat1] = STATE(134),
    [sym_statement_label] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_block_label_expression] = ACTIONS(54),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [sym__expression] = STATE(251),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [sym__expression] = STATE(252),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(471),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [sym__expression] = STATE(262),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(495),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [sym_comment] = ACTIONS(14),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(501),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_EQ_GT] = ACTIONS(503),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_GT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT_EQ] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_GT_EQ] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_EQ_EQ] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_SLASH_EQ] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_SLASH_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_DASH] = ACTIONS(503),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_STAR_STAR] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(503),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(503),
    [sym__newline] = ACTIONS(503),
  },
  [222] = {
    [aux_sym_argument_list_repeat1] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(505),
    [sym_comment] = ACTIONS(14),
  },
  [223] = {
    [sym_number_literal] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(14),
  },
  [224] = {
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(280),
    [anon_sym_SLASH] = ACTIONS(280),
    [anon_sym_STAR_STAR] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
  },
  [225] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_SLASH_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_STAR_STAR] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
  },
  [226] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [227] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [228] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [229] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_GT_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_EQ_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_SLASH_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(366),
    [sym__newline] = ACTIONS(366),
  },
  [230] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_GT_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_SLASH_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(372),
    [sym__newline] = ACTIONS(372),
  },
  [231] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
  },
  [232] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
  },
  [233] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(378),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(512),
    [sym_comment] = ACTIONS(14),
  },
  [235] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(503),
    [sym__newline] = ACTIONS(503),
  },
  [236] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [237] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [240] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(362),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [sym__expression] = STATE(265),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [sym__expression] = STATE(266),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [248] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [249] = {
    [anon_sym_RPAREN] = ACTIONS(538),
    [anon_sym_EQ] = ACTIONS(538),
    [anon_sym_EQ_GT] = ACTIONS(540),
    [anon_sym_PERCENT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(540),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(540),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(540),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(540),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(540),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_COLON] = ACTIONS(538),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [sym__block_label_closing_expression] = STATE(277),
    [sym_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [251] = {
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
  },
  [253] = {
    [sym__expression] = STATE(278),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
    [sym__expression] = STATE(279),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [255] = {
    [sym__expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [sym__expression] = STATE(281),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [sym__expression] = STATE(282),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [258] = {
    [sym__expression] = STATE(283),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [259] = {
    [sym__expression] = STATE(284),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [260] = {
    [sym__expression] = STATE(285),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [sym__expression] = STATE(286),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(542),
    [sym_comment] = ACTIONS(34),
  },
  [263] = {
    [sym__expression] = STATE(287),
    [sym_parenthesized_expression] = STATE(20),
    [sym_derived_type_member_expression] = STATE(20),
    [sym_logical_expression] = STATE(20),
    [sym_relational_expression] = STATE(20),
    [sym_concatenation_expression] = STATE(20),
    [sym_math_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_complex_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [sym_number_literal] = ACTIONS(56),
    [sym__double_quoted_string] = ACTIONS(58),
    [sym__single_quoted_string] = ACTIONS(58),
    [sym_boolean_literal] = ACTIONS(56),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(544),
    [sym_comment] = ACTIONS(14),
  },
  [265] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
  },
  [266] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_GT_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_EQ_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_SLASH_EQ] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(184),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(184),
    [sym__newline] = ACTIONS(184),
  },
  [267] = {
    [sym__expression] = STATE(289),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [268] = {
    [sym__expression] = STATE(290),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [sym__expression] = STATE(291),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [sym__expression] = STATE(292),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [sym__expression] = STATE(293),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [272] = {
    [sym__expression] = STATE(294),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [273] = {
    [sym__expression] = STATE(295),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [274] = {
    [sym__expression] = STATE(296),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [275] = {
    [sym__expression] = STATE(297),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [276] = {
    [sym__expression] = STATE(298),
    [sym_parenthesized_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(104),
    [sym_logical_expression] = STATE(104),
    [sym_relational_expression] = STATE(104),
    [sym_concatenation_expression] = STATE(104),
    [sym_math_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_complex_literal] = STATE(104),
    [sym_string_literal] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_number_literal] = ACTIONS(208),
    [sym__double_quoted_string] = ACTIONS(210),
    [sym__single_quoted_string] = ACTIONS(210),
    [sym_boolean_literal] = ACTIONS(208),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(34),
  },
  [277] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(546),
    [sym__newline] = ACTIONS(546),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_GT_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(362),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_STAR_STAR] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_PERCENT] = ACTIONS(473),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(483),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(548),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [anon_sym_PERCENT] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_LT_EQ] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_EQ_EQ] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_SLASH_EQ] = ACTIONS(461),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(461),
    [anon_sym_SLASH_SLASH] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_STAR_STAR] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(461),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(461),
    [sym__newline] = ACTIONS(461),
  },
  [289] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_SLASH_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_STAR_STAR] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
  },
  [290] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [291] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [292] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [293] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_LT_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_GT_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_EQ_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_SLASH_EQ] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(366),
    [sym__newline] = ACTIONS(366),
  },
  [294] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_GT_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_SLASH_EQ] = ACTIONS(372),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(372),
    [sym__newline] = ACTIONS(372),
  },
  [295] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
  },
  [296] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
  },
  [297] = {
    [anon_sym_PERCENT] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
  },
  [298] = {
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(550),
    [sym__newline] = ACTIONS(550),
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
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [214] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [217] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [220] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [223] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [226] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [229] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [232] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [235] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [238] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(21),
  [241] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(22),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label_closing_expression, 1, .alias_sequence_id = 1),
  [418] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(73),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(256),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [505] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(164),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(268),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(271),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(272),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [528] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
