#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 375
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  sym_statement_label = 3,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 4,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 5,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 6,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH = 7,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 8,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 10,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 12,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 13,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 14,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_EQ = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_PERCENT = 21,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 22,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 23,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 24,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 25,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 26,
  anon_sym_LT = 27,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 28,
  anon_sym_GT = 29,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 30,
  anon_sym_LT_EQ = 31,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 32,
  anon_sym_GT_EQ = 33,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 34,
  anon_sym_EQ_EQ = 35,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 36,
  anon_sym_SLASH_EQ = 37,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 38,
  anon_sym_SLASH_SLASH = 39,
  anon_sym_PLUS = 40,
  anon_sym_DASH = 41,
  anon_sym_STAR = 42,
  anon_sym_SLASH = 43,
  anon_sym_STAR_STAR = 44,
  anon_sym_COMMA = 45,
  anon_sym_COLON = 46,
  sym_block_label_start_expression = 47,
  sym_number_literal = 48,
  sym__double_quoted_string = 49,
  sym__single_quoted_string = 50,
  sym_boolean_literal = 51,
  sym_identifier = 52,
  sym_comment = 53,
  sym__semicolon = 54,
  sym__newline = 55,
  sym_translation_unit = 56,
  sym_program_block = 57,
  sym_subroutine_call = 58,
  sym_keyword_statement = 59,
  sym_do_loop_statement = 60,
  sym_if_statement = 61,
  sym__inline_if_statement = 62,
  sym__block_if_statement = 63,
  sym_elseif_clause = 64,
  sym_else_clause = 65,
  sym__expression = 66,
  sym_parenthesized_expression = 67,
  sym_assignment_expression = 68,
  sym_pointer_assignment_expression = 69,
  sym_derived_type_member_expression = 70,
  sym_logical_expression = 71,
  sym_relational_expression = 72,
  sym_concatenation_expression = 73,
  sym_math_expression = 74,
  sym_call_expression = 75,
  sym_argument_list = 76,
  sym_keyword_argument = 77,
  sym_array_slice = 78,
  sym__block_label = 79,
  sym_loop_control_expression = 80,
  sym_complex_literal = 81,
  sym_string_literal = 82,
  sym__end_of_statement = 83,
  aux_sym_translation_unit_repeat1 = 84,
  aux_sym_program_block_repeat1 = 85,
  aux_sym__block_if_statement_repeat1 = 86,
  aux_sym_argument_list_repeat1 = 87,
  alias_sym_block_label = 88,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [sym_statement_label] = "statement_label",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[cC][aA][lL][lL]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][oO][nN][tT][iI][nN][uU][eE]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][yY][cC][lL][eE]/",
  [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[gG][oO][ 	]*[tT][oO]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[rR][eE][tT][uU][rR][nN]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = "/[sS][tT][oO][pP]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[dD][oO]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[eE][nN][dD][ 	]*[dD][oO]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[iI][fF]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[tT][hH][eE][nN]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[eE][nN][dD][ 	]*[iI][fF]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[eE][lL][sS][eE][ 	]*[iI][fF]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[eE][lL][sS][eE]/",
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
  [sym_block_label_start_expression] = "block_label_start_expression",
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
  [sym_keyword_statement] = "keyword_statement",
  [sym_do_loop_statement] = "do_loop_statement",
  [sym_if_statement] = "if_statement",
  [sym__inline_if_statement] = "_inline_if_statement",
  [sym__block_if_statement] = "_block_if_statement",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
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
  [sym__block_label] = "_block_label",
  [sym_loop_control_expression] = "loop_control_expression",
  [sym_complex_literal] = "complex_literal",
  [sym_string_literal] = "string_literal",
  [sym__end_of_statement] = "_end_of_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym__block_if_statement_repeat1] = "_block_if_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_block_label] = "block_label",
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
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = {
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
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [sym_block_label_start_expression] = {
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
  [sym_keyword_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_if_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__block_if_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_elseif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
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
  [sym__block_label] = {
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
  [aux_sym__block_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_block_label] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_block_label,
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
        ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(79);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
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
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(72);
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
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
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
        ADVANCE(60);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
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
        ADVANCE(60);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(123);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 131:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_statement_label);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(133);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(124);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(135);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 149:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(150);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 150:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 151:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 152:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 153:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 154:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 156:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 157:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 158:
      if (lookahead == '\"')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 161:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 162:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 163:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(175);
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
    case 164:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 165:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 166:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 167:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 168:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 170:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 171:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 172:
      if (lookahead == '\'')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 175:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 176:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(181);
      END_STATE();
    case 190:
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
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
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
    case 191:
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
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
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
    case 192:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(135);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(249);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_block_label_start_expression);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(183);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(187);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(229);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(232);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(236);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(204);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 253:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(254);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(254);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(249);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == ';')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(276);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(278);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(280);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == ';')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(275);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(277);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(278);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(280);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(183);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(187);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(269);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 281:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(282);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == ')')
        ADVANCE(283);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == ',')
        ADVANCE(284);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == ':')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(286);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(276);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(278);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(280);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(282);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == ')')
        ADVANCE(283);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == ',')
        ADVANCE(284);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == ':')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(286);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(275);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(277);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(278);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(280);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 287:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(287);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 290:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 292:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 296:
      if (lookahead == '\n')
        SKIP(296);
      if (lookahead == '!')
        ADVANCE(297);
      if (lookahead == '%')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(356);
      if (lookahead == '*')
        ADVANCE(357);
      if (lookahead == '+')
        ADVANCE(358);
      if (lookahead == ',')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(362);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(364);
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(380);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(298);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(302);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(312);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(308);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(322);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 331:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(339);
      END_STATE();
    case 337:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 339:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(344);
      END_STATE();
    case 342:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 344:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 366:
      if (lookahead == '\n')
        SKIP(296);
      if (lookahead == '!')
        ADVANCE(297);
      if (lookahead == '%')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(356);
      if (lookahead == '*')
        ADVANCE(357);
      if (lookahead == '+')
        ADVANCE(358);
      if (lookahead == ',')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(362);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(364);
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(366);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(367);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(369);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(376);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(380);
      END_STATE();
    case 367:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 368:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(329);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(347);
      END_STATE();
    case 369:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(332);
      END_STATE();
    case 370:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(371);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(339);
      END_STATE();
    case 371:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(338);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(335);
      END_STATE();
    case 373:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(374);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(344);
      END_STATE();
    case 374:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(343);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(335);
      END_STATE();
    case 376:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(377);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 377:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(351);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(335);
      END_STATE();
    case 379:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(353);
      END_STATE();
    case 380:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 381:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '!')
        ADVANCE(297);
      if (lookahead == '%')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '*')
        ADVANCE(357);
      if (lookahead == '+')
        ADVANCE(358);
      if (lookahead == ',')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(382);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(364);
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 383:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '!')
        ADVANCE(297);
      if (lookahead == '%')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '*')
        ADVANCE(357);
      if (lookahead == '+')
        ADVANCE(358);
      if (lookahead == ',')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(382);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(364);
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(367);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(369);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(376);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(380);
      END_STATE();
    case 384:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '=')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(386);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(387);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(388);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(386);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(387);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(388);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(249);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(389);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(396);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(397);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(402);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(396);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(397);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(398);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(404);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(99);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(403);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(60);
      END_STATE();
    case 404:
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
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 406:
      if (lookahead == '\n')
        SKIP(406);
      if (lookahead == '!')
        ADVANCE(297);
      if (lookahead == '%')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(356);
      if (lookahead == '*')
        ADVANCE(357);
      if (lookahead == '+')
        ADVANCE(358);
      if (lookahead == ',')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(362);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(380);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 408:
      if (lookahead == '\n')
        SKIP(406);
      if (lookahead == '!')
        ADVANCE(297);
      if (lookahead == '%')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(356);
      if (lookahead == '*')
        ADVANCE(357);
      if (lookahead == '+')
        ADVANCE(358);
      if (lookahead == ',')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(362);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(408);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(367);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(369);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(376);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(380);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(409);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(410);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(411);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(409);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(410);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(411);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(249);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(412);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(418);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(419);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(419);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 424:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(424);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(429);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(84);
      END_STATE();
    case 429:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(419);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(430);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(431);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(430);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(163);
      if (lookahead == '(')
        ADVANCE(177);
      if (lookahead == '+')
        ADVANCE(190);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(431);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(249);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 123},
  [2] = {.lex_state = 131},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 123},
  [5] = {.lex_state = 123},
  [6] = {.lex_state = 133},
  [7] = {.lex_state = 123},
  [8] = {.lex_state = 133},
  [9] = {.lex_state = 135},
  [10] = {.lex_state = 135},
  [11] = {.lex_state = 135},
  [12] = {.lex_state = 133},
  [13] = {.lex_state = 254},
  [14] = {.lex_state = 131},
  [15] = {.lex_state = 133},
  [16] = {.lex_state = 131},
  [17] = {.lex_state = 131},
  [18] = {.lex_state = 258},
  [19] = {.lex_state = 281},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 282},
  [22] = {.lex_state = 282},
  [23] = {.lex_state = 282},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 296},
  [26] = {.lex_state = 296},
  [27] = {.lex_state = 296},
  [28] = {.lex_state = 133},
  [29] = {.lex_state = 133},
  [30] = {.lex_state = 296},
  [31] = {.lex_state = 381},
  [32] = {.lex_state = 135},
  [33] = {.lex_state = 133},
  [34] = {.lex_state = 135},
  [35] = {.lex_state = 281},
  [36] = {.lex_state = 123},
  [37] = {.lex_state = 123},
  [38] = {.lex_state = 133},
  [39] = {.lex_state = 381},
  [40] = {.lex_state = 131},
  [41] = {.lex_state = 133},
  [42] = {.lex_state = 133},
  [43] = {.lex_state = 282},
  [44] = {.lex_state = 282},
  [45] = {.lex_state = 282},
  [46] = {.lex_state = 381},
  [47] = {.lex_state = 381},
  [48] = {.lex_state = 381},
  [49] = {.lex_state = 381},
  [50] = {.lex_state = 384},
  [51] = {.lex_state = 386},
  [52] = {.lex_state = 133},
  [53] = {.lex_state = 386},
  [54] = {.lex_state = 282},
  [55] = {.lex_state = 396},
  [56] = {.lex_state = 282},
  [57] = {.lex_state = 282},
  [58] = {.lex_state = 296},
  [59] = {.lex_state = 296},
  [60] = {.lex_state = 296},
  [61] = {.lex_state = 296},
  [62] = {.lex_state = 296},
  [63] = {.lex_state = 296},
  [64] = {.lex_state = 281},
  [65] = {.lex_state = 131},
  [66] = {.lex_state = 282},
  [67] = {.lex_state = 381},
  [68] = {.lex_state = 135},
  [69] = {.lex_state = 282},
  [70] = {.lex_state = 282},
  [71] = {.lex_state = 282},
  [72] = {.lex_state = 282},
  [73] = {.lex_state = 282},
  [74] = {.lex_state = 282},
  [75] = {.lex_state = 282},
  [76] = {.lex_state = 282},
  [77] = {.lex_state = 282},
  [78] = {.lex_state = 282},
  [79] = {.lex_state = 282},
  [80] = {.lex_state = 135},
  [81] = {.lex_state = 281},
  [82] = {.lex_state = 123},
  [83] = {.lex_state = 133},
  [84] = {.lex_state = 133},
  [85] = {.lex_state = 135},
  [86] = {.lex_state = 282},
  [87] = {.lex_state = 133},
  [88] = {.lex_state = 296},
  [89] = {.lex_state = 296},
  [90] = {.lex_state = 296},
  [91] = {.lex_state = 381},
  [92] = {.lex_state = 381},
  [93] = {.lex_state = 282},
  [94] = {.lex_state = 282},
  [95] = {.lex_state = 282},
  [96] = {.lex_state = 282},
  [97] = {.lex_state = 282},
  [98] = {.lex_state = 282},
  [99] = {.lex_state = 282},
  [100] = {.lex_state = 282},
  [101] = {.lex_state = 282},
  [102] = {.lex_state = 282},
  [103] = {.lex_state = 386},
  [104] = {.lex_state = 254},
  [105] = {.lex_state = 281},
  [106] = {.lex_state = 133},
  [107] = {.lex_state = 381},
  [108] = {.lex_state = 386},
  [109] = {.lex_state = 296},
  [110] = {.lex_state = 254},
  [111] = {.lex_state = 133},
  [112] = {.lex_state = 133},
  [113] = {.lex_state = 381},
  [114] = {.lex_state = 296},
  [115] = {.lex_state = 296},
  [116] = {.lex_state = 403},
  [117] = {.lex_state = 282},
  [118] = {.lex_state = 296},
  [119] = {.lex_state = 296},
  [120] = {.lex_state = 282},
  [121] = {.lex_state = 282},
  [122] = {.lex_state = 282},
  [123] = {.lex_state = 282},
  [124] = {.lex_state = 282},
  [125] = {.lex_state = 282},
  [126] = {.lex_state = 282},
  [127] = {.lex_state = 282},
  [128] = {.lex_state = 282},
  [129] = {.lex_state = 133},
  [130] = {.lex_state = 282},
  [131] = {.lex_state = 287},
  [132] = {.lex_state = 381},
  [133] = {.lex_state = 282},
  [134] = {.lex_state = 282},
  [135] = {.lex_state = 282},
  [136] = {.lex_state = 406},
  [137] = {.lex_state = 296},
  [138] = {.lex_state = 384},
  [139] = {.lex_state = 381},
  [140] = {.lex_state = 381},
  [141] = {.lex_state = 296},
  [142] = {.lex_state = 296},
  [143] = {.lex_state = 296},
  [144] = {.lex_state = 296},
  [145] = {.lex_state = 296},
  [146] = {.lex_state = 296},
  [147] = {.lex_state = 296},
  [148] = {.lex_state = 296},
  [149] = {.lex_state = 296},
  [150] = {.lex_state = 133},
  [151] = {.lex_state = 123},
  [152] = {.lex_state = 281},
  [153] = {.lex_state = 133},
  [154] = {.lex_state = 296},
  [155] = {.lex_state = 384},
  [156] = {.lex_state = 403},
  [157] = {.lex_state = 381},
  [158] = {.lex_state = 381},
  [159] = {.lex_state = 381},
  [160] = {.lex_state = 381},
  [161] = {.lex_state = 381},
  [162] = {.lex_state = 381},
  [163] = {.lex_state = 381},
  [164] = {.lex_state = 381},
  [165] = {.lex_state = 381},
  [166] = {.lex_state = 381},
  [167] = {.lex_state = 282},
  [168] = {.lex_state = 282},
  [169] = {.lex_state = 296},
  [170] = {.lex_state = 281},
  [171] = {.lex_state = 386},
  [172] = {.lex_state = 133},
  [173] = {.lex_state = 381},
  [174] = {.lex_state = 133},
  [175] = {.lex_state = 133},
  [176] = {.lex_state = 386},
  [177] = {.lex_state = 386},
  [178] = {.lex_state = 396},
  [179] = {.lex_state = 133},
  [180] = {.lex_state = 381},
  [181] = {.lex_state = 409},
  [182] = {.lex_state = 409},
  [183] = {.lex_state = 133},
  [184] = {.lex_state = 133},
  [185] = {.lex_state = 384},
  [186] = {.lex_state = 296},
  [187] = {.lex_state = 296},
  [188] = {.lex_state = 384},
  [189] = {.lex_state = 296},
  [190] = {.lex_state = 296},
  [191] = {.lex_state = 296},
  [192] = {.lex_state = 296},
  [193] = {.lex_state = 296},
  [194] = {.lex_state = 296},
  [195] = {.lex_state = 296},
  [196] = {.lex_state = 296},
  [197] = {.lex_state = 296},
  [198] = {.lex_state = 386},
  [199] = {.lex_state = 296},
  [200] = {.lex_state = 133},
  [201] = {.lex_state = 296},
  [202] = {.lex_state = 296},
  [203] = {.lex_state = 282},
  [204] = {.lex_state = 296},
  [205] = {.lex_state = 282},
  [206] = {.lex_state = 381},
  [207] = {.lex_state = 282},
  [208] = {.lex_state = 282},
  [209] = {.lex_state = 282},
  [210] = {.lex_state = 282},
  [211] = {.lex_state = 282},
  [212] = {.lex_state = 282},
  [213] = {.lex_state = 282},
  [214] = {.lex_state = 282},
  [215] = {.lex_state = 282},
  [216] = {.lex_state = 282},
  [217] = {.lex_state = 282},
  [218] = {.lex_state = 384},
  [219] = {.lex_state = 123},
  [220] = {.lex_state = 133},
  [221] = {.lex_state = 133},
  [222] = {.lex_state = 384},
  [223] = {.lex_state = 384},
  [224] = {.lex_state = 296},
  [225] = {.lex_state = 296},
  [226] = {.lex_state = 282},
  [227] = {.lex_state = 282},
  [228] = {.lex_state = 282},
  [229] = {.lex_state = 282},
  [230] = {.lex_state = 282},
  [231] = {.lex_state = 282},
  [232] = {.lex_state = 282},
  [233] = {.lex_state = 282},
  [234] = {.lex_state = 282},
  [235] = {.lex_state = 282},
  [236] = {.lex_state = 133},
  [237] = {.lex_state = 281},
  [238] = {.lex_state = 386},
  [239] = {.lex_state = 133},
  [240] = {.lex_state = 254},
  [241] = {.lex_state = 281},
  [242] = {.lex_state = 131},
  [243] = {.lex_state = 133},
  [244] = {.lex_state = 133},
  [245] = {.lex_state = 424},
  [246] = {.lex_state = 424},
  [247] = {.lex_state = 381},
  [248] = {.lex_state = 409},
  [249] = {.lex_state = 424},
  [250] = {.lex_state = 296},
  [251] = {.lex_state = 296},
  [252] = {.lex_state = 384},
  [253] = {.lex_state = 386},
  [254] = {.lex_state = 287},
  [255] = {.lex_state = 409},
  [256] = {.lex_state = 282},
  [257] = {.lex_state = 282},
  [258] = {.lex_state = 296},
  [259] = {.lex_state = 282},
  [260] = {.lex_state = 296},
  [261] = {.lex_state = 296},
  [262] = {.lex_state = 296},
  [263] = {.lex_state = 296},
  [264] = {.lex_state = 296},
  [265] = {.lex_state = 296},
  [266] = {.lex_state = 296},
  [267] = {.lex_state = 296},
  [268] = {.lex_state = 296},
  [269] = {.lex_state = 296},
  [270] = {.lex_state = 296},
  [271] = {.lex_state = 384},
  [272] = {.lex_state = 296},
  [273] = {.lex_state = 381},
  [274] = {.lex_state = 384},
  [275] = {.lex_state = 123},
  [276] = {.lex_state = 133},
  [277] = {.lex_state = 381},
  [278] = {.lex_state = 296},
  [279] = {.lex_state = 296},
  [280] = {.lex_state = 296},
  [281] = {.lex_state = 296},
  [282] = {.lex_state = 296},
  [283] = {.lex_state = 296},
  [284] = {.lex_state = 296},
  [285] = {.lex_state = 296},
  [286] = {.lex_state = 296},
  [287] = {.lex_state = 282},
  [288] = {.lex_state = 282},
  [289] = {.lex_state = 381},
  [290] = {.lex_state = 133},
  [291] = {.lex_state = 133},
  [292] = {.lex_state = 381},
  [293] = {.lex_state = 133},
  [294] = {.lex_state = 287},
  [295] = {.lex_state = 430},
  [296] = {.lex_state = 430},
  [297] = {.lex_state = 409},
  [298] = {.lex_state = 281},
  [299] = {.lex_state = 424},
  [300] = {.lex_state = 409},
  [301] = {.lex_state = 424},
  [302] = {.lex_state = 424},
  [303] = {.lex_state = 296},
  [304] = {.lex_state = 281},
  [305] = {.lex_state = 409},
  [306] = {.lex_state = 296},
  [307] = {.lex_state = 296},
  [308] = {.lex_state = 282},
  [309] = {.lex_state = 282},
  [310] = {.lex_state = 282},
  [311] = {.lex_state = 282},
  [312] = {.lex_state = 282},
  [313] = {.lex_state = 282},
  [314] = {.lex_state = 282},
  [315] = {.lex_state = 282},
  [316] = {.lex_state = 282},
  [317] = {.lex_state = 296},
  [318] = {.lex_state = 282},
  [319] = {.lex_state = 381},
  [320] = {.lex_state = 381},
  [321] = {.lex_state = 282},
  [322] = {.lex_state = 282},
  [323] = {.lex_state = 282},
  [324] = {.lex_state = 282},
  [325] = {.lex_state = 282},
  [326] = {.lex_state = 282},
  [327] = {.lex_state = 282},
  [328] = {.lex_state = 282},
  [329] = {.lex_state = 282},
  [330] = {.lex_state = 282},
  [331] = {.lex_state = 409},
  [332] = {.lex_state = 133},
  [333] = {.lex_state = 254},
  [334] = {.lex_state = 133},
  [335] = {.lex_state = 381},
  [336] = {.lex_state = 430},
  [337] = {.lex_state = 133},
  [338] = {.lex_state = 281},
  [339] = {.lex_state = 424},
  [340] = {.lex_state = 133},
  [341] = {.lex_state = 424},
  [342] = {.lex_state = 296},
  [343] = {.lex_state = 296},
  [344] = {.lex_state = 296},
  [345] = {.lex_state = 296},
  [346] = {.lex_state = 296},
  [347] = {.lex_state = 296},
  [348] = {.lex_state = 296},
  [349] = {.lex_state = 296},
  [350] = {.lex_state = 296},
  [351] = {.lex_state = 296},
  [352] = {.lex_state = 381},
  [353] = {.lex_state = 381},
  [354] = {.lex_state = 381},
  [355] = {.lex_state = 381},
  [356] = {.lex_state = 381},
  [357] = {.lex_state = 381},
  [358] = {.lex_state = 381},
  [359] = {.lex_state = 381},
  [360] = {.lex_state = 381},
  [361] = {.lex_state = 381},
  [362] = {.lex_state = 409},
  [363] = {.lex_state = 133},
  [364] = {.lex_state = 381},
  [365] = {.lex_state = 430},
  [366] = {.lex_state = 430},
  [367] = {.lex_state = 133},
  [368] = {.lex_state = 281},
  [369] = {.lex_state = 424},
  [370] = {.lex_state = 409},
  [371] = {.lex_state = 430},
  [372] = {.lex_state = 133},
  [373] = {.lex_state = 281},
  [374] = {.lex_state = 133},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [sym_statement_label] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_block_label_start_expression] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [sym_subroutine_call] = STATE(28),
    [sym_keyword_statement] = STATE(28),
    [sym_do_loop_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(28),
    [sym_pointer_assignment_expression] = STATE(28),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(40),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym_subroutine_call] = STATE(28),
    [sym_keyword_statement] = STATE(28),
    [sym_do_loop_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(28),
    [sym_pointer_assignment_expression] = STATE(28),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(34),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(72),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(37),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [13] = {
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(39),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym_call_expression] = STATE(41),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(80),
    [sym__newline] = ACTIONS(80),
  },
  [16] = {
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_statement_label] = ACTIONS(82),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__expression] = STATE(49),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(80),
    [sym__newline] = ACTIONS(80),
  },
  [19] = {
    [sym_loop_control_expression] = STATE(52),
    [sym__end_of_statement] = STATE(53),
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [20] = {
    [sym_parenthesized_expression] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [sym__expression] = STATE(60),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(106),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
  },
  [22] = {
    [sym__expression] = STATE(62),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_EQ_GT] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(122),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(122),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(122),
    [anon_sym_SLASH_EQ] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym_argument_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [sym__end_of_statement] = STATE(68),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [29] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(130),
    [sym__newline] = ACTIONS(130),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [sym__end_of_statement] = STATE(68),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [32] = {
    [sym_subroutine_call] = STATE(28),
    [sym_keyword_statement] = STATE(28),
    [sym_do_loop_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(28),
    [sym_pointer_assignment_expression] = STATE(28),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(72),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [33] = {
    [sym__end_of_statement] = STATE(82),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [34] = {
    [sym_subroutine_call] = STATE(28),
    [sym_keyword_statement] = STATE(28),
    [sym_do_loop_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(28),
    [sym_pointer_assignment_expression] = STATE(28),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(160),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym__end_of_statement] = STATE(82),
    [sym_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(164),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym__end_of_statement] = STATE(85),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [39] = {
    [sym__end_of_statement] = STATE(85),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [40] = {
    [sym_argument_list] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
  },
  [42] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(172),
    [sym__newline] = ACTIONS(172),
  },
  [43] = {
    [sym__expression] = STATE(90),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(174),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [sym__expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [45] = {
    [sym__expression] = STATE(92),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(120),
    [sym__newline] = ACTIONS(120),
  },
  [47] = {
    [anon_sym_PERCENT] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(126),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
  },
  [48] = {
    [sym_argument_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(120),
    [sym__newline] = ACTIONS(120),
  },
  [49] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(172),
    [sym__newline] = ACTIONS(172),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym_statement_label] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_block_label_start_expression] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym__end_of_statement] = STATE(103),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [53] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(108),
    [sym_statement_label] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [sym__expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [sym_subroutine_call] = STATE(112),
    [sym_keyword_statement] = STATE(112),
    [sym_do_loop_statement] = STATE(112),
    [sym_if_statement] = STATE(112),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(112),
    [sym_pointer_assignment_expression] = STATE(112),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(113),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [sym_statement_label] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [sym__expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [sym_argument_list] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [sym_argument_list] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_EQ_GT] = ACTIONS(244),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_EQ_GT] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(250),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym_loop_control_expression] = STATE(129),
    [sym__end_of_statement] = STATE(103),
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [65] = {
    [sym_parenthesized_expression] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym__expression] = STATE(137),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_keyword_argument] = STATE(138),
    [sym_array_slice] = STATE(138),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_EQ_GT] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(266),
    [sym__newline] = ACTIONS(266),
  },
  [68] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(268),
    [sym_statement_label] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [sym_block_label_start_expression] = ACTIONS(270),
    [sym_number_literal] = ACTIONS(270),
    [sym__double_quoted_string] = ACTIONS(270),
    [sym__single_quoted_string] = ACTIONS(270),
    [sym_boolean_literal] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym__expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [sym__expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [sym__expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym__expression] = STATE(142),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym__expression] = STATE(143),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__expression] = STATE(144),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym__expression] = STATE(145),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [sym__expression] = STATE(146),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [sym__expression] = STATE(147),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__expression] = STATE(148),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [sym__expression] = STATE(149),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym_subroutine_call] = STATE(28),
    [sym_keyword_statement] = STATE(28),
    [sym_do_loop_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(28),
    [sym_pointer_assignment_expression] = STATE(28),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(268),
    [sym_statement_label] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [sym_block_label_start_expression] = ACTIONS(305),
    [sym_number_literal] = ACTIONS(308),
    [sym__double_quoted_string] = ACTIONS(311),
    [sym__single_quoted_string] = ACTIONS(311),
    [sym_boolean_literal] = ACTIONS(308),
    [sym_identifier] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym__end_of_statement] = STATE(151),
    [sym_identifier] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(319),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [sym__end_of_statement] = STATE(151),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [84] = {
    [sym__end_of_statement] = STATE(151),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [85] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(323),
    [sym_statement_label] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [sym_block_label_start_expression] = ACTIONS(325),
    [sym_number_literal] = ACTIONS(325),
    [sym__double_quoted_string] = ACTIONS(325),
    [sym__single_quoted_string] = ACTIONS(325),
    [sym_boolean_literal] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym__expression] = STATE(154),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_keyword_argument] = STATE(155),
    [sym_array_slice] = STATE(155),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(266),
    [sym__newline] = ACTIONS(266),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [sym_argument_list] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(246),
    [sym__newline] = ACTIONS(246),
  },
  [92] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_SLASH_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(252),
    [sym__newline] = ACTIONS(252),
  },
  [93] = {
    [sym__expression] = STATE(158),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [sym__expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [sym__expression] = STATE(160),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [sym__expression] = STATE(161),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym__expression] = STATE(162),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [sym__expression] = STATE(163),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [sym__expression] = STATE(164),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [sym__expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [sym__expression] = STATE(166),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym__expression] = STATE(169),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(171),
    [sym_statement_label] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [sym_subroutine_call] = STATE(172),
    [sym_keyword_statement] = STATE(172),
    [sym_do_loop_statement] = STATE(172),
    [sym_if_statement] = STATE(172),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(172),
    [sym_pointer_assignment_expression] = STATE(172),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(173),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [sym__block_label] = STATE(175),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(341),
    [sym__newline] = ACTIONS(341),
  },
  [106] = {
    [sym__end_of_statement] = STATE(176),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [107] = {
    [sym__end_of_statement] = STATE(176),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [108] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(177),
    [sym_statement_label] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [sym_subroutine_call] = STATE(179),
    [sym_keyword_statement] = STATE(179),
    [sym_do_loop_statement] = STATE(179),
    [sym_if_statement] = STATE(179),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(179),
    [sym_pointer_assignment_expression] = STATE(179),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(180),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym__end_of_statement] = STATE(182),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [112] = {
    [sym__end_of_statement] = STATE(184),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(347),
    [sym__newline] = ACTIONS(347),
  },
  [113] = {
    [sym__end_of_statement] = STATE(184),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(347),
    [sym__newline] = ACTIONS(347),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(250),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym_number_literal] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [sym__expression] = STATE(187),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_keyword_argument] = STATE(188),
    [sym_array_slice] = STATE(188),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(353),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_EQ_GT] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(355),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(355),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(355),
    [anon_sym_LT_EQ] = ACTIONS(357),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(355),
    [anon_sym_GT_EQ] = ACTIONS(357),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(357),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(355),
    [anon_sym_SLASH_EQ] = ACTIONS(357),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(355),
    [anon_sym_SLASH_SLASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_STAR_STAR] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(355),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_EQ_GT] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_LT_EQ] = ACTIONS(361),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_GT_EQ] = ACTIONS(361),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_EQ_EQ] = ACTIONS(361),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_SLASH_EQ] = ACTIONS(361),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_SLASH_SLASH] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_STAR_STAR] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [sym__expression] = STATE(189),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym__expression] = STATE(190),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [sym__expression] = STATE(191),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [sym__expression] = STATE(192),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [sym__expression] = STATE(193),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__expression] = STATE(194),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym__expression] = STATE(195),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym__expression] = STATE(196),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(197),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__end_of_statement] = STATE(198),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [130] = {
    [sym__expression] = STATE(199),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(365),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_EQ_GT] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_GT_EQ] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_SLASH_EQ] = ACTIONS(367),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_SLASH_SLASH] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(367),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(367),
    [sym__newline] = ACTIONS(367),
  },
  [133] = {
    [sym__expression] = STATE(201),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__expression] = STATE(202),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym__expression] = STATE(204),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(369),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [sym_argument_list] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [aux_sym_argument_list_repeat1] = STATE(218),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [aux_sym_argument_list_repeat1] = STATE(218),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(407),
    [sym__newline] = ACTIONS(407),
  },
  [140] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(409),
    [sym__newline] = ACTIONS(409),
  },
  [141] = {
    [anon_sym_EQ] = ACTIONS(411),
    [anon_sym_EQ_GT] = ACTIONS(413),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_LT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_STAR_STAR] = ACTIONS(413),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_EQ_GT] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_EQ_GT] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_EQ_GT] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_EQ_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(437),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [sym__end_of_statement] = STATE(219),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(441),
    [sym_comment] = ACTIONS(14),
  },
  [152] = {
    [sym__end_of_statement] = STATE(219),
    [sym_identifier] = ACTIONS(443),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [153] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(367),
    [sym__newline] = ACTIONS(367),
  },
  [154] = {
    [aux_sym_argument_list_repeat1] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
    [sym_comment] = ACTIONS(34),
  },
  [155] = {
    [aux_sym_argument_list_repeat1] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [156] = {
    [sym_number_literal] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
    [sym_comment] = ACTIONS(14),
  },
  [157] = {
    [anon_sym_PERCENT] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_SLASH_SLASH] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_STAR_STAR] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(363),
    [sym__newline] = ACTIONS(363),
  },
  [158] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_STAR_STAR] = ACTIONS(415),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(415),
    [sym__newline] = ACTIONS(415),
  },
  [159] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(421),
    [sym__newline] = ACTIONS(421),
  },
  [160] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(421),
    [sym__newline] = ACTIONS(421),
  },
  [161] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(421),
    [sym__newline] = ACTIONS(421),
  },
  [162] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_LT] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_LT_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_GT_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_SLASH_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(427),
    [sym__newline] = ACTIONS(427),
  },
  [163] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_GT_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_EQ_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_SLASH_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(433),
    [sym__newline] = ACTIONS(433),
  },
  [164] = {
    [anon_sym_PERCENT] = ACTIONS(186),
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
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [165] = {
    [anon_sym_PERCENT] = ACTIONS(186),
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
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [166] = {
    [anon_sym_PERCENT] = ACTIONS(186),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [167] = {
    [sym__expression] = STATE(224),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym__expression] = STATE(225),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(461),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(475),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [sym__block_label] = STATE(236),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(477),
    [sym__newline] = ACTIONS(477),
  },
  [171] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(177),
    [sym_statement_label] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [sym__end_of_statement] = STATE(238),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [173] = {
    [sym__end_of_statement] = STATE(238),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [174] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(481),
    [sym__newline] = ACTIONS(481),
  },
  [175] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(477),
    [sym__newline] = ACTIONS(477),
  },
  [176] = {
    [sym_statement_label] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [sym_block_label_start_expression] = ACTIONS(270),
    [sym_number_literal] = ACTIONS(270),
    [sym__double_quoted_string] = ACTIONS(270),
    [sym__single_quoted_string] = ACTIONS(270),
    [sym_boolean_literal] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(177),
    [sym_statement_label] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [sym_block_label_start_expression] = ACTIONS(305),
    [sym_number_literal] = ACTIONS(308),
    [sym__double_quoted_string] = ACTIONS(311),
    [sym__single_quoted_string] = ACTIONS(311),
    [sym_boolean_literal] = ACTIONS(308),
    [sym_identifier] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [sym_statement_label] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(359),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym_block_label_start_expression] = ACTIONS(363),
    [sym_number_literal] = ACTIONS(363),
    [sym__double_quoted_string] = ACTIONS(363),
    [sym__single_quoted_string] = ACTIONS(363),
    [sym_boolean_literal] = ACTIONS(363),
    [sym_identifier] = ACTIONS(363),
    [sym_comment] = ACTIONS(34),
  },
  [179] = {
    [sym__end_of_statement] = STATE(239),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(347),
    [sym__newline] = ACTIONS(347),
  },
  [180] = {
    [sym__end_of_statement] = STATE(239),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(347),
    [sym__newline] = ACTIONS(347),
  },
  [181] = {
    [sym_statement_label] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_block_label_start_expression] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(246),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(248),
    [aux_sym__block_if_statement_repeat1] = STATE(249),
    [sym_statement_label] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [184] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(494),
    [sym__newline] = ACTIONS(494),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(14),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(498),
    [anon_sym_EQ_GT] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_SLASH_SLASH] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_STAR_STAR] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [aux_sym_argument_list_repeat1] = STATE(252),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [aux_sym_argument_list_repeat1] = STATE(252),
    [anon_sym_RPAREN] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_LT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_STAR_STAR] = ACTIONS(413),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_EQ_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(437),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(253),
    [sym_statement_label] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(232),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [sym__end_of_statement] = STATE(255),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [sym__expression] = STATE(258),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(514),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [sym__expression] = STATE(260),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_EQ] = ACTIONS(516),
    [anon_sym_EQ_GT] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_GT_EQ] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_EQ_EQ] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_SLASH_EQ] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_SLASH_SLASH] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(516),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_STAR_STAR] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(516),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [207] = {
    [sym__expression] = STATE(261),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [sym__expression] = STATE(262),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [sym__expression] = STATE(263),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [sym__expression] = STATE(264),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [sym__expression] = STATE(265),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [sym__expression] = STATE(266),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [sym__expression] = STATE(267),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [sym__expression] = STATE(268),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [sym__expression] = STATE(269),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [sym__expression] = STATE(270),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_keyword_argument] = STATE(271),
    [sym_array_slice] = STATE(271),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [sym__expression] = STATE(272),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(514),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [aux_sym_argument_list_repeat1] = STATE(274),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(520),
    [sym_comment] = ACTIONS(14),
  },
  [220] = {
    [sym__end_of_statement] = STATE(275),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
  },
  [221] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [222] = {
    [aux_sym_argument_list_repeat1] = STATE(274),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [223] = {
    [anon_sym_RPAREN] = ACTIONS(524),
    [sym_comment] = ACTIONS(14),
  },
  [224] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(248),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__expression] = STATE(278),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [sym__expression] = STATE(279),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym__expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__expression] = STATE(281),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym__expression] = STATE(282),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [sym__expression] = STATE(283),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [232] = {
    [sym__expression] = STATE(284),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [sym__expression] = STATE(285),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [sym__expression] = STATE(286),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [sym__expression] = STATE(289),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(530),
    [sym__newline] = ACTIONS(530),
  },
  [237] = {
    [sym__block_label] = STATE(290),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(530),
    [sym__newline] = ACTIONS(530),
  },
  [238] = {
    [sym_statement_label] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [sym_block_label_start_expression] = ACTIONS(325),
    [sym_number_literal] = ACTIONS(325),
    [sym__double_quoted_string] = ACTIONS(325),
    [sym__single_quoted_string] = ACTIONS(325),
    [sym_boolean_literal] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(532),
    [sym__newline] = ACTIONS(532),
  },
  [240] = {
    [sym_subroutine_call] = STATE(291),
    [sym_keyword_statement] = STATE(291),
    [sym_do_loop_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(291),
    [sym_pointer_assignment_expression] = STATE(291),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(292),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [sym__block_label] = STATE(293),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [242] = {
    [sym_parenthesized_expression] = STATE(294),
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(14),
  },
  [243] = {
    [sym__end_of_statement] = STATE(296),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [244] = {
    [sym__end_of_statement] = STATE(297),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [245] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(540),
    [sym_comment] = ACTIONS(14),
  },
  [246] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(542),
    [sym_comment] = ACTIONS(14),
  },
  [247] = {
    [sym__end_of_statement] = STATE(297),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [248] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(299),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(300),
    [aux_sym__block_if_statement_repeat1] = STATE(301),
    [sym_statement_label] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(299),
    [aux_sym__block_if_statement_repeat1] = STATE(302),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(542),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(546),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [sym_comment] = ACTIONS(14),
  },
  [250] = {
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(548),
    [anon_sym_EQ_GT] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_LT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT_EQ] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_GT_EQ] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_EQ_EQ] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_SLASH] = ACTIONS(550),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym_STAR] = ACTIONS(548),
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_STAR_STAR] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(554),
    [anon_sym_EQ_GT] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_EQ_EQ] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_SLASH_SLASH] = ACTIONS(556),
    [anon_sym_PLUS] = ACTIONS(554),
    [anon_sym_DASH] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(554),
    [anon_sym_SLASH] = ACTIONS(554),
    [anon_sym_STAR_STAR] = ACTIONS(556),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [aux_sym_argument_list_repeat1] = STATE(274),
    [anon_sym_RPAREN] = ACTIONS(558),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [253] = {
    [sym_subroutine_call] = STATE(106),
    [sym_keyword_statement] = STATE(106),
    [sym_do_loop_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(106),
    [sym_pointer_assignment_expression] = STATE(106),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(107),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(177),
    [sym_statement_label] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(361),
    [sym_comment] = ACTIONS(14),
  },
  [255] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(299),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(305),
    [aux_sym__block_if_statement_repeat1] = STATE(301),
    [sym_statement_label] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [sym__expression] = STATE(306),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [sym__expression] = STATE(307),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [258] = {
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(562),
    [sym_comment] = ACTIONS(34),
  },
  [259] = {
    [sym__expression] = STATE(317),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(586),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(586),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_LT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_STAR_STAR] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [263] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [sym_comment] = ACTIONS(34),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_EQ_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [sym_comment] = ACTIONS(34),
  },
  [267] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(588),
    [anon_sym_COLON] = ACTIONS(401),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_COMMA] = ACTIONS(590),
    [sym_comment] = ACTIONS(14),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(377),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(592),
    [sym_comment] = ACTIONS(34),
  },
  [273] = {
    [anon_sym_EQ] = ACTIONS(594),
    [anon_sym_EQ_GT] = ACTIONS(594),
    [anon_sym_PERCENT] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_GT] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT_EQ] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_GT_EQ] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_EQ_EQ] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_SLASH_EQ] = ACTIONS(594),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_SLASH_SLASH] = ACTIONS(594),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(594),
    [anon_sym_SLASH] = ACTIONS(594),
    [anon_sym_STAR_STAR] = ACTIONS(594),
    [anon_sym_COMMA] = ACTIONS(594),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(594),
    [sym__newline] = ACTIONS(594),
  },
  [274] = {
    [aux_sym_argument_list_repeat1] = STATE(274),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_COMMA] = ACTIONS(596),
    [sym_comment] = ACTIONS(14),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(599),
    [sym_comment] = ACTIONS(14),
  },
  [276] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(594),
    [sym__newline] = ACTIONS(594),
  },
  [277] = {
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_LT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_GT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_LT_EQ] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_GT_EQ] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_EQ_EQ] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_SLASH_EQ] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(552),
    [anon_sym_SLASH_SLASH] = ACTIONS(552),
    [anon_sym_PLUS] = ACTIONS(552),
    [anon_sym_DASH] = ACTIONS(552),
    [anon_sym_STAR] = ACTIONS(552),
    [anon_sym_SLASH] = ACTIONS(552),
    [anon_sym_STAR_STAR] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(552),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(552),
    [sym__newline] = ACTIONS(552),
  },
  [278] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_LT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_STAR_STAR] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(411),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(423),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_EQ_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(429),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [285] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
    [anon_sym_PERCENT] = ACTIONS(453),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [sym__expression] = STATE(319),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [sym__expression] = STATE(320),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(619),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(621),
    [sym__newline] = ACTIONS(621),
  },
  [290] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [291] = {
    [sym__end_of_statement] = STATE(331),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [292] = {
    [sym__end_of_statement] = STATE(331),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [293] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(625),
    [sym__newline] = ACTIONS(625),
  },
  [294] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(14),
  },
  [295] = {
    [sym_statement_label] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_block_label_start_expression] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [sym_subroutine_call] = STATE(334),
    [sym_keyword_statement] = STATE(334),
    [sym_do_loop_statement] = STATE(334),
    [sym_if_statement] = STATE(334),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(334),
    [sym_pointer_assignment_expression] = STATE(334),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(335),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(336),
    [sym_statement_label] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(631),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [297] = {
    [sym_statement_label] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [sym_block_label_start_expression] = ACTIONS(270),
    [sym_number_literal] = ACTIONS(270),
    [sym__double_quoted_string] = ACTIONS(270),
    [sym__single_quoted_string] = ACTIONS(270),
    [sym_boolean_literal] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [sym__block_label] = STATE(337),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(625),
    [sym__newline] = ACTIONS(625),
  },
  [299] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(633),
    [sym_comment] = ACTIONS(14),
  },
  [300] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(300),
    [sym_statement_label] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [sym_block_label_start_expression] = ACTIONS(305),
    [sym_number_literal] = ACTIONS(308),
    [sym__double_quoted_string] = ACTIONS(311),
    [sym__single_quoted_string] = ACTIONS(311),
    [sym_boolean_literal] = ACTIONS(308),
    [sym_identifier] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [301] = {
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(339),
    [aux_sym__block_if_statement_repeat1] = STATE(302),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(546),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [sym_comment] = ACTIONS(14),
  },
  [302] = {
    [sym_elseif_clause] = STATE(245),
    [aux_sym__block_if_statement_repeat1] = STATE(302),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [sym_comment] = ACTIONS(14),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_EQ] = ACTIONS(645),
    [anon_sym_EQ_GT] = ACTIONS(647),
    [anon_sym_PERCENT] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_LT_EQ] = ACTIONS(647),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_GT_EQ] = ACTIONS(647),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_EQ_EQ] = ACTIONS(647),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_SLASH_EQ] = ACTIONS(647),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_SLASH_SLASH] = ACTIONS(647),
    [anon_sym_PLUS] = ACTIONS(645),
    [anon_sym_DASH] = ACTIONS(645),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(645),
    [anon_sym_STAR_STAR] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [sym_comment] = ACTIONS(34),
  },
  [304] = {
    [sym__block_label] = STATE(340),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [305] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(339),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(300),
    [aux_sym__block_if_statement_repeat1] = STATE(341),
    [sym_statement_label] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(649),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_EQ] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(248),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [sym__expression] = STATE(342),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [sym__expression] = STATE(343),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [sym__expression] = STATE(344),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [311] = {
    [sym__expression] = STATE(345),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [sym__expression] = STATE(346),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [313] = {
    [sym__expression] = STATE(347),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [sym__expression] = STATE(348),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [sym__expression] = STATE(349),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [316] = {
    [sym__expression] = STATE(350),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(651),
    [sym_comment] = ACTIONS(34),
  },
  [318] = {
    [sym__expression] = STATE(351),
    [sym_parenthesized_expression] = STATE(25),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(246),
    [sym__newline] = ACTIONS(246),
  },
  [320] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_SLASH_EQ] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(252),
    [sym__newline] = ACTIONS(252),
  },
  [321] = {
    [sym__expression] = STATE(352),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [322] = {
    [sym__expression] = STATE(353),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [sym__expression] = STATE(354),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [324] = {
    [sym__expression] = STATE(355),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [sym__expression] = STATE(356),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [326] = {
    [sym__expression] = STATE(357),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [sym__expression] = STATE(358),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [328] = {
    [sym__expression] = STATE(359),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [sym__expression] = STATE(360),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [sym__expression] = STATE(361),
    [sym_parenthesized_expression] = STATE(46),
    [sym_derived_type_member_expression] = STATE(46),
    [sym_logical_expression] = STATE(46),
    [sym_relational_expression] = STATE(46),
    [sym_concatenation_expression] = STATE(46),
    [sym_math_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_complex_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(90),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(90),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [sym_statement_label] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [sym_block_label_start_expression] = ACTIONS(325),
    [sym_number_literal] = ACTIONS(325),
    [sym__double_quoted_string] = ACTIONS(325),
    [sym__single_quoted_string] = ACTIONS(325),
    [sym_boolean_literal] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [sym__end_of_statement] = STATE(362),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [333] = {
    [sym_subroutine_call] = STATE(363),
    [sym_keyword_statement] = STATE(363),
    [sym_do_loop_statement] = STATE(363),
    [sym_if_statement] = STATE(363),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(363),
    [sym_pointer_assignment_expression] = STATE(363),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(364),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [sym__end_of_statement] = STATE(365),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [335] = {
    [sym__end_of_statement] = STATE(365),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [336] = {
    [sym_subroutine_call] = STATE(334),
    [sym_keyword_statement] = STATE(334),
    [sym_do_loop_statement] = STATE(334),
    [sym_if_statement] = STATE(334),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(334),
    [sym_pointer_assignment_expression] = STATE(334),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(335),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(366),
    [sym_statement_label] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(653),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(655),
    [sym__newline] = ACTIONS(655),
  },
  [338] = {
    [sym__block_label] = STATE(367),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(655),
    [sym__newline] = ACTIONS(655),
  },
  [339] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(657),
    [sym_comment] = ACTIONS(14),
  },
  [340] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(659),
    [sym__newline] = ACTIONS(659),
  },
  [341] = {
    [sym_elseif_clause] = STATE(245),
    [sym_else_clause] = STATE(369),
    [aux_sym__block_if_statement_repeat1] = STATE(302),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(546),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [sym_comment] = ACTIONS(14),
  },
  [342] = {
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_LT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_GT_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_EQ] = ACTIONS(413),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(411),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_STAR_STAR] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(411),
    [sym_comment] = ACTIONS(34),
  },
  [343] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [344] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym_comment] = ACTIONS(34),
  },
  [346] = {
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(423),
    [sym_comment] = ACTIONS(34),
  },
  [347] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_EQ_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_EQ] = ACTIONS(431),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(429),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(429),
    [sym_comment] = ACTIONS(34),
  },
  [348] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(437),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_PERCENT] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_STAR_STAR] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(661),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_STAR_STAR] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(415),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(415),
    [sym__newline] = ACTIONS(415),
  },
  [353] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(421),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(421),
    [sym__newline] = ACTIONS(421),
  },
  [354] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(421),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(421),
    [sym__newline] = ACTIONS(421),
  },
  [355] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(421),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(421),
    [sym__newline] = ACTIONS(421),
  },
  [356] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_LT] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_LT_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_GT_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_SLASH_EQ] = ACTIONS(427),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(427),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(427),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(427),
    [sym__newline] = ACTIONS(427),
  },
  [357] = {
    [anon_sym_PERCENT] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_GT_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_EQ_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_SLASH_EQ] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(433),
    [sym__newline] = ACTIONS(433),
  },
  [358] = {
    [anon_sym_PERCENT] = ACTIONS(601),
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
    [anon_sym_STAR] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(439),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [359] = {
    [anon_sym_PERCENT] = ACTIONS(601),
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
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(439),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(439),
    [sym__newline] = ACTIONS(439),
  },
  [360] = {
    [anon_sym_PERCENT] = ACTIONS(601),
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
  [361] = {
    [anon_sym_PERCENT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(663),
    [sym__newline] = ACTIONS(663),
  },
  [362] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(370),
    [sym_statement_label] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [363] = {
    [sym__end_of_statement] = STATE(371),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [364] = {
    [sym__end_of_statement] = STATE(371),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(536),
    [sym__newline] = ACTIONS(536),
  },
  [365] = {
    [sym_statement_label] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [sym_block_label_start_expression] = ACTIONS(270),
    [sym_number_literal] = ACTIONS(270),
    [sym__double_quoted_string] = ACTIONS(270),
    [sym__single_quoted_string] = ACTIONS(270),
    [sym_boolean_literal] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [366] = {
    [sym_subroutine_call] = STATE(334),
    [sym_keyword_statement] = STATE(334),
    [sym_do_loop_statement] = STATE(334),
    [sym_if_statement] = STATE(334),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(334),
    [sym_pointer_assignment_expression] = STATE(334),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(335),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(366),
    [sym_statement_label] = ACTIONS(667),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [sym_block_label_start_expression] = ACTIONS(305),
    [sym_number_literal] = ACTIONS(308),
    [sym__double_quoted_string] = ACTIONS(311),
    [sym__single_quoted_string] = ACTIONS(311),
    [sym_boolean_literal] = ACTIONS(308),
    [sym_identifier] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [367] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [368] = {
    [sym__block_label] = STATE(372),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [369] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(672),
    [sym_comment] = ACTIONS(14),
  },
  [370] = {
    [sym_subroutine_call] = STATE(244),
    [sym_keyword_statement] = STATE(244),
    [sym_do_loop_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__inline_if_statement] = STATE(29),
    [sym__block_if_statement] = STATE(29),
    [sym__expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(25),
    [sym_assignment_expression] = STATE(244),
    [sym_pointer_assignment_expression] = STATE(244),
    [sym_derived_type_member_expression] = STATE(25),
    [sym_logical_expression] = STATE(25),
    [sym_relational_expression] = STATE(25),
    [sym_concatenation_expression] = STATE(25),
    [sym_math_expression] = STATE(25),
    [sym_call_expression] = STATE(247),
    [sym_complex_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [aux_sym_program_block_repeat1] = STATE(300),
    [sym_statement_label] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(674),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(674),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_block_label_start_expression] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(66),
    [sym__double_quoted_string] = ACTIONS(68),
    [sym__single_quoted_string] = ACTIONS(68),
    [sym_boolean_literal] = ACTIONS(66),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [371] = {
    [sym_statement_label] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [sym_block_label_start_expression] = ACTIONS(325),
    [sym_number_literal] = ACTIONS(325),
    [sym__double_quoted_string] = ACTIONS(325),
    [sym__single_quoted_string] = ACTIONS(325),
    [sym_boolean_literal] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(34),
  },
  [372] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(676),
    [sym__newline] = ACTIONS(676),
  },
  [373] = {
    [sym__block_label] = STATE(374),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(676),
    [sym__newline] = ACTIONS(676),
  },
  [374] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(678),
    [sym__newline] = ACTIONS(678),
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
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [272] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [275] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [278] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [281] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [284] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [287] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [290] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [296] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(21),
  [299] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(22),
  [302] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(23),
  [305] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(24),
  [308] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(25),
  [311] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(26),
  [314] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(27),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(220),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(223),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 1),
  [483] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(104),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(295),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(311),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [596] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(216),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(322),
  [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(323),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(326),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(328),
  [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(330),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [635] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(240),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [640] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(242),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [667] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(333),
  [670] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [678] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
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
