#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 488
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 1
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_COMMA = 4,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH = 5,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 6,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 7,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 8,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 10,
  aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 12,
  anon_sym_STAR = 13,
  aux_sym_SLASH_BSLASHd_PLUS_SLASH = 14,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 16,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 17,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 22,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 26,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_EQ = 30,
  anon_sym_EQ_GT = 31,
  anon_sym_PERCENT = 32,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 33,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 34,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 35,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 36,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 37,
  anon_sym_LT = 38,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 39,
  anon_sym_GT = 40,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 41,
  anon_sym_LT_EQ = 42,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 43,
  anon_sym_GT_EQ = 44,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 45,
  anon_sym_EQ_EQ = 46,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 47,
  anon_sym_SLASH_EQ = 48,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 49,
  anon_sym_SLASH_SLASH = 50,
  anon_sym_PLUS = 51,
  anon_sym_DASH = 52,
  anon_sym_SLASH = 53,
  anon_sym_STAR_STAR = 54,
  anon_sym_COLON = 55,
  sym_block_label_start_expression = 56,
  sym_number_literal = 57,
  sym__double_quoted_string = 58,
  sym__single_quoted_string = 59,
  sym_boolean_literal = 60,
  sym_identifier = 61,
  sym_comment = 62,
  sym__semicolon = 63,
  sym__newline = 64,
  sym_translation_unit = 65,
  sym_program_block = 66,
  sym_variable_declaration = 67,
  sym_intrinsic_type = 68,
  sym_statement_label = 69,
  sym_subroutine_call = 70,
  sym_keyword_statement = 71,
  sym_do_loop_statement = 72,
  sym_if_statement = 73,
  sym__inline_if_statement = 74,
  sym__block_if_statement = 75,
  sym_elseif_clause = 76,
  sym_else_clause = 77,
  sym__expression = 78,
  sym_parenthesized_expression = 79,
  sym_assignment_expression = 80,
  sym_pointer_assignment_expression = 81,
  sym_derived_type_member_expression = 82,
  sym_logical_expression = 83,
  sym_relational_expression = 84,
  sym_concatenation_expression = 85,
  sym_math_expression = 86,
  sym_call_expression = 87,
  sym_argument_list = 88,
  sym_keyword_argument = 89,
  sym_array_slice = 90,
  sym_assumed_size = 91,
  sym_assumed_shape = 92,
  sym__block_label = 93,
  sym_loop_control_expression = 94,
  sym_complex_literal = 95,
  sym_string_literal = 96,
  sym__end_of_statement = 97,
  aux_sym_translation_unit_repeat1 = 98,
  aux_sym_program_block_repeat1 = 99,
  aux_sym_program_block_repeat2 = 100,
  aux_sym_variable_declaration_repeat1 = 101,
  aux_sym__block_if_statement_repeat1 = 102,
  aux_sym_argument_list_repeat1 = 103,
  alias_sym_block_label = 104,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COMMA] = ",",
  [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[bB][yY][tT][eE]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[iI][nN][tT][eE][gG][eE][rR]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[rR][eE][aA][lL]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[dD][oO][uU][bB][lL][eE][ 	]*[pP][rR][eE][cC][iI][sS][iI][oO][nN]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = "/[cC][oO][mM][pP][lL][eE][xX]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = "/[dD][oO][uU][bB][lL][eE][ 	]*[cC][oO][mM][pP][lL][eE][xX]/",
  [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[lL][oO][gG][iI][cC][aA][lL]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[cC][hH][aA][rR][aA][cC][tT][eE][rR]/",
  [anon_sym_STAR] = "*",
  [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = "/\\d+/",
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
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
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
  [sym_variable_declaration] = "variable_declaration",
  [sym_intrinsic_type] = "intrinsic_type",
  [sym_statement_label] = "statement_label",
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
  [sym_assumed_size] = "assumed_size",
  [sym_assumed_shape] = "assumed_shape",
  [sym__block_label] = "_block_label",
  [sym_loop_control_expression] = "loop_control_expression",
  [sym_complex_literal] = "complex_literal",
  [sym_string_literal] = "string_literal",
  [sym__end_of_statement] = "_end_of_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym_program_block_repeat2] = "program_block_repeat2",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = {
    .visible = false,
    .named = false,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_label] = {
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
  [sym_assumed_size] = {
    .visible = true,
    .named = true,
  },
  [sym_assumed_shape] = {
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
  [aux_sym_program_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_repeat1] = {
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
        ADVANCE(52);
      if (lookahead == '<')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(65);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(133);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(151);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(159);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(166);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
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
      if (lookahead == ':')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(66);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
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
        ADVANCE(64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
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
        ADVANCE(64);
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
        ADVANCE(64);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(99);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(99);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(100);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 146:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(191);
      END_STATE();
    case 192:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 200:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(200);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(202);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(193);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(204);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(281);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(309);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 218:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 219:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 220:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 221:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 222:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 223:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 225:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 226:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 227:
      if (lookahead == '\"')
        ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 230:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 231:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 232:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(239);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(244);
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
    case 233:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 234:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 235:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 236:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 237:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 239:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 240:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 241:
      if (lookahead == '\'')
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 244:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 245:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 247:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(250);
      END_STATE();
    case 259:
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
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
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
    case 260:
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
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
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
    case 261:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(204);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(281);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(309);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_block_label_start_expression);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(285);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(294);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(310);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(99);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(266);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(349);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(358);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(359);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(367);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(191);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 373:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(374);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '*')
        ADVANCE(375);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(377);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 376:
      if (lookahead == ':')
        ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(374);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '*')
        ADVANCE(375);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(377);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(380);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(386);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(390);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(399);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(400);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(406);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(399);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(400);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(406);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(409);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(412);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(412);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 413:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 414:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(414);
      END_STATE();
    case 415:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 417:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 419:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 423:
      if (lookahead == '\n')
        SKIP(423);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == ')')
        ADVANCE(483);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ':')
        ADVANCE(489);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(491);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(434);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(444);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(433);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(440);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(449);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 458:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 463:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(466);
      END_STATE();
    case 464:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 466:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 468:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(469);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(471);
      END_STATE();
    case 469:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 471:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 473:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(478);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 493:
      if (lookahead == '\n')
        SKIP(423);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == ')')
        ADVANCE(483);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ':')
        ADVANCE(489);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(491);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(493);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(494);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(500);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 494:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 495:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(474);
      END_STATE();
    case 496:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(459);
      END_STATE();
    case 497:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(466);
      END_STATE();
    case 498:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(465);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(462);
      END_STATE();
    case 500:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(501);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(471);
      END_STATE();
    case 501:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(470);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(462);
      END_STATE();
    case 503:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(504);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 504:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(478);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(462);
      END_STATE();
    case 506:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(480);
      END_STATE();
    case 507:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ';')
        ADVANCE(509);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(491);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(510);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ';')
        ADVANCE(509);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(491);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(510);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(494);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(500);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(511);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(512);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(511);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(512);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(513);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(514);
      if (lookahead == '*')
        ADVANCE(375);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(515);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(517);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(513);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(514);
      if (lookahead == '*')
        ADVANCE(375);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(515);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(517);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 518:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '=')
        ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(520);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(522);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(520);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(522);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(523);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(524);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(525);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 525:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(525);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(530);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(406);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(536);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(530);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(406);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(532);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 537:
      if (lookahead == '\n')
        SKIP(537);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == ')')
        ADVANCE(483);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ':')
        ADVANCE(489);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(458);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(479);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        SKIP(537);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == ')')
        ADVANCE(483);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ':')
        ADVANCE(489);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(494);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(500);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 540:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ';')
        ADVANCE(509);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 541:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(484);
      if (lookahead == '+')
        ADVANCE(485);
      if (lookahead == ',')
        ADVANCE(486);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead == ';')
        ADVANCE(509);
      if (lookahead == '<')
        ADVANCE(490);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(494);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(500);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(507);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(543);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(544);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(166);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(542);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 543:
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
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(546);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(547);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(548);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(546);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(547);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(548);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(549);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(555);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(556);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 556:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(556);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 561:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(561);
      END_STATE();
    case 562:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(563);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(566);
      END_STATE();
    case 563:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 566:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(556);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(567);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(568);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(569);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(567);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(568);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 192},
  [2] = {.lex_state = 200},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 192},
  [5] = {.lex_state = 192},
  [6] = {.lex_state = 202},
  [7] = {.lex_state = 192},
  [8] = {.lex_state = 202},
  [9] = {.lex_state = 204},
  [10] = {.lex_state = 204},
  [11] = {.lex_state = 204},
  [12] = {.lex_state = 202},
  [13] = {.lex_state = 374},
  [14] = {.lex_state = 399},
  [15] = {.lex_state = 200},
  [16] = {.lex_state = 202},
  [17] = {.lex_state = 200},
  [18] = {.lex_state = 200},
  [19] = {.lex_state = 410},
  [20] = {.lex_state = 413},
  [21] = {.lex_state = 200},
  [22] = {.lex_state = 374},
  [23] = {.lex_state = 374},
  [24] = {.lex_state = 374},
  [25] = {.lex_state = 414},
  [26] = {.lex_state = 423},
  [27] = {.lex_state = 423},
  [28] = {.lex_state = 423},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 374},
  [31] = {.lex_state = 399},
  [32] = {.lex_state = 202},
  [33] = {.lex_state = 202},
  [34] = {.lex_state = 423},
  [35] = {.lex_state = 508},
  [36] = {.lex_state = 204},
  [37] = {.lex_state = 511},
  [38] = {.lex_state = 202},
  [39] = {.lex_state = 204},
  [40] = {.lex_state = 511},
  [41] = {.lex_state = 413},
  [42] = {.lex_state = 192},
  [43] = {.lex_state = 192},
  [44] = {.lex_state = 200},
  [45] = {.lex_state = 513},
  [46] = {.lex_state = 374},
  [47] = {.lex_state = 200},
  [48] = {.lex_state = 202},
  [49] = {.lex_state = 202},
  [50] = {.lex_state = 202},
  [51] = {.lex_state = 374},
  [52] = {.lex_state = 374},
  [53] = {.lex_state = 374},
  [54] = {.lex_state = 508},
  [55] = {.lex_state = 508},
  [56] = {.lex_state = 508},
  [57] = {.lex_state = 508},
  [58] = {.lex_state = 518},
  [59] = {.lex_state = 520},
  [60] = {.lex_state = 202},
  [61] = {.lex_state = 520},
  [62] = {.lex_state = 374},
  [63] = {.lex_state = 530},
  [64] = {.lex_state = 374},
  [65] = {.lex_state = 374},
  [66] = {.lex_state = 423},
  [67] = {.lex_state = 423},
  [68] = {.lex_state = 423},
  [69] = {.lex_state = 423},
  [70] = {.lex_state = 423},
  [71] = {.lex_state = 423},
  [72] = {.lex_state = 413},
  [73] = {.lex_state = 200},
  [74] = {.lex_state = 513},
  [75] = {.lex_state = 508},
  [76] = {.lex_state = 374},
  [77] = {.lex_state = 374},
  [78] = {.lex_state = 374},
  [79] = {.lex_state = 374},
  [80] = {.lex_state = 537},
  [81] = {.lex_state = 537},
  [82] = {.lex_state = 540},
  [83] = {.lex_state = 537},
  [84] = {.lex_state = 413},
  [85] = {.lex_state = 540},
  [86] = {.lex_state = 202},
  [87] = {.lex_state = 508},
  [88] = {.lex_state = 511},
  [89] = {.lex_state = 511},
  [90] = {.lex_state = 374},
  [91] = {.lex_state = 374},
  [92] = {.lex_state = 374},
  [93] = {.lex_state = 374},
  [94] = {.lex_state = 374},
  [95] = {.lex_state = 374},
  [96] = {.lex_state = 374},
  [97] = {.lex_state = 374},
  [98] = {.lex_state = 374},
  [99] = {.lex_state = 374},
  [100] = {.lex_state = 374},
  [101] = {.lex_state = 204},
  [102] = {.lex_state = 511},
  [103] = {.lex_state = 413},
  [104] = {.lex_state = 192},
  [105] = {.lex_state = 202},
  [106] = {.lex_state = 511},
  [107] = {.lex_state = 202},
  [108] = {.lex_state = 374},
  [109] = {.lex_state = 374},
  [110] = {.lex_state = 518},
  [111] = {.lex_state = 374},
  [112] = {.lex_state = 374},
  [113] = {.lex_state = 374},
  [114] = {.lex_state = 513},
  [115] = {.lex_state = 537},
  [116] = {.lex_state = 423},
  [117] = {.lex_state = 518},
  [118] = {.lex_state = 513},
  [119] = {.lex_state = 202},
  [120] = {.lex_state = 423},
  [121] = {.lex_state = 423},
  [122] = {.lex_state = 423},
  [123] = {.lex_state = 508},
  [124] = {.lex_state = 508},
  [125] = {.lex_state = 374},
  [126] = {.lex_state = 374},
  [127] = {.lex_state = 374},
  [128] = {.lex_state = 374},
  [129] = {.lex_state = 374},
  [130] = {.lex_state = 374},
  [131] = {.lex_state = 374},
  [132] = {.lex_state = 374},
  [133] = {.lex_state = 374},
  [134] = {.lex_state = 374},
  [135] = {.lex_state = 520},
  [136] = {.lex_state = 413},
  [137] = {.lex_state = 399},
  [138] = {.lex_state = 202},
  [139] = {.lex_state = 508},
  [140] = {.lex_state = 520},
  [141] = {.lex_state = 423},
  [142] = {.lex_state = 413},
  [143] = {.lex_state = 399},
  [144] = {.lex_state = 202},
  [145] = {.lex_state = 508},
  [146] = {.lex_state = 423},
  [147] = {.lex_state = 423},
  [148] = {.lex_state = 542},
  [149] = {.lex_state = 513},
  [150] = {.lex_state = 423},
  [151] = {.lex_state = 374},
  [152] = {.lex_state = 423},
  [153] = {.lex_state = 374},
  [154] = {.lex_state = 374},
  [155] = {.lex_state = 374},
  [156] = {.lex_state = 374},
  [157] = {.lex_state = 374},
  [158] = {.lex_state = 374},
  [159] = {.lex_state = 374},
  [160] = {.lex_state = 374},
  [161] = {.lex_state = 202},
  [162] = {.lex_state = 374},
  [163] = {.lex_state = 414},
  [164] = {.lex_state = 508},
  [165] = {.lex_state = 423},
  [166] = {.lex_state = 518},
  [167] = {.lex_state = 540},
  [168] = {.lex_state = 413},
  [169] = {.lex_state = 540},
  [170] = {.lex_state = 423},
  [171] = {.lex_state = 423},
  [172] = {.lex_state = 423},
  [173] = {.lex_state = 537},
  [174] = {.lex_state = 537},
  [175] = {.lex_state = 537},
  [176] = {.lex_state = 374},
  [177] = {.lex_state = 513},
  [178] = {.lex_state = 540},
  [179] = {.lex_state = 204},
  [180] = {.lex_state = 413},
  [181] = {.lex_state = 374},
  [182] = {.lex_state = 374},
  [183] = {.lex_state = 374},
  [184] = {.lex_state = 374},
  [185] = {.lex_state = 374},
  [186] = {.lex_state = 374},
  [187] = {.lex_state = 374},
  [188] = {.lex_state = 374},
  [189] = {.lex_state = 374},
  [190] = {.lex_state = 374},
  [191] = {.lex_state = 511},
  [192] = {.lex_state = 423},
  [193] = {.lex_state = 508},
  [194] = {.lex_state = 508},
  [195] = {.lex_state = 423},
  [196] = {.lex_state = 423},
  [197] = {.lex_state = 423},
  [198] = {.lex_state = 423},
  [199] = {.lex_state = 423},
  [200] = {.lex_state = 423},
  [201] = {.lex_state = 423},
  [202] = {.lex_state = 423},
  [203] = {.lex_state = 202},
  [204] = {.lex_state = 192},
  [205] = {.lex_state = 413},
  [206] = {.lex_state = 202},
  [207] = {.lex_state = 423},
  [208] = {.lex_state = 423},
  [209] = {.lex_state = 423},
  [210] = {.lex_state = 374},
  [211] = {.lex_state = 423},
  [212] = {.lex_state = 513},
  [213] = {.lex_state = 513},
  [214] = {.lex_state = 374},
  [215] = {.lex_state = 374},
  [216] = {.lex_state = 374},
  [217] = {.lex_state = 374},
  [218] = {.lex_state = 374},
  [219] = {.lex_state = 374},
  [220] = {.lex_state = 374},
  [221] = {.lex_state = 374},
  [222] = {.lex_state = 374},
  [223] = {.lex_state = 374},
  [224] = {.lex_state = 513},
  [225] = {.lex_state = 518},
  [226] = {.lex_state = 202},
  [227] = {.lex_state = 423},
  [228] = {.lex_state = 518},
  [229] = {.lex_state = 542},
  [230] = {.lex_state = 508},
  [231] = {.lex_state = 508},
  [232] = {.lex_state = 508},
  [233] = {.lex_state = 508},
  [234] = {.lex_state = 508},
  [235] = {.lex_state = 508},
  [236] = {.lex_state = 508},
  [237] = {.lex_state = 508},
  [238] = {.lex_state = 508},
  [239] = {.lex_state = 508},
  [240] = {.lex_state = 374},
  [241] = {.lex_state = 374},
  [242] = {.lex_state = 423},
  [243] = {.lex_state = 413},
  [244] = {.lex_state = 520},
  [245] = {.lex_state = 202},
  [246] = {.lex_state = 202},
  [247] = {.lex_state = 202},
  [248] = {.lex_state = 508},
  [249] = {.lex_state = 520},
  [250] = {.lex_state = 520},
  [251] = {.lex_state = 530},
  [252] = {.lex_state = 546},
  [253] = {.lex_state = 202},
  [254] = {.lex_state = 546},
  [255] = {.lex_state = 202},
  [256] = {.lex_state = 508},
  [257] = {.lex_state = 202},
  [258] = {.lex_state = 202},
  [259] = {.lex_state = 518},
  [260] = {.lex_state = 423},
  [261] = {.lex_state = 423},
  [262] = {.lex_state = 518},
  [263] = {.lex_state = 423},
  [264] = {.lex_state = 423},
  [265] = {.lex_state = 423},
  [266] = {.lex_state = 423},
  [267] = {.lex_state = 423},
  [268] = {.lex_state = 423},
  [269] = {.lex_state = 423},
  [270] = {.lex_state = 423},
  [271] = {.lex_state = 423},
  [272] = {.lex_state = 520},
  [273] = {.lex_state = 423},
  [274] = {.lex_state = 413},
  [275] = {.lex_state = 508},
  [276] = {.lex_state = 518},
  [277] = {.lex_state = 204},
  [278] = {.lex_state = 413},
  [279] = {.lex_state = 542},
  [280] = {.lex_state = 537},
  [281] = {.lex_state = 513},
  [282] = {.lex_state = 537},
  [283] = {.lex_state = 540},
  [284] = {.lex_state = 413},
  [285] = {.lex_state = 540},
  [286] = {.lex_state = 540},
  [287] = {.lex_state = 423},
  [288] = {.lex_state = 518},
  [289] = {.lex_state = 413},
  [290] = {.lex_state = 537},
  [291] = {.lex_state = 374},
  [292] = {.lex_state = 374},
  [293] = {.lex_state = 508},
  [294] = {.lex_state = 537},
  [295] = {.lex_state = 537},
  [296] = {.lex_state = 537},
  [297] = {.lex_state = 537},
  [298] = {.lex_state = 537},
  [299] = {.lex_state = 537},
  [300] = {.lex_state = 537},
  [301] = {.lex_state = 537},
  [302] = {.lex_state = 192},
  [303] = {.lex_state = 202},
  [304] = {.lex_state = 413},
  [305] = {.lex_state = 374},
  [306] = {.lex_state = 374},
  [307] = {.lex_state = 374},
  [308] = {.lex_state = 423},
  [309] = {.lex_state = 374},
  [310] = {.lex_state = 518},
  [311] = {.lex_state = 423},
  [312] = {.lex_state = 518},
  [313] = {.lex_state = 423},
  [314] = {.lex_state = 518},
  [315] = {.lex_state = 423},
  [316] = {.lex_state = 423},
  [317] = {.lex_state = 423},
  [318] = {.lex_state = 423},
  [319] = {.lex_state = 423},
  [320] = {.lex_state = 423},
  [321] = {.lex_state = 423},
  [322] = {.lex_state = 423},
  [323] = {.lex_state = 423},
  [324] = {.lex_state = 423},
  [325] = {.lex_state = 374},
  [326] = {.lex_state = 518},
  [327] = {.lex_state = 202},
  [328] = {.lex_state = 518},
  [329] = {.lex_state = 518},
  [330] = {.lex_state = 423},
  [331] = {.lex_state = 423},
  [332] = {.lex_state = 374},
  [333] = {.lex_state = 374},
  [334] = {.lex_state = 374},
  [335] = {.lex_state = 374},
  [336] = {.lex_state = 374},
  [337] = {.lex_state = 374},
  [338] = {.lex_state = 374},
  [339] = {.lex_state = 374},
  [340] = {.lex_state = 374},
  [341] = {.lex_state = 374},
  [342] = {.lex_state = 202},
  [343] = {.lex_state = 413},
  [344] = {.lex_state = 520},
  [345] = {.lex_state = 546},
  [346] = {.lex_state = 413},
  [347] = {.lex_state = 200},
  [348] = {.lex_state = 413},
  [349] = {.lex_state = 399},
  [350] = {.lex_state = 202},
  [351] = {.lex_state = 561},
  [352] = {.lex_state = 561},
  [353] = {.lex_state = 508},
  [354] = {.lex_state = 546},
  [355] = {.lex_state = 561},
  [356] = {.lex_state = 202},
  [357] = {.lex_state = 423},
  [358] = {.lex_state = 423},
  [359] = {.lex_state = 518},
  [360] = {.lex_state = 520},
  [361] = {.lex_state = 414},
  [362] = {.lex_state = 202},
  [363] = {.lex_state = 508},
  [364] = {.lex_state = 204},
  [365] = {.lex_state = 518},
  [366] = {.lex_state = 537},
  [367] = {.lex_state = 423},
  [368] = {.lex_state = 518},
  [369] = {.lex_state = 540},
  [370] = {.lex_state = 518},
  [371] = {.lex_state = 508},
  [372] = {.lex_state = 508},
  [373] = {.lex_state = 374},
  [374] = {.lex_state = 374},
  [375] = {.lex_state = 374},
  [376] = {.lex_state = 374},
  [377] = {.lex_state = 374},
  [378] = {.lex_state = 374},
  [379] = {.lex_state = 374},
  [380] = {.lex_state = 374},
  [381] = {.lex_state = 374},
  [382] = {.lex_state = 192},
  [383] = {.lex_state = 202},
  [384] = {.lex_state = 423},
  [385] = {.lex_state = 423},
  [386] = {.lex_state = 374},
  [387] = {.lex_state = 374},
  [388] = {.lex_state = 374},
  [389] = {.lex_state = 374},
  [390] = {.lex_state = 374},
  [391] = {.lex_state = 374},
  [392] = {.lex_state = 374},
  [393] = {.lex_state = 374},
  [394] = {.lex_state = 374},
  [395] = {.lex_state = 423},
  [396] = {.lex_state = 374},
  [397] = {.lex_state = 202},
  [398] = {.lex_state = 508},
  [399] = {.lex_state = 508},
  [400] = {.lex_state = 423},
  [401] = {.lex_state = 423},
  [402] = {.lex_state = 423},
  [403] = {.lex_state = 423},
  [404] = {.lex_state = 423},
  [405] = {.lex_state = 423},
  [406] = {.lex_state = 423},
  [407] = {.lex_state = 423},
  [408] = {.lex_state = 423},
  [409] = {.lex_state = 202},
  [410] = {.lex_state = 413},
  [411] = {.lex_state = 561},
  [412] = {.lex_state = 546},
  [413] = {.lex_state = 561},
  [414] = {.lex_state = 202},
  [415] = {.lex_state = 414},
  [416] = {.lex_state = 567},
  [417] = {.lex_state = 202},
  [418] = {.lex_state = 567},
  [419] = {.lex_state = 202},
  [420] = {.lex_state = 508},
  [421] = {.lex_state = 546},
  [422] = {.lex_state = 546},
  [423] = {.lex_state = 561},
  [424] = {.lex_state = 423},
  [425] = {.lex_state = 413},
  [426] = {.lex_state = 546},
  [427] = {.lex_state = 537},
  [428] = {.lex_state = 537},
  [429] = {.lex_state = 518},
  [430] = {.lex_state = 540},
  [431] = {.lex_state = 508},
  [432] = {.lex_state = 508},
  [433] = {.lex_state = 508},
  [434] = {.lex_state = 508},
  [435] = {.lex_state = 508},
  [436] = {.lex_state = 508},
  [437] = {.lex_state = 508},
  [438] = {.lex_state = 508},
  [439] = {.lex_state = 508},
  [440] = {.lex_state = 192},
  [441] = {.lex_state = 423},
  [442] = {.lex_state = 423},
  [443] = {.lex_state = 423},
  [444] = {.lex_state = 423},
  [445] = {.lex_state = 423},
  [446] = {.lex_state = 423},
  [447] = {.lex_state = 423},
  [448] = {.lex_state = 423},
  [449] = {.lex_state = 423},
  [450] = {.lex_state = 423},
  [451] = {.lex_state = 374},
  [452] = {.lex_state = 202},
  [453] = {.lex_state = 413},
  [454] = {.lex_state = 561},
  [455] = {.lex_state = 561},
  [456] = {.lex_state = 413},
  [457] = {.lex_state = 567},
  [458] = {.lex_state = 399},
  [459] = {.lex_state = 202},
  [460] = {.lex_state = 508},
  [461] = {.lex_state = 567},
  [462] = {.lex_state = 546},
  [463] = {.lex_state = 202},
  [464] = {.lex_state = 546},
  [465] = {.lex_state = 537},
  [466] = {.lex_state = 508},
  [467] = {.lex_state = 202},
  [468] = {.lex_state = 413},
  [469] = {.lex_state = 561},
  [470] = {.lex_state = 202},
  [471] = {.lex_state = 546},
  [472] = {.lex_state = 567},
  [473] = {.lex_state = 202},
  [474] = {.lex_state = 508},
  [475] = {.lex_state = 567},
  [476] = {.lex_state = 567},
  [477] = {.lex_state = 561},
  [478] = {.lex_state = 202},
  [479] = {.lex_state = 413},
  [480] = {.lex_state = 546},
  [481] = {.lex_state = 546},
  [482] = {.lex_state = 567},
  [483] = {.lex_state = 561},
  [484] = {.lex_state = 202},
  [485] = {.lex_state = 546},
  [486] = {.lex_state = 413},
  [487] = {.lex_state = 202},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(3),
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
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
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
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(36),
    [aux_sym_program_block_repeat2] = STATE(37),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(39),
    [aux_sym_program_block_repeat2] = STATE(40),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(43),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [13] = {
    [sym_argument_list] = STATE(46),
    [anon_sym_COLON_COLON] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_number_literal] = ACTIONS(88),
    [sym__double_quoted_string] = ACTIONS(88),
    [sym__single_quoted_string] = ACTIONS(88),
    [sym_boolean_literal] = ACTIONS(88),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_block_label_start_expression] = ACTIONS(92),
    [sym_number_literal] = ACTIONS(92),
    [sym__double_quoted_string] = ACTIONS(92),
    [sym__single_quoted_string] = ACTIONS(92),
    [sym_boolean_literal] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(34),
  },
  [15] = {
    [sym_call_expression] = STATE(48),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [17] = {
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym_statement_label] = STATE(49),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym__expression] = STATE(57),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [20] = {
    [sym_loop_control_expression] = STATE(60),
    [sym__end_of_statement] = STATE(61),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [21] = {
    [sym_parenthesized_expression] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__expression] = STATE(68),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(124),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [24] = {
    [sym__expression] = STATE(71),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_EQ_GT] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_EQ_GT] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_SLASH_SLASH] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_STAR_STAR] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [sym_argument_list] = STATE(75),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_EQ_GT] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [29] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(148),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_block_label_start_expression] = ACTIONS(150),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(150),
    [sym__single_quoted_string] = ACTIONS(150),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [sym__expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(80),
    [sym_assignment_expression] = STATE(84),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(85),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_COLON_COLON] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [sym_subroutine_call] = STATE(86),
    [sym_keyword_statement] = STATE(86),
    [sym_do_loop_statement] = STATE(86),
    [sym_if_statement] = STATE(86),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(86),
    [sym_pointer_assignment_expression] = STATE(86),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(87),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [sym__end_of_statement] = STATE(89),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
  },
  [33] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
  },
  [34] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym__end_of_statement] = STATE(89),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
  },
  [36] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(101),
    [aux_sym_program_block_repeat2] = STATE(40),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [sym__end_of_statement] = STATE(104),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [39] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(101),
    [aux_sym_program_block_repeat2] = STATE(106),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__end_of_statement] = STATE(104),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(202),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym_parenthesized_expression] = STATE(108),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym__expression] = STATE(116),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(117),
    [sym_array_slice] = STATE(117),
    [sym_assumed_size] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [anon_sym_COLON_COLON] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [sym_number_literal] = ACTIONS(226),
    [sym__double_quoted_string] = ACTIONS(226),
    [sym__single_quoted_string] = ACTIONS(226),
    [sym_boolean_literal] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym_argument_list] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(228),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
  },
  [49] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(232),
    [sym__newline] = ACTIONS(232),
  },
  [50] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [51] = {
    [sym__expression] = STATE(122),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(234),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym__expression] = STATE(123),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [sym__expression] = STATE(124),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_PERCENT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_STAR_STAR] = ACTIONS(144),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [56] = {
    [sym_argument_list] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [57] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(232),
    [sym__newline] = ACTIONS(232),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(264),
    [sym_comment] = ACTIONS(14),
  },
  [59] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
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
  [60] = {
    [sym__end_of_statement] = STATE(135),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [61] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(140),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [sym__expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [sym_statement_label] = STATE(143),
    [sym_subroutine_call] = STATE(144),
    [sym_keyword_statement] = STATE(144),
    [sym_do_loop_statement] = STATE(144),
    [sym_if_statement] = STATE(144),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(144),
    [sym_pointer_assignment_expression] = STATE(144),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(145),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym__expression] = STATE(146),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [sym__expression] = STATE(147),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [sym_argument_list] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym_argument_list] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_EQ_GT] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_EQ_GT] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym_loop_control_expression] = STATE(161),
    [sym__end_of_statement] = STATE(135),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [73] = {
    [sym_parenthesized_expression] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(310),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [sym__expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(166),
    [sym_array_slice] = STATE(166),
    [sym_assumed_size] = STATE(166),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_EQ_GT] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_GT] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_SLASH_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(314),
    [sym__newline] = ACTIONS(314),
  },
  [76] = {
    [sym__expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(80),
    [sym_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [sym__expression] = STATE(172),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(318),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(320),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__expression] = STATE(174),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [sym__expression] = STATE(175),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(142),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(140),
    [anon_sym_SLASH_SLASH] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_STAR_STAR] = ACTIONS(142),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [sym_argument_list] = STATE(178),
    [sym__end_of_statement] = STATE(179),
    [aux_sym_variable_declaration_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [83] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym__end_of_statement] = STATE(179),
    [aux_sym_variable_declaration_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [85] = {
    [sym__end_of_statement] = STATE(179),
    [aux_sym_variable_declaration_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [86] = {
    [sym__end_of_statement] = STATE(191),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
  },
  [87] = {
    [sym__end_of_statement] = STATE(191),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
  },
  [88] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
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
  [89] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [sym_block_label_start_expression] = ACTIONS(354),
    [sym_number_literal] = ACTIONS(354),
    [sym__double_quoted_string] = ACTIONS(354),
    [sym__single_quoted_string] = ACTIONS(354),
    [sym_boolean_literal] = ACTIONS(354),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym__expression] = STATE(192),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [sym__expression] = STATE(193),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [sym__expression] = STATE(194),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [sym__expression] = STATE(195),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [sym__expression] = STATE(196),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [sym__expression] = STATE(197),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [sym__expression] = STATE(198),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym__expression] = STATE(199),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [sym__expression] = STATE(200),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [sym__expression] = STATE(201),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [sym__expression] = STATE(202),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [aux_sym_program_block_repeat1] = STATE(101),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(356),
    [sym_block_label_start_expression] = ACTIONS(361),
    [sym_number_literal] = ACTIONS(361),
    [sym__double_quoted_string] = ACTIONS(361),
    [sym__single_quoted_string] = ACTIONS(361),
    [sym_boolean_literal] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [sym_block_label_start_expression] = ACTIONS(396),
    [sym_number_literal] = ACTIONS(399),
    [sym__double_quoted_string] = ACTIONS(402),
    [sym__single_quoted_string] = ACTIONS(402),
    [sym_boolean_literal] = ACTIONS(399),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [sym__end_of_statement] = STATE(204),
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(410),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [sym__end_of_statement] = STATE(204),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(412),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [106] = {
    [sym_statement_label] = STATE(31),
    [sym_subroutine_call] = STATE(32),
    [sym_keyword_statement] = STATE(32),
    [sym_do_loop_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(32),
    [sym_pointer_assignment_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(35),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym__end_of_statement] = STATE(204),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [108] = {
    [anon_sym_COLON_COLON] = ACTIONS(416),
    [anon_sym_LPAREN] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_PLUS] = ACTIONS(418),
    [anon_sym_DASH] = ACTIONS(418),
    [sym_number_literal] = ACTIONS(420),
    [sym__double_quoted_string] = ACTIONS(420),
    [sym__single_quoted_string] = ACTIONS(420),
    [sym_boolean_literal] = ACTIONS(420),
    [sym_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__expression] = STATE(207),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [anon_sym_COLON_COLON] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [sym_number_literal] = ACTIONS(428),
    [sym__double_quoted_string] = ACTIONS(428),
    [sym__single_quoted_string] = ACTIONS(428),
    [sym_boolean_literal] = ACTIONS(428),
    [sym_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym__expression] = STATE(209),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__expression] = STATE(211),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(432),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym_argument_list] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [aux_sym_argument_list_repeat1] = STATE(225),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [aux_sym_argument_list_repeat1] = STATE(225),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [sym__expression] = STATE(227),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(228),
    [sym_array_slice] = STATE(228),
    [sym_assumed_size] = STATE(228),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(314),
    [sym__newline] = ACTIONS(314),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym_argument_list] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(302),
    [sym__newline] = ACTIONS(302),
  },
  [124] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
  },
  [125] = {
    [sym__expression] = STATE(231),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym__expression] = STATE(232),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym__expression] = STATE(233),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(234),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(235),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(236),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym__expression] = STATE(237),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [sym__expression] = STATE(238),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [sym__expression] = STATE(239),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__expression] = STATE(242),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(244),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [sym__block_label] = STATE(246),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(482),
    [sym__newline] = ACTIONS(482),
  },
  [137] = {
    [sym_subroutine_call] = STATE(247),
    [sym_keyword_statement] = STATE(247),
    [sym_do_loop_statement] = STATE(247),
    [sym_if_statement] = STATE(247),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(247),
    [sym_pointer_assignment_expression] = STATE(247),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(248),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [sym__end_of_statement] = STATE(249),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [139] = {
    [sym__end_of_statement] = STATE(249),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [140] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(250),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [sym__block_label] = STATE(253),
    [sym__end_of_statement] = STATE(254),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [143] = {
    [sym_subroutine_call] = STATE(255),
    [sym_keyword_statement] = STATE(255),
    [sym_do_loop_statement] = STATE(255),
    [sym_if_statement] = STATE(255),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(255),
    [sym_pointer_assignment_expression] = STATE(255),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(256),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__end_of_statement] = STATE(258),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(488),
    [sym__newline] = ACTIONS(488),
  },
  [145] = {
    [sym__end_of_statement] = STATE(258),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(488),
    [sym__newline] = ACTIONS(488),
  },
  [146] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym_number_literal] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(14),
  },
  [149] = {
    [sym__expression] = STATE(261),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(262),
    [sym_array_slice] = STATE(262),
    [sym_assumed_size] = STATE(262),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_EQ_GT] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_SLASH_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(496),
    [anon_sym_SLASH] = ACTIONS(496),
    [anon_sym_STAR_STAR] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(496),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym__expression] = STATE(263),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_EQ_GT] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_LT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_SLASH_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_SLASH_SLASH] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_STAR_STAR] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(500),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [sym__expression] = STATE(264),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [154] = {
    [sym__expression] = STATE(265),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [155] = {
    [sym__expression] = STATE(266),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [sym__expression] = STATE(267),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [sym__expression] = STATE(268),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [sym__expression] = STATE(269),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [sym__expression] = STATE(270),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym__expression] = STATE(271),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [sym__end_of_statement] = STATE(272),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [162] = {
    [sym__expression] = STATE(273),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(506),
    [sym_comment] = ACTIONS(14),
  },
  [164] = {
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_EQ_GT] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_SLASH_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_SLASH_SLASH] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(428),
    [sym__newline] = ACTIONS(428),
  },
  [165] = {
    [aux_sym_argument_list_repeat1] = STATE(276),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [aux_sym_argument_list_repeat1] = STATE(276),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(14),
  },
  [167] = {
    [sym_argument_list] = STATE(178),
    [sym__end_of_statement] = STATE(277),
    [aux_sym_variable_declaration_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [168] = {
    [sym__end_of_statement] = STATE(277),
    [aux_sym_variable_declaration_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [169] = {
    [sym__end_of_statement] = STATE(277),
    [aux_sym_variable_declaration_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym_argument_list] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [sym_argument_list] = STATE(282),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [175] = {
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [sym__expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(80),
    [sym_assignment_expression] = STATE(284),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(285),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [sym__expression] = STATE(287),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(288),
    [sym_array_slice] = STATE(288),
    [sym_assumed_size] = STATE(288),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_GT] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_SLASH_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(314),
    [sym__newline] = ACTIONS(314),
  },
  [179] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(522),
    [anon_sym_LPAREN] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(522),
    [sym_block_label_start_expression] = ACTIONS(524),
    [sym_number_literal] = ACTIONS(524),
    [sym__double_quoted_string] = ACTIONS(524),
    [sym__single_quoted_string] = ACTIONS(524),
    [sym_boolean_literal] = ACTIONS(524),
    [sym_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [sym__end_of_statement] = STATE(277),
    [aux_sym_variable_declaration_repeat1] = STATE(289),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [181] = {
    [sym__expression] = STATE(290),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [sym__expression] = STATE(293),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [sym__expression] = STATE(294),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [184] = {
    [sym__expression] = STATE(295),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [sym__expression] = STATE(296),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [sym__expression] = STATE(297),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [sym__expression] = STATE(298),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [sym__expression] = STATE(299),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [sym__expression] = STATE(300),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [sym__expression] = STATE(301),
    [sym_parenthesized_expression] = STATE(80),
    [sym_derived_type_member_expression] = STATE(80),
    [sym_logical_expression] = STATE(80),
    [sym_relational_expression] = STATE(80),
    [sym_concatenation_expression] = STATE(80),
    [sym_math_expression] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym_complex_literal] = STATE(80),
    [sym_string_literal] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(160),
    [sym__double_quoted_string] = ACTIONS(162),
    [sym__single_quoted_string] = ACTIONS(162),
    [sym_boolean_literal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [sym_block_label_start_expression] = ACTIONS(532),
    [sym_number_literal] = ACTIONS(532),
    [sym__double_quoted_string] = ACTIONS(532),
    [sym__single_quoted_string] = ACTIONS(532),
    [sym_boolean_literal] = ACTIONS(532),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_EQ] = ACTIONS(534),
    [anon_sym_EQ_GT] = ACTIONS(536),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(540),
    [sym__newline] = ACTIONS(540),
  },
  [194] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(542),
    [sym__newline] = ACTIONS(542),
  },
  [195] = {
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_EQ] = ACTIONS(544),
    [anon_sym_EQ_GT] = ACTIONS(546),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_STAR_STAR] = ACTIONS(546),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_EQ_GT] = ACTIONS(552),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_EQ_GT] = ACTIONS(552),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_EQ_GT] = ACTIONS(552),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_EQ_GT] = ACTIONS(558),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_EQ_GT] = ACTIONS(564),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(534),
    [anon_sym_EQ_GT] = ACTIONS(536),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_EQ] = ACTIONS(534),
    [anon_sym_EQ_GT] = ACTIONS(536),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(536),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [sym__end_of_statement] = STATE(302),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(568),
    [sym_comment] = ACTIONS(14),
  },
  [205] = {
    [sym__end_of_statement] = STATE(302),
    [sym_identifier] = ACTIONS(570),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [206] = {
    [sym__end_of_statement] = STATE(302),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [sym__expression] = STATE(308),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(580),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(582),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_assumed_size] = STATE(312),
    [sym_assumed_shape] = STATE(312),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(584),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [sym__expression] = STATE(313),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(314),
    [sym_array_slice] = STATE(314),
    [sym_assumed_size] = STATE(314),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [sym__expression] = STATE(315),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_COLON_COLON] = ACTIONS(586),
    [anon_sym_LPAREN] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_PLUS] = ACTIONS(588),
    [anon_sym_DASH] = ACTIONS(588),
    [sym_number_literal] = ACTIONS(590),
    [sym__double_quoted_string] = ACTIONS(590),
    [sym__single_quoted_string] = ACTIONS(590),
    [sym_boolean_literal] = ACTIONS(590),
    [sym_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [sym__expression] = STATE(316),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [sym__expression] = STATE(317),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [sym__expression] = STATE(318),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [sym__expression] = STATE(319),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [220] = {
    [sym__expression] = STATE(320),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [sym__expression] = STATE(321),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [sym__expression] = STATE(322),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [sym__expression] = STATE(323),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [224] = {
    [sym__expression] = STATE(324),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(580),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(582),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(14),
  },
  [226] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(428),
    [sym__newline] = ACTIONS(428),
  },
  [227] = {
    [aux_sym_argument_list_repeat1] = STATE(328),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(594),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [aux_sym_argument_list_repeat1] = STATE(328),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(596),
    [sym_comment] = ACTIONS(14),
  },
  [229] = {
    [sym_number_literal] = ACTIONS(598),
    [sym_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(14),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_PERCENT] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_LT] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_SLASH_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(504),
    [anon_sym_DASH] = ACTIONS(504),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_STAR_STAR] = ACTIONS(504),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(504),
    [sym__newline] = ACTIONS(504),
  },
  [231] = {
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
  },
  [232] = {
    [anon_sym_STAR] = ACTIONS(548),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_GT_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_EQ_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_SLASH] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_STAR_STAR] = ACTIONS(548),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(548),
    [sym__newline] = ACTIONS(548),
  },
  [233] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
  },
  [234] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
  },
  [235] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
  },
  [236] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_GT_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_EQ_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(560),
    [sym__newline] = ACTIONS(560),
  },
  [237] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_GT_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_SLASH_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [238] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
  },
  [239] = {
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(538),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
  },
  [240] = {
    [sym__expression] = STATE(330),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [sym__expression] = STATE(331),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(602),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [sym__block_label] = STATE(342),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(626),
    [sym__newline] = ACTIONS(626),
  },
  [244] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(250),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(630),
    [sym__newline] = ACTIONS(630),
  },
  [246] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(626),
    [sym__newline] = ACTIONS(626),
  },
  [247] = {
    [sym__end_of_statement] = STATE(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [248] = {
    [sym__end_of_statement] = STATE(344),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
  },
  [249] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [sym_block_label_start_expression] = ACTIONS(354),
    [sym_number_literal] = ACTIONS(354),
    [sym__double_quoted_string] = ACTIONS(354),
    [sym__single_quoted_string] = ACTIONS(354),
    [sym_boolean_literal] = ACTIONS(354),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(250),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [sym_block_label_start_expression] = ACTIONS(396),
    [sym_number_literal] = ACTIONS(399),
    [sym__double_quoted_string] = ACTIONS(402),
    [sym__single_quoted_string] = ACTIONS(402),
    [sym_boolean_literal] = ACTIONS(399),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_block_label_start_expression] = ACTIONS(504),
    [sym_number_literal] = ACTIONS(504),
    [sym__double_quoted_string] = ACTIONS(504),
    [sym__single_quoted_string] = ACTIONS(504),
    [sym_boolean_literal] = ACTIONS(504),
    [sym_identifier] = ACTIONS(504),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
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
  [253] = {
    [sym__end_of_statement] = STATE(345),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [254] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(352),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(354),
    [aux_sym__block_if_statement_repeat1] = STATE(355),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [255] = {
    [sym__end_of_statement] = STATE(356),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(488),
    [sym__newline] = ACTIONS(488),
  },
  [256] = {
    [sym__end_of_statement] = STATE(356),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(488),
    [sym__newline] = ACTIONS(488),
  },
  [257] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [258] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(638),
    [sym__newline] = ACTIONS(638),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(640),
    [sym_comment] = ACTIONS(14),
  },
  [260] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_EQ] = ACTIONS(426),
    [anon_sym_EQ_GT] = ACTIONS(424),
    [anon_sym_PERCENT] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_SLASH_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_SLASH_SLASH] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(424),
    [anon_sym_COLON] = ACTIONS(426),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [aux_sym_argument_list_repeat1] = STATE(359),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [aux_sym_argument_list_repeat1] = STATE(359),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_comment] = ACTIONS(14),
  },
  [263] = {
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [264] = {
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_STAR_STAR] = ACTIONS(546),
    [sym_comment] = ACTIONS(34),
  },
  [265] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [266] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [267] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [268] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(536),
    [sym_comment] = ACTIONS(34),
  },
  [272] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(360),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [273] = {
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [274] = {
    [sym__block_label] = STATE(362),
    [sym__end_of_statement] = STATE(345),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [275] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(590),
    [anon_sym_EQ] = ACTIONS(590),
    [anon_sym_EQ_GT] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(590),
    [anon_sym_PLUS] = ACTIONS(590),
    [anon_sym_DASH] = ACTIONS(590),
    [anon_sym_SLASH] = ACTIONS(590),
    [anon_sym_STAR_STAR] = ACTIONS(590),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(590),
    [sym__newline] = ACTIONS(590),
  },
  [276] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym_comment] = ACTIONS(14),
  },
  [277] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_PLUS] = ACTIONS(650),
    [anon_sym_DASH] = ACTIONS(650),
    [sym_block_label_start_expression] = ACTIONS(652),
    [sym_number_literal] = ACTIONS(652),
    [sym__double_quoted_string] = ACTIONS(652),
    [sym__single_quoted_string] = ACTIONS(652),
    [sym_boolean_literal] = ACTIONS(652),
    [sym_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
  },
  [278] = {
    [sym__end_of_statement] = STATE(364),
    [aux_sym_variable_declaration_repeat1] = STATE(289),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [279] = {
    [sym_number_literal] = ACTIONS(654),
    [sym_identifier] = ACTIONS(656),
    [sym_comment] = ACTIONS(14),
  },
  [280] = {
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_LT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_SLASH_EQ] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_SLASH_SLASH] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_STAR_STAR] = ACTIONS(502),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [sym__expression] = STATE(367),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(368),
    [sym_array_slice] = STATE(368),
    [sym_assumed_size] = STATE(368),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(658),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PERCENT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_SLASH_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(496),
    [anon_sym_SLASH] = ACTIONS(496),
    [anon_sym_STAR_STAR] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [sym_argument_list] = STATE(178),
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(660),
    [sym__newline] = ACTIONS(660),
  },
  [284] = {
    [anon_sym_COMMA] = ACTIONS(660),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(660),
    [sym__newline] = ACTIONS(660),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(660),
    [sym__newline] = ACTIONS(660),
  },
  [286] = {
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_SLASH_EQ] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_SLASH_SLASH] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(428),
    [sym__newline] = ACTIONS(428),
  },
  [287] = {
    [aux_sym_argument_list_repeat1] = STATE(370),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [aux_sym_argument_list_repeat1] = STATE(370),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(14),
  },
  [289] = {
    [aux_sym_variable_declaration_repeat1] = STATE(289),
    [anon_sym_COMMA] = ACTIONS(666),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(660),
    [sym__newline] = ACTIONS(660),
  },
  [290] = {
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_EQ] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [291] = {
    [sym__expression] = STATE(371),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [292] = {
    [sym__expression] = STATE(372),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [293] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(540),
    [sym__newline] = ACTIONS(540),
  },
  [294] = {
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_EQ] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_STAR_STAR] = ACTIONS(546),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [297] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [299] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [300] = {
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [301] = {
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_EQ] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(536),
    [sym_comment] = ACTIONS(34),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(687),
    [sym_comment] = ACTIONS(14),
  },
  [303] = {
    [sym__end_of_statement] = STATE(382),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [304] = {
    [sym__end_of_statement] = STATE(382),
    [sym_identifier] = ACTIONS(689),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [305] = {
    [anon_sym_COLON_COLON] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(504),
    [sym__double_quoted_string] = ACTIONS(504),
    [sym__single_quoted_string] = ACTIONS(504),
    [sym_boolean_literal] = ACTIONS(504),
    [sym_identifier] = ACTIONS(504),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [sym__expression] = STATE(384),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [sym__expression] = STATE(385),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [sym__expression] = STATE(395),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(715),
    [sym_comment] = ACTIONS(14),
  },
  [311] = {
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(717),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [sym_comment] = ACTIONS(14),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(14),
  },
  [315] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(534),
    [sym_comment] = ACTIONS(34),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_STAR_STAR] = ACTIONS(546),
    [anon_sym_COLON] = ACTIONS(544),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(556),
    [sym_comment] = ACTIONS(34),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(562),
    [sym_comment] = ACTIONS(34),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(534),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(536),
    [anon_sym_COLON] = ACTIONS(534),
    [sym_comment] = ACTIONS(34),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [anon_sym_COLON_COLON] = ACTIONS(727),
    [anon_sym_LPAREN] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [sym_number_literal] = ACTIONS(731),
    [sym__double_quoted_string] = ACTIONS(731),
    [sym__single_quoted_string] = ACTIONS(731),
    [sym_boolean_literal] = ACTIONS(731),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [326] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(14),
  },
  [327] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(590),
    [sym__newline] = ACTIONS(590),
  },
  [328] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(736),
    [sym_comment] = ACTIONS(14),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(738),
    [sym_comment] = ACTIONS(14),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [sym__expression] = STATE(399),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [sym__expression] = STATE(400),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [sym__expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
    [sym__expression] = STATE(402),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
    [sym__expression] = STATE(403),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [sym__expression] = STATE(404),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [sym__expression] = STATE(405),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
    [sym__expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
    [sym__expression] = STATE(407),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [sym__expression] = STATE(408),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(740),
    [sym__newline] = ACTIONS(740),
  },
  [343] = {
    [sym__block_label] = STATE(409),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(740),
    [sym__newline] = ACTIONS(740),
  },
  [344] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [sym_block_label_start_expression] = ACTIONS(532),
    [sym_number_literal] = ACTIONS(532),
    [sym__double_quoted_string] = ACTIONS(532),
    [sym__single_quoted_string] = ACTIONS(532),
    [sym_boolean_literal] = ACTIONS(532),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(411),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(412),
    [aux_sym__block_if_statement_repeat1] = STATE(413),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [346] = {
    [sym__block_label] = STATE(414),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(744),
    [sym__newline] = ACTIONS(744),
  },
  [347] = {
    [sym_parenthesized_expression] = STATE(415),
    [anon_sym_LPAREN] = ACTIONS(310),
    [sym_comment] = ACTIONS(14),
  },
  [348] = {
    [sym__block_label] = STATE(417),
    [sym__end_of_statement] = STATE(418),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
  },
  [349] = {
    [sym_subroutine_call] = STATE(419),
    [sym_keyword_statement] = STATE(419),
    [sym_do_loop_statement] = STATE(419),
    [sym_if_statement] = STATE(419),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(419),
    [sym_pointer_assignment_expression] = STATE(419),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(420),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [sym__end_of_statement] = STATE(421),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [351] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(750),
    [sym_comment] = ACTIONS(14),
  },
  [352] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [sym_comment] = ACTIONS(14),
  },
  [353] = {
    [sym__end_of_statement] = STATE(421),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [354] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(411),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(422),
    [aux_sym__block_if_statement_repeat1] = STATE(413),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(411),
    [aux_sym__block_if_statement_repeat1] = STATE(423),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [sym_comment] = ACTIONS(14),
  },
  [356] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(756),
    [sym__newline] = ACTIONS(756),
  },
  [357] = {
    [anon_sym_COMMA] = ACTIONS(758),
    [anon_sym_STAR] = ACTIONS(758),
    [anon_sym_RPAREN] = ACTIONS(758),
    [anon_sym_EQ] = ACTIONS(758),
    [anon_sym_EQ_GT] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_LT] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_GT] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_LT_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_GT_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_EQ_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_SLASH_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_SLASH_SLASH] = ACTIONS(760),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(758),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(758),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [anon_sym_COMMA] = ACTIONS(588),
    [anon_sym_STAR] = ACTIONS(588),
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_EQ] = ACTIONS(588),
    [anon_sym_EQ_GT] = ACTIONS(586),
    [anon_sym_PERCENT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_SLASH] = ACTIONS(586),
    [anon_sym_PLUS] = ACTIONS(588),
    [anon_sym_DASH] = ACTIONS(588),
    [anon_sym_SLASH] = ACTIONS(588),
    [anon_sym_STAR_STAR] = ACTIONS(586),
    [anon_sym_COLON] = ACTIONS(588),
    [sym_comment] = ACTIONS(34),
  },
  [359] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(764),
    [sym_comment] = ACTIONS(14),
  },
  [360] = {
    [sym_statement_label] = STATE(137),
    [sym_subroutine_call] = STATE(138),
    [sym_keyword_statement] = STATE(138),
    [sym_do_loop_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(138),
    [sym_pointer_assignment_expression] = STATE(138),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(139),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(250),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(502),
    [sym_comment] = ACTIONS(14),
  },
  [362] = {
    [sym__end_of_statement] = STATE(426),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_STAR] = ACTIONS(731),
    [anon_sym_EQ] = ACTIONS(731),
    [anon_sym_EQ_GT] = ACTIONS(731),
    [anon_sym_PERCENT] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_LT] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_GT] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_LT_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_GT_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_EQ_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_SLASH_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_SLASH_SLASH] = ACTIONS(731),
    [anon_sym_PLUS] = ACTIONS(731),
    [anon_sym_DASH] = ACTIONS(731),
    [anon_sym_SLASH] = ACTIONS(731),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(731),
    [sym__newline] = ACTIONS(731),
  },
  [364] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(768),
    [anon_sym_LPAREN] = ACTIONS(768),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(768),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(768),
    [sym_block_label_start_expression] = ACTIONS(770),
    [sym_number_literal] = ACTIONS(770),
    [sym__double_quoted_string] = ACTIONS(770),
    [sym__single_quoted_string] = ACTIONS(770),
    [sym_boolean_literal] = ACTIONS(770),
    [sym_identifier] = ACTIONS(770),
    [sym_comment] = ACTIONS(34),
  },
  [365] = {
    [anon_sym_RPAREN] = ACTIONS(772),
    [sym_comment] = ACTIONS(14),
  },
  [366] = {
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_EQ] = ACTIONS(426),
    [anon_sym_PERCENT] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(426),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_SLASH_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(426),
    [anon_sym_SLASH_SLASH] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(424),
    [sym_comment] = ACTIONS(34),
  },
  [367] = {
    [aux_sym_argument_list_repeat1] = STATE(429),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_comment] = ACTIONS(34),
  },
  [368] = {
    [aux_sym_argument_list_repeat1] = STATE(429),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(776),
    [sym_comment] = ACTIONS(14),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(590),
    [anon_sym_EQ] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(590),
    [anon_sym_PLUS] = ACTIONS(590),
    [anon_sym_DASH] = ACTIONS(590),
    [anon_sym_SLASH] = ACTIONS(590),
    [anon_sym_STAR_STAR] = ACTIONS(590),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(590),
    [sym__newline] = ACTIONS(590),
  },
  [370] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(778),
    [sym_comment] = ACTIONS(14),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(302),
    [sym__newline] = ACTIONS(302),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
  },
  [373] = {
    [sym__expression] = STATE(431),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [374] = {
    [sym__expression] = STATE(432),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [375] = {
    [sym__expression] = STATE(433),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [376] = {
    [sym__expression] = STATE(434),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [377] = {
    [sym__expression] = STATE(435),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [378] = {
    [sym__expression] = STATE(436),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [379] = {
    [sym__expression] = STATE(437),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [380] = {
    [sym__expression] = STATE(438),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [381] = {
    [sym__expression] = STATE(439),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [382] = {
    [ts_builtin_sym_end] = ACTIONS(780),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(780),
    [sym_comment] = ACTIONS(14),
  },
  [383] = {
    [sym__end_of_statement] = STATE(440),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [384] = {
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [385] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [386] = {
    [sym__expression] = STATE(441),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [387] = {
    [sym__expression] = STATE(442),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [388] = {
    [sym__expression] = STATE(443),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [389] = {
    [sym__expression] = STATE(444),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [390] = {
    [sym__expression] = STATE(445),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [391] = {
    [sym__expression] = STATE(446),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [392] = {
    [sym__expression] = STATE(447),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [393] = {
    [sym__expression] = STATE(448),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [394] = {
    [sym__expression] = STATE(449),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(782),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [396] = {
    [sym__expression] = STATE(450),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [397] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(731),
    [sym__newline] = ACTIONS(731),
  },
  [398] = {
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_STAR] = ACTIONS(762),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_LT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_GT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_LT_EQ] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_GT_EQ] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_EQ_EQ] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_SLASH_EQ] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_SLASH_SLASH] = ACTIONS(762),
    [anon_sym_PLUS] = ACTIONS(762),
    [anon_sym_DASH] = ACTIONS(762),
    [anon_sym_SLASH] = ACTIONS(762),
    [anon_sym_STAR_STAR] = ACTIONS(762),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(762),
    [sym__newline] = ACTIONS(762),
  },
  [399] = {
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(786),
    [sym__newline] = ACTIONS(786),
  },
  [400] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_STAR_STAR] = ACTIONS(546),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [403] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(616),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_STAR_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(34),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(606),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(536),
    [sym_comment] = ACTIONS(34),
  },
  [409] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(788),
    [sym__newline] = ACTIONS(788),
  },
  [410] = {
    [sym__block_label] = STATE(452),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(790),
    [sym__newline] = ACTIONS(790),
  },
  [411] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(792),
    [sym_comment] = ACTIONS(14),
  },
  [412] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(454),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(422),
    [aux_sym__block_if_statement_repeat1] = STATE(455),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [413] = {
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(454),
    [aux_sym__block_if_statement_repeat1] = STATE(423),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [sym_comment] = ACTIONS(14),
  },
  [414] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(790),
    [sym__newline] = ACTIONS(790),
  },
  [415] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(796),
    [sym_comment] = ACTIONS(14),
  },
  [416] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
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
  [417] = {
    [sym__end_of_statement] = STATE(457),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
  },
  [418] = {
    [sym_statement_label] = STATE(458),
    [sym_subroutine_call] = STATE(459),
    [sym_keyword_statement] = STATE(459),
    [sym_do_loop_statement] = STATE(459),
    [sym_if_statement] = STATE(459),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(459),
    [sym_pointer_assignment_expression] = STATE(459),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(460),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(461),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(798),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [419] = {
    [sym__end_of_statement] = STATE(462),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [420] = {
    [sym__end_of_statement] = STATE(462),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [421] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [sym_block_label_start_expression] = ACTIONS(354),
    [sym_number_literal] = ACTIONS(354),
    [sym__double_quoted_string] = ACTIONS(354),
    [sym__single_quoted_string] = ACTIONS(354),
    [sym_boolean_literal] = ACTIONS(354),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
  },
  [422] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(422),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [sym_block_label_start_expression] = ACTIONS(396),
    [sym_number_literal] = ACTIONS(399),
    [sym__double_quoted_string] = ACTIONS(402),
    [sym__single_quoted_string] = ACTIONS(402),
    [sym_boolean_literal] = ACTIONS(399),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(34),
  },
  [423] = {
    [sym_elseif_clause] = STATE(351),
    [aux_sym__block_if_statement_repeat1] = STATE(423),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(805),
    [sym_comment] = ACTIONS(14),
  },
  [424] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_STAR] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_EQ] = ACTIONS(729),
    [anon_sym_EQ_GT] = ACTIONS(727),
    [anon_sym_PERCENT] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_LT] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_GT] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_LT_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_GT_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_EQ_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_SLASH_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(729),
    [anon_sym_STAR_STAR] = ACTIONS(727),
    [anon_sym_COLON] = ACTIONS(729),
    [sym_comment] = ACTIONS(34),
  },
  [425] = {
    [sym__block_label] = STATE(463),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(788),
    [sym__newline] = ACTIONS(788),
  },
  [426] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(454),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(464),
    [aux_sym__block_if_statement_repeat1] = STATE(455),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [427] = {
    [anon_sym_STAR] = ACTIONS(758),
    [anon_sym_EQ] = ACTIONS(758),
    [anon_sym_PERCENT] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(762),
    [anon_sym_LT] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_GT] = ACTIONS(758),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_LT_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_GT_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_EQ_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_SLASH_EQ] = ACTIONS(760),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(758),
    [anon_sym_SLASH_SLASH] = ACTIONS(760),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(758),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
  },
  [428] = {
    [anon_sym_STAR] = ACTIONS(588),
    [anon_sym_EQ] = ACTIONS(588),
    [anon_sym_PERCENT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_SLASH] = ACTIONS(586),
    [anon_sym_PLUS] = ACTIONS(588),
    [anon_sym_DASH] = ACTIONS(588),
    [anon_sym_SLASH] = ACTIONS(588),
    [anon_sym_STAR_STAR] = ACTIONS(586),
    [sym_comment] = ACTIONS(34),
  },
  [429] = {
    [aux_sym_argument_list_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(807),
    [sym_comment] = ACTIONS(14),
  },
  [430] = {
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_STAR] = ACTIONS(731),
    [anon_sym_EQ] = ACTIONS(731),
    [anon_sym_PERCENT] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_LT] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_GT] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_LT_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_GT_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_EQ_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_SLASH_EQ] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_SLASH_SLASH] = ACTIONS(731),
    [anon_sym_PLUS] = ACTIONS(731),
    [anon_sym_DASH] = ACTIONS(731),
    [anon_sym_SLASH] = ACTIONS(731),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(731),
    [sym__newline] = ACTIONS(731),
  },
  [431] = {
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
  },
  [432] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_STAR] = ACTIONS(548),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_GT_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_EQ_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_SLASH] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_STAR_STAR] = ACTIONS(548),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(548),
    [sym__newline] = ACTIONS(548),
  },
  [433] = {
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
  },
  [434] = {
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
  },
  [435] = {
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_EQ] = ACTIONS(679),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
  },
  [436] = {
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_GT_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_EQ_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(560),
    [sym__newline] = ACTIONS(560),
  },
  [437] = {
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_GT_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_SLASH_EQ] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_SLASH_SLASH] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [438] = {
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(685),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
  },
  [439] = {
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(671),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(538),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_SLASH_SLASH] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(538),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
  },
  [440] = {
    [ts_builtin_sym_end] = ACTIONS(809),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(809),
    [sym_comment] = ACTIONS(14),
  },
  [441] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [442] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_STAR_STAR] = ACTIONS(546),
    [sym_comment] = ACTIONS(34),
  },
  [443] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [444] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [447] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [448] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [449] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(536),
    [sym_comment] = ACTIONS(34),
  },
  [450] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_PERCENT] = ACTIONS(695),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(705),
    [anon_sym_SLASH_SLASH] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_STAR_STAR] = ACTIONS(713),
    [sym_comment] = ACTIONS(34),
  },
  [451] = {
    [sym__expression] = STATE(466),
    [sym_parenthesized_expression] = STATE(54),
    [sym_derived_type_member_expression] = STATE(54),
    [sym_logical_expression] = STATE(54),
    [sym_relational_expression] = STATE(54),
    [sym_concatenation_expression] = STATE(54),
    [sym_math_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_complex_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [452] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(813),
    [sym__newline] = ACTIONS(813),
  },
  [453] = {
    [sym__block_label] = STATE(467),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(813),
    [sym__newline] = ACTIONS(813),
  },
  [454] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(815),
    [sym_comment] = ACTIONS(14),
  },
  [455] = {
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(469),
    [aux_sym__block_if_statement_repeat1] = STATE(423),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(815),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [sym_comment] = ACTIONS(14),
  },
  [456] = {
    [sym__block_label] = STATE(470),
    [sym__end_of_statement] = STATE(471),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [457] = {
    [sym_statement_label] = STATE(458),
    [sym_subroutine_call] = STATE(459),
    [sym_keyword_statement] = STATE(459),
    [sym_do_loop_statement] = STATE(459),
    [sym_if_statement] = STATE(459),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(459),
    [sym_pointer_assignment_expression] = STATE(459),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(460),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(472),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(817),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [458] = {
    [sym_subroutine_call] = STATE(473),
    [sym_keyword_statement] = STATE(473),
    [sym_do_loop_statement] = STATE(473),
    [sym_if_statement] = STATE(473),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(473),
    [sym_pointer_assignment_expression] = STATE(473),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(474),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [459] = {
    [sym__end_of_statement] = STATE(475),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
  },
  [460] = {
    [sym__end_of_statement] = STATE(475),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
  },
  [461] = {
    [sym_statement_label] = STATE(458),
    [sym_subroutine_call] = STATE(459),
    [sym_keyword_statement] = STATE(459),
    [sym_do_loop_statement] = STATE(459),
    [sym_if_statement] = STATE(459),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(459),
    [sym_pointer_assignment_expression] = STATE(459),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(460),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(476),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(817),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [462] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [sym_block_label_start_expression] = ACTIONS(532),
    [sym_number_literal] = ACTIONS(532),
    [sym__double_quoted_string] = ACTIONS(532),
    [sym__single_quoted_string] = ACTIONS(532),
    [sym_boolean_literal] = ACTIONS(532),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [463] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(819),
    [sym__newline] = ACTIONS(819),
  },
  [464] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(469),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(422),
    [aux_sym__block_if_statement_repeat1] = STATE(477),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(821),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [465] = {
    [anon_sym_STAR] = ACTIONS(729),
    [anon_sym_EQ] = ACTIONS(729),
    [anon_sym_PERCENT] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_LT] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_GT] = ACTIONS(729),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_LT_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_GT_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_EQ_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_SLASH_EQ] = ACTIONS(727),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(729),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(729),
    [anon_sym_STAR_STAR] = ACTIONS(727),
    [sym_comment] = ACTIONS(34),
  },
  [466] = {
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(823),
    [sym__newline] = ACTIONS(823),
  },
  [467] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(825),
    [sym__newline] = ACTIONS(825),
  },
  [468] = {
    [sym__block_label] = STATE(478),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(825),
    [sym__newline] = ACTIONS(825),
  },
  [469] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(827),
    [sym_comment] = ACTIONS(14),
  },
  [470] = {
    [sym__end_of_statement] = STATE(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(486),
    [sym__newline] = ACTIONS(486),
  },
  [471] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(481),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(829),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [472] = {
    [sym_statement_label] = STATE(458),
    [sym_subroutine_call] = STATE(459),
    [sym_keyword_statement] = STATE(459),
    [sym_do_loop_statement] = STATE(459),
    [sym_if_statement] = STATE(459),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(459),
    [sym_pointer_assignment_expression] = STATE(459),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(460),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(476),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(831),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [473] = {
    [sym__end_of_statement] = STATE(482),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
  },
  [474] = {
    [sym__end_of_statement] = STATE(482),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_STAR_STAR] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
  },
  [475] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [sym_block_label_start_expression] = ACTIONS(354),
    [sym_number_literal] = ACTIONS(354),
    [sym__double_quoted_string] = ACTIONS(354),
    [sym__single_quoted_string] = ACTIONS(354),
    [sym_boolean_literal] = ACTIONS(354),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
  },
  [476] = {
    [sym_statement_label] = STATE(458),
    [sym_subroutine_call] = STATE(459),
    [sym_keyword_statement] = STATE(459),
    [sym_do_loop_statement] = STATE(459),
    [sym_if_statement] = STATE(459),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(459),
    [sym_pointer_assignment_expression] = STATE(459),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(460),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(476),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [sym_block_label_start_expression] = ACTIONS(396),
    [sym_number_literal] = ACTIONS(399),
    [sym__double_quoted_string] = ACTIONS(402),
    [sym__single_quoted_string] = ACTIONS(402),
    [sym_boolean_literal] = ACTIONS(399),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(34),
  },
  [477] = {
    [sym_elseif_clause] = STATE(351),
    [sym_else_clause] = STATE(483),
    [aux_sym__block_if_statement_repeat1] = STATE(423),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(827),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(636),
    [sym_comment] = ACTIONS(14),
  },
  [478] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(833),
    [sym__newline] = ACTIONS(833),
  },
  [479] = {
    [sym__block_label] = STATE(484),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(833),
    [sym__newline] = ACTIONS(833),
  },
  [480] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(485),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [481] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(422),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [482] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [sym_block_label_start_expression] = ACTIONS(532),
    [sym_number_literal] = ACTIONS(532),
    [sym__double_quoted_string] = ACTIONS(532),
    [sym__single_quoted_string] = ACTIONS(532),
    [sym_boolean_literal] = ACTIONS(532),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [483] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(14),
  },
  [484] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [485] = {
    [sym_statement_label] = STATE(349),
    [sym_subroutine_call] = STATE(350),
    [sym_keyword_statement] = STATE(350),
    [sym_do_loop_statement] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym__inline_if_statement] = STATE(33),
    [sym__block_if_statement] = STATE(33),
    [sym__expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(350),
    [sym_pointer_assignment_expression] = STATE(350),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(353),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(422),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_block_label_start_expression] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [486] = {
    [sym__block_label] = STATE(487),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [487] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(843),
    [sym__newline] = ACTIONS(843),
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
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_label, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_label, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 2),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [358] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [363] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(14),
  [366] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(15),
  [369] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(16),
  [372] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(17),
  [375] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(18),
  [378] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(19),
  [381] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(20),
  [384] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(21),
  [387] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(22),
  [390] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(23),
  [393] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(24),
  [396] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(25),
  [399] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(26),
  [402] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(27),
  [405] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(28),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 3),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_size, 1),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(245),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(252),
  [488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(257),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(259),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(283),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 3),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(303),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(304),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [614] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(337),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 1),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 4),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [656] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [666] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(176),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(373),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(374),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(375),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(376),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(377),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(378),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(380),
  [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(390),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_shape, 1),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [733] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(213),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [740] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [744] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [746] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(416),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 5),
  [770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(451),
  [786] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [790] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [802] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(347),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
