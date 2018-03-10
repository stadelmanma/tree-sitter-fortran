#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 503
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 2
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  anon_sym_COMMA = 3,
  anon_sym_COLON_COLON = 4,
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
  aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 16,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 17,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH = 19,
  anon_sym_LPAREN = 20,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH = 22,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH = 23,
  anon_sym_RPAREN = 24,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 26,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 27,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 28,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH = 29,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 30,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 31,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH = 32,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 33,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH = 34,
  aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 35,
  anon_sym_EQ = 36,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH = 37,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 38,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 39,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 40,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH = 41,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH = 43,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH = 44,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 45,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 46,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 47,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 48,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 49,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 50,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 51,
  anon_sym_EQ_GT = 52,
  anon_sym_PERCENT = 53,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 54,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 55,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 56,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 57,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 58,
  anon_sym_LT = 59,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 60,
  anon_sym_GT = 61,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 62,
  anon_sym_LT_EQ = 63,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 64,
  anon_sym_GT_EQ = 65,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 66,
  anon_sym_EQ_EQ = 67,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 68,
  anon_sym_SLASH_EQ = 69,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 70,
  anon_sym_SLASH_SLASH = 71,
  anon_sym_PLUS = 72,
  anon_sym_DASH = 73,
  anon_sym_SLASH = 74,
  anon_sym_STAR_STAR = 75,
  anon_sym_COLON = 76,
  sym_block_label_start_expression = 77,
  sym_number_literal = 78,
  sym__double_quoted_string = 79,
  sym__single_quoted_string = 80,
  sym_boolean_literal = 81,
  sym_identifier = 82,
  sym_comment = 83,
  sym__semicolon = 84,
  sym__newline = 85,
  sym_translation_unit = 86,
  sym_program_block = 87,
  sym__specification_part = 88,
  sym_variable_declaration = 89,
  sym_variable_modification = 90,
  sym__declaration_targets = 91,
  sym_intrinsic_type = 92,
  sym_type_qualifier = 93,
  sym_parameter_statement = 94,
  sym_parameter_assignment = 95,
  sym_equivalence_statement = 96,
  sym_equivalence_set = 97,
  sym_statement_label = 98,
  sym_subroutine_call = 99,
  sym_keyword_statement = 100,
  sym_include_statement = 101,
  sym_do_loop_statement = 102,
  sym_if_statement = 103,
  sym__inline_if_statement = 104,
  sym__block_if_statement = 105,
  sym_elseif_clause = 106,
  sym_else_clause = 107,
  sym__expression = 108,
  sym_parenthesized_expression = 109,
  sym_assignment_expression = 110,
  sym_pointer_assignment_expression = 111,
  sym_derived_type_member_expression = 112,
  sym_logical_expression = 113,
  sym_relational_expression = 114,
  sym_concatenation_expression = 115,
  sym_math_expression = 116,
  sym_call_expression = 117,
  sym_argument_list = 118,
  sym_keyword_argument = 119,
  sym_array_slice = 120,
  sym_assumed_size = 121,
  sym_assumed_shape = 122,
  sym__block_label = 123,
  sym_loop_control_expression = 124,
  sym_complex_literal = 125,
  sym_string_literal = 126,
  sym__end_of_statement = 127,
  aux_sym_translation_unit_repeat1 = 128,
  aux_sym_program_block_repeat1 = 129,
  aux_sym_program_block_repeat2 = 130,
  aux_sym_variable_declaration_repeat1 = 131,
  aux_sym__declaration_targets_repeat1 = 132,
  aux_sym_parameter_statement_repeat1 = 133,
  aux_sym_equivalence_statement_repeat1 = 134,
  aux_sym_equivalence_set_repeat1 = 135,
  aux_sym__block_if_statement_repeat1 = 136,
  aux_sym_argument_list_repeat1 = 137,
  alias_sym_block_label = 138,
  alias_sym_filename = 139,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_COLON] = "::",
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
  [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[aA][lL][lL][oO][cC][aA][tT][aA][bB][lL][eE]/",
  [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[aA][uU][tT][oO][mM][aA][tT][iI][cC]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[dD][iI][mM][eE][nN][sS][iI][oO][nN]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[eE][xX][tT][eE][rR][nN][aA][lL]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[iI][nN][tT][eE][nN][tT]/",
  [anon_sym_LPAREN] = "(",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[iI][nN]/",
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[oO][uU][tT]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[iI][nN][ 	]*[oO][uU][tT]/",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[iI][nN][tT][rR][iI][nN][sS][iI][cC]/",
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[oO][pP][tT][iI][oO][nN][aA][lL]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[pP][aA][rR][aA][mM][eE][tT][eE][rR]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[pP][oO][iI][nN][tT][eE][rR]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[pP][rR][iI][vV][aA][tT][eE]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[pP][uU][bB][lL][iI][cC]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[sS][aA][vV][eE]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[sS][eE][qQ][uU][eE][nN][cC][eE]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[sS][tT][aA][tT][iI][cC]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[tT][aA][rR][gG][eE][tT]/",
  [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[vV][oO][lL][aA][tT][iI][lL][eE]/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[eE][qQ][uU][iI][vV][aA][lL][eE][nN][cC][eE]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[cC][aA][lL][lL]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][oO][nN][tT][iI][nN][uU][eE]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][yY][cC][lL][eE]/",
  [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[gG][oO][ 	]*[tT][oO]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[rR][eE][tT][uU][rR][nN]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = "/[sS][tT][oO][pP]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[iI][nN][cC][lL][uU][dD][eE]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[dD][oO]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[eE][nN][dD][ 	]*[dD][oO]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[iI][fF]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[tT][hH][eE][nN]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[eE][nN][dD][ 	]*[iI][fF]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[eE][lL][sS][eE][ 	]*[iI][fF]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[eE][lL][sS][eE]/",
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
  [sym__specification_part] = "_specification_part",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_modification] = "variable_modification",
  [sym__declaration_targets] = "_declaration_targets",
  [sym_intrinsic_type] = "intrinsic_type",
  [sym_type_qualifier] = "type_qualifier",
  [sym_parameter_statement] = "parameter_statement",
  [sym_parameter_assignment] = "parameter_assignment",
  [sym_equivalence_statement] = "equivalence_statement",
  [sym_equivalence_set] = "equivalence_set",
  [sym_statement_label] = "statement_label",
  [sym_subroutine_call] = "subroutine_call",
  [sym_keyword_statement] = "keyword_statement",
  [sym_include_statement] = "include_statement",
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
  [aux_sym__declaration_targets_repeat1] = "_declaration_targets_repeat1",
  [aux_sym_parameter_statement_repeat1] = "parameter_statement_repeat1",
  [aux_sym_equivalence_statement_repeat1] = "equivalence_statement_repeat1",
  [aux_sym_equivalence_set_repeat1] = "equivalence_set_repeat1",
  [aux_sym__block_if_statement_repeat1] = "_block_if_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_block_label] = "block_label",
  [alias_sym_filename] = "filename",
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [sym__specification_part] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_modification] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_targets] = {
    .visible = false,
    .named = true,
  },
  [sym_intrinsic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalence_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalence_set] = {
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
  [sym_include_statement] = {
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
  [aux_sym__declaration_targets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_equivalence_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_equivalence_set_repeat1] = {
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
  [alias_sym_filename] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_filename,
  },
  [2] = {
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
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(80);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(160);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(262);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(270);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(288);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(297);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(306);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'y'))
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
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(85);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(96);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(113);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(143);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(161);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(169);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(171);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(205);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(240);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(246);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(306);
      END_STATE();
    case 307:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(307);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 315:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(315);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(316);
      END_STATE();
    case 317:
      if (lookahead == '\n')
        ADVANCE(318);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(317);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(308);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(319);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(377);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(378);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(411);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(474);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(520);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(528);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(536);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(562);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(570);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(606);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(594);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(321);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 333:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(334);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 334:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 335:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 336:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 337:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 338:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 340:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 341:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 342:
      if (lookahead == '\"')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 345:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 346:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 347:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(359);
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
    case 348:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 349:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 350:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 351:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 352:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 354:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 355:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 356:
      if (lookahead == '\'')
        ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 359:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 360:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 362:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 368:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(365);
      END_STATE();
    case 374:
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
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
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
    case 375:
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
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
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
    case 376:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(319);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(377);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(378);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(411);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(474);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(520);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(528);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(536);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(562);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(570);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(588);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(594);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('H' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_block_label_start_expression);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(367);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(371);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(416);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(427);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(428);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(444);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(452);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(457);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(477);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(476);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(381);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(500);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(501);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(508);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(509);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(521);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(529);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(563);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(571);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(574);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(586);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(306);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 605:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(607);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '*')
        ADVANCE(608);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == ',')
        ADVANCE(609);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == ':')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(611);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(612);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(627);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(629);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 610:
      if (lookahead == ':')
        ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(607);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '*')
        ADVANCE(608);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == ',')
        ADVANCE(609);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == ':')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(611);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(612);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(625);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(626);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(628);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(629);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(367);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(371);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(614);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(620);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(624);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(633);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(634);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(640);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(633);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(634);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(640);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(648);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(416);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(637);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(500);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(642);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(645);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(586);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(318);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == ';')
        ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(651);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(612);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(627);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(629);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(318);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == ';')
        ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(651);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(612);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(625);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(626);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(628);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(629);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 652:
      if (lookahead == '\n')
        ADVANCE(318);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(652);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 653:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(654);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(673);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(683);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(691);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(704);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(712);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(738);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(754);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(760);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(653);
      END_STATE();
    case 654:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(655);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(665);
      END_STATE();
    case 655:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(657);
      END_STATE();
    case 657:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(658);
      END_STATE();
    case 658:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(660);
      END_STATE();
    case 660:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(663);
      END_STATE();
    case 663:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(670);
      END_STATE();
    case 670:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(671);
      END_STATE();
    case 671:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(672);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 673:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(674);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(682);
      END_STATE();
    case 674:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(678);
      END_STATE();
    case 678:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(680);
      END_STATE();
    case 680:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(681);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 683:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(688);
      END_STATE();
    case 688:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(689);
      END_STATE();
    case 689:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 691:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(693);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 693:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(694);
      END_STATE();
    case 694:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(695);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(698);
      END_STATE();
    case 695:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(696);
      END_STATE();
    case 696:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 698:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(701);
      END_STATE();
    case 701:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 704:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(705);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(706);
      END_STATE();
    case 706:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(707);
      END_STATE();
    case 707:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(708);
      END_STATE();
    case 708:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(709);
      END_STATE();
    case 709:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(710);
      END_STATE();
    case 710:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(713);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(721);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(727);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(733);
      END_STATE();
    case 713:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(714);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(716);
      END_STATE();
    case 716:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(717);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(718);
      END_STATE();
    case 718:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(719);
      END_STATE();
    case 719:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 721:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(722);
      END_STATE();
    case 722:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(723);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(724);
      END_STATE();
    case 724:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(725);
      END_STATE();
    case 725:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 727:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(728);
      END_STATE();
    case 728:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(729);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(730);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(731);
      END_STATE();
    case 731:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 733:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(734);
      END_STATE();
    case 734:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(735);
      END_STATE();
    case 735:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(736);
      END_STATE();
    case 736:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(742);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(749);
      END_STATE();
    case 739:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(740);
      END_STATE();
    case 740:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 742:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(743);
      END_STATE();
    case 743:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(744);
      END_STATE();
    case 744:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(745);
      END_STATE();
    case 745:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(746);
      END_STATE();
    case 746:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(747);
      END_STATE();
    case 747:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(748);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(750);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(751);
      END_STATE();
    case 751:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(752);
      END_STATE();
    case 752:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(753);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(755);
      END_STATE();
    case 755:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(756);
      END_STATE();
    case 756:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(757);
      END_STATE();
    case 757:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(758);
      END_STATE();
    case 758:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 760:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(762);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(763);
      END_STATE();
    case 763:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(764);
      END_STATE();
    case 764:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(765);
      END_STATE();
    case 765:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(766);
      END_STATE();
    case 766:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(767);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 768:
      if (lookahead == '\n')
        SKIP(768);
      if (lookahead == '!')
        ADVANCE(769);
      if (lookahead == '%')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(827);
      if (lookahead == ')')
        ADVANCE(828);
      if (lookahead == '*')
        ADVANCE(829);
      if (lookahead == '+')
        ADVANCE(830);
      if (lookahead == ',')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(832);
      if (lookahead == '/')
        ADVANCE(833);
      if (lookahead == ':')
        ADVANCE(834);
      if (lookahead == '<')
        ADVANCE(835);
      if (lookahead == '=')
        ADVANCE(836);
      if (lookahead == '>')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
      if (lookahead != 0)
        ADVANCE(852);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(770);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(774);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(779);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(784);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(789);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(778);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(777);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(780);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(781);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(788);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(794);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(793);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(797);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 799:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(800);
      END_STATE();
    case 800:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(801);
      END_STATE();
    case 801:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(802);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 803:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(804);
      END_STATE();
    case 804:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(807);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(806);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 808:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(811);
      END_STATE();
    case 809:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(810);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 811:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 813:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(814);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(816);
      END_STATE();
    case 814:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(815);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 816:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 818:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(819);
      END_STATE();
    case 819:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(823);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(821);
      END_STATE();
    case 821:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(822);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 824:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(825);
      END_STATE();
    case 825:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        SKIP(768);
      if (lookahead == '!')
        ADVANCE(769);
      if (lookahead == '%')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(827);
      if (lookahead == ')')
        ADVANCE(828);
      if (lookahead == '*')
        ADVANCE(829);
      if (lookahead == '+')
        ADVANCE(830);
      if (lookahead == ',')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(832);
      if (lookahead == '/')
        ADVANCE(833);
      if (lookahead == ':')
        ADVANCE(834);
      if (lookahead == '<')
        ADVANCE(835);
      if (lookahead == '=')
        ADVANCE(836);
      if (lookahead == '>')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(839);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(841);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(842);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(845);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(848);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(851);
      if (lookahead != 0)
        ADVANCE(852);
      END_STATE();
    case 839:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(840);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 840:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(801);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(819);
      END_STATE();
    case 841:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(804);
      END_STATE();
    case 842:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(843);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(811);
      END_STATE();
    case 843:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(810);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(807);
      END_STATE();
    case 845:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(846);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(816);
      END_STATE();
    case 846:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(815);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(807);
      END_STATE();
    case 848:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(849);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 849:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(823);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(807);
      END_STATE();
    case 851:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(825);
      END_STATE();
    case 852:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(318);
      if (lookahead == '!')
        ADVANCE(769);
      if (lookahead == '%')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(827);
      if (lookahead == '*')
        ADVANCE(829);
      if (lookahead == '+')
        ADVANCE(830);
      if (lookahead == ',')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(832);
      if (lookahead == '/')
        ADVANCE(833);
      if (lookahead == ';')
        ADVANCE(854);
      if (lookahead == '<')
        ADVANCE(835);
      if (lookahead == '=')
        ADVANCE(836);
      if (lookahead == '>')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(855);
      if (lookahead != 0)
        ADVANCE(852);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(318);
      if (lookahead == '!')
        ADVANCE(769);
      if (lookahead == '%')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(827);
      if (lookahead == '*')
        ADVANCE(829);
      if (lookahead == '+')
        ADVANCE(830);
      if (lookahead == ',')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(832);
      if (lookahead == '/')
        ADVANCE(833);
      if (lookahead == ';')
        ADVANCE(854);
      if (lookahead == '<')
        ADVANCE(835);
      if (lookahead == '=')
        ADVANCE(836);
      if (lookahead == '>')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(839);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(841);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(842);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(845);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(848);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(851);
      if (lookahead != 0)
        ADVANCE(852);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(856);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(857);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(858);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(856);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(857);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(858);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(648);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(859);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == ')')
        ADVANCE(860);
      if (lookahead == '*')
        ADVANCE(608);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == ',')
        ADVANCE(609);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == ':')
        ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(612);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(627);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(629);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(859);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == ')')
        ADVANCE(860);
      if (lookahead == '*')
        ADVANCE(608);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == ',')
        ADVANCE(609);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == ':')
        ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(612);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(625);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(626);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(628);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(629);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 863:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(864);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(870);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(863);
      END_STATE();
    case 864:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(865);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(867);
      END_STATE();
    case 866:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(867);
      END_STATE();
    case 867:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(868);
      END_STATE();
    case 868:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(869);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 870:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(871);
      END_STATE();
    case 871:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 873:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '=')
        ADVANCE(874);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(873);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(875);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(877);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(875);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(877);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(648);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(878);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(879);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(880);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 880:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(880);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(881);
      END_STATE();
    case 881:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(882);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(885);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(640);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(891);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(885);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(640);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(887);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(888);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(888);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 892:
      if (lookahead == '\n')
        SKIP(892);
      if (lookahead == '!')
        ADVANCE(769);
      if (lookahead == '%')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(827);
      if (lookahead == ')')
        ADVANCE(828);
      if (lookahead == '*')
        ADVANCE(829);
      if (lookahead == '+')
        ADVANCE(830);
      if (lookahead == ',')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(832);
      if (lookahead == '/')
        ADVANCE(833);
      if (lookahead == ':')
        ADVANCE(834);
      if (lookahead == '<')
        ADVANCE(835);
      if (lookahead == '=')
        ADVANCE(893);
      if (lookahead == '>')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(894);
      if (lookahead != 0)
        ADVANCE(852);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(803);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(824);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        SKIP(892);
      if (lookahead == '!')
        ADVANCE(769);
      if (lookahead == '%')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(827);
      if (lookahead == ')')
        ADVANCE(828);
      if (lookahead == '*')
        ADVANCE(829);
      if (lookahead == '+')
        ADVANCE(830);
      if (lookahead == ',')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(832);
      if (lookahead == '/')
        ADVANCE(833);
      if (lookahead == ':')
        ADVANCE(834);
      if (lookahead == '<')
        ADVANCE(835);
      if (lookahead == '=')
        ADVANCE(893);
      if (lookahead == '>')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(894);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(839);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(841);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(842);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(845);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(848);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(851);
      if (lookahead != 0)
        ADVANCE(852);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(896);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(897);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(898);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(895);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 896:
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
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 900:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(900);
      END_STATE();
    case 901:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(902);
      END_STATE();
    case 902:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(903);
      END_STATE();
    case 903:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(904);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(905);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(906);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(907);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(905);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(906);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(907);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(648);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(908);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(913);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(914);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(915);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 915:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(915);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(916);
      END_STATE();
    case 916:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(917);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    case 920:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(920);
      END_STATE();
    case 921:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(922);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(925);
      END_STATE();
    case 922:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(923);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(924);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 925:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(915);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(926);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(927);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(928);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(926);
      if (lookahead == '!')
        ADVANCE(320);
      if (lookahead == '\"')
        ADVANCE(333);
      if (lookahead == '\'')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(361);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(927);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(928);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(641);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(648);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(605);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(379);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(913);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(386);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 307},
  [2] = {.lex_state = 315},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 307},
  [5] = {.lex_state = 307},
  [6] = {.lex_state = 317},
  [7] = {.lex_state = 307},
  [8] = {.lex_state = 317},
  [9] = {.lex_state = 319},
  [10] = {.lex_state = 319},
  [11] = {.lex_state = 319},
  [12] = {.lex_state = 317},
  [13] = {.lex_state = 607},
  [14] = {.lex_state = 633},
  [15] = {.lex_state = 607},
  [16] = {.lex_state = 607},
  [17] = {.lex_state = 315},
  [18] = {.lex_state = 607},
  [19] = {.lex_state = 607},
  [20] = {.lex_state = 315},
  [21] = {.lex_state = 315},
  [22] = {.lex_state = 317},
  [23] = {.lex_state = 315},
  [24] = {.lex_state = 315},
  [25] = {.lex_state = 649},
  [26] = {.lex_state = 315},
  [27] = {.lex_state = 652},
  [28] = {.lex_state = 315},
  [29] = {.lex_state = 607},
  [30] = {.lex_state = 607},
  [31] = {.lex_state = 653},
  [32] = {.lex_state = 768},
  [33] = {.lex_state = 768},
  [34] = {.lex_state = 768},
  [35] = {.lex_state = 319},
  [36] = {.lex_state = 317},
  [37] = {.lex_state = 607},
  [38] = {.lex_state = 607},
  [39] = {.lex_state = 633},
  [40] = {.lex_state = 317},
  [41] = {.lex_state = 317},
  [42] = {.lex_state = 317},
  [43] = {.lex_state = 768},
  [44] = {.lex_state = 853},
  [45] = {.lex_state = 319},
  [46] = {.lex_state = 856},
  [47] = {.lex_state = 317},
  [48] = {.lex_state = 319},
  [49] = {.lex_state = 856},
  [50] = {.lex_state = 652},
  [51] = {.lex_state = 307},
  [52] = {.lex_state = 307},
  [53] = {.lex_state = 315},
  [54] = {.lex_state = 859},
  [55] = {.lex_state = 607},
  [56] = {.lex_state = 607},
  [57] = {.lex_state = 863},
  [58] = {.lex_state = 607},
  [59] = {.lex_state = 607},
  [60] = {.lex_state = 768},
  [61] = {.lex_state = 768},
  [62] = {.lex_state = 768},
  [63] = {.lex_state = 315},
  [64] = {.lex_state = 315},
  [65] = {.lex_state = 652},
  [66] = {.lex_state = 315},
  [67] = {.lex_state = 317},
  [68] = {.lex_state = 317},
  [69] = {.lex_state = 317},
  [70] = {.lex_state = 607},
  [71] = {.lex_state = 607},
  [72] = {.lex_state = 607},
  [73] = {.lex_state = 853},
  [74] = {.lex_state = 853},
  [75] = {.lex_state = 853},
  [76] = {.lex_state = 853},
  [77] = {.lex_state = 317},
  [78] = {.lex_state = 317},
  [79] = {.lex_state = 873},
  [80] = {.lex_state = 875},
  [81] = {.lex_state = 317},
  [82] = {.lex_state = 875},
  [83] = {.lex_state = 607},
  [84] = {.lex_state = 885},
  [85] = {.lex_state = 768},
  [86] = {.lex_state = 768},
  [87] = {.lex_state = 768},
  [88] = {.lex_state = 652},
  [89] = {.lex_state = 315},
  [90] = {.lex_state = 859},
  [91] = {.lex_state = 853},
  [92] = {.lex_state = 319},
  [93] = {.lex_state = 653},
  [94] = {.lex_state = 607},
  [95] = {.lex_state = 853},
  [96] = {.lex_state = 317},
  [97] = {.lex_state = 768},
  [98] = {.lex_state = 652},
  [99] = {.lex_state = 853},
  [100] = {.lex_state = 607},
  [101] = {.lex_state = 317},
  [102] = {.lex_state = 317},
  [103] = {.lex_state = 853},
  [104] = {.lex_state = 856},
  [105] = {.lex_state = 856},
  [106] = {.lex_state = 607},
  [107] = {.lex_state = 607},
  [108] = {.lex_state = 607},
  [109] = {.lex_state = 607},
  [110] = {.lex_state = 607},
  [111] = {.lex_state = 607},
  [112] = {.lex_state = 607},
  [113] = {.lex_state = 607},
  [114] = {.lex_state = 607},
  [115] = {.lex_state = 607},
  [116] = {.lex_state = 607},
  [117] = {.lex_state = 319},
  [118] = {.lex_state = 856},
  [119] = {.lex_state = 652},
  [120] = {.lex_state = 307},
  [121] = {.lex_state = 317},
  [122] = {.lex_state = 856},
  [123] = {.lex_state = 317},
  [124] = {.lex_state = 607},
  [125] = {.lex_state = 607},
  [126] = {.lex_state = 873},
  [127] = {.lex_state = 607},
  [128] = {.lex_state = 607},
  [129] = {.lex_state = 607},
  [130] = {.lex_state = 859},
  [131] = {.lex_state = 892},
  [132] = {.lex_state = 768},
  [133] = {.lex_state = 873},
  [134] = {.lex_state = 873},
  [135] = {.lex_state = 768},
  [136] = {.lex_state = 768},
  [137] = {.lex_state = 895},
  [138] = {.lex_state = 859},
  [139] = {.lex_state = 768},
  [140] = {.lex_state = 607},
  [141] = {.lex_state = 768},
  [142] = {.lex_state = 607},
  [143] = {.lex_state = 607},
  [144] = {.lex_state = 607},
  [145] = {.lex_state = 607},
  [146] = {.lex_state = 607},
  [147] = {.lex_state = 607},
  [148] = {.lex_state = 607},
  [149] = {.lex_state = 607},
  [150] = {.lex_state = 873},
  [151] = {.lex_state = 873},
  [152] = {.lex_state = 873},
  [153] = {.lex_state = 873},
  [154] = {.lex_state = 315},
  [155] = {.lex_state = 652},
  [156] = {.lex_state = 859},
  [157] = {.lex_state = 317},
  [158] = {.lex_state = 768},
  [159] = {.lex_state = 768},
  [160] = {.lex_state = 768},
  [161] = {.lex_state = 853},
  [162] = {.lex_state = 853},
  [163] = {.lex_state = 607},
  [164] = {.lex_state = 607},
  [165] = {.lex_state = 607},
  [166] = {.lex_state = 607},
  [167] = {.lex_state = 607},
  [168] = {.lex_state = 607},
  [169] = {.lex_state = 607},
  [170] = {.lex_state = 607},
  [171] = {.lex_state = 607},
  [172] = {.lex_state = 607},
  [173] = {.lex_state = 875},
  [174] = {.lex_state = 652},
  [175] = {.lex_state = 633},
  [176] = {.lex_state = 317},
  [177] = {.lex_state = 853},
  [178] = {.lex_state = 875},
  [179] = {.lex_state = 768},
  [180] = {.lex_state = 652},
  [181] = {.lex_state = 633},
  [182] = {.lex_state = 317},
  [183] = {.lex_state = 853},
  [184] = {.lex_state = 317},
  [185] = {.lex_state = 607},
  [186] = {.lex_state = 900},
  [187] = {.lex_state = 853},
  [188] = {.lex_state = 768},
  [189] = {.lex_state = 873},
  [190] = {.lex_state = 607},
  [191] = {.lex_state = 317},
  [192] = {.lex_state = 607},
  [193] = {.lex_state = 652},
  [194] = {.lex_state = 607},
  [195] = {.lex_state = 607},
  [196] = {.lex_state = 317},
  [197] = {.lex_state = 856},
  [198] = {.lex_state = 768},
  [199] = {.lex_state = 853},
  [200] = {.lex_state = 853},
  [201] = {.lex_state = 768},
  [202] = {.lex_state = 768},
  [203] = {.lex_state = 768},
  [204] = {.lex_state = 768},
  [205] = {.lex_state = 768},
  [206] = {.lex_state = 768},
  [207] = {.lex_state = 768},
  [208] = {.lex_state = 768},
  [209] = {.lex_state = 317},
  [210] = {.lex_state = 307},
  [211] = {.lex_state = 652},
  [212] = {.lex_state = 317},
  [213] = {.lex_state = 768},
  [214] = {.lex_state = 768},
  [215] = {.lex_state = 768},
  [216] = {.lex_state = 607},
  [217] = {.lex_state = 768},
  [218] = {.lex_state = 859},
  [219] = {.lex_state = 859},
  [220] = {.lex_state = 607},
  [221] = {.lex_state = 607},
  [222] = {.lex_state = 607},
  [223] = {.lex_state = 607},
  [224] = {.lex_state = 607},
  [225] = {.lex_state = 607},
  [226] = {.lex_state = 607},
  [227] = {.lex_state = 607},
  [228] = {.lex_state = 607},
  [229] = {.lex_state = 607},
  [230] = {.lex_state = 859},
  [231] = {.lex_state = 873},
  [232] = {.lex_state = 607},
  [233] = {.lex_state = 873},
  [234] = {.lex_state = 768},
  [235] = {.lex_state = 768},
  [236] = {.lex_state = 873},
  [237] = {.lex_state = 768},
  [238] = {.lex_state = 768},
  [239] = {.lex_state = 768},
  [240] = {.lex_state = 768},
  [241] = {.lex_state = 768},
  [242] = {.lex_state = 768},
  [243] = {.lex_state = 768},
  [244] = {.lex_state = 768},
  [245] = {.lex_state = 768},
  [246] = {.lex_state = 607},
  [247] = {.lex_state = 315},
  [248] = {.lex_state = 317},
  [249] = {.lex_state = 873},
  [250] = {.lex_state = 315},
  [251] = {.lex_state = 859},
  [252] = {.lex_state = 873},
  [253] = {.lex_state = 652},
  [254] = {.lex_state = 652},
  [255] = {.lex_state = 317},
  [256] = {.lex_state = 768},
  [257] = {.lex_state = 873},
  [258] = {.lex_state = 895},
  [259] = {.lex_state = 853},
  [260] = {.lex_state = 853},
  [261] = {.lex_state = 853},
  [262] = {.lex_state = 853},
  [263] = {.lex_state = 853},
  [264] = {.lex_state = 853},
  [265] = {.lex_state = 853},
  [266] = {.lex_state = 853},
  [267] = {.lex_state = 853},
  [268] = {.lex_state = 853},
  [269] = {.lex_state = 607},
  [270] = {.lex_state = 607},
  [271] = {.lex_state = 768},
  [272] = {.lex_state = 652},
  [273] = {.lex_state = 875},
  [274] = {.lex_state = 317},
  [275] = {.lex_state = 317},
  [276] = {.lex_state = 317},
  [277] = {.lex_state = 853},
  [278] = {.lex_state = 875},
  [279] = {.lex_state = 875},
  [280] = {.lex_state = 885},
  [281] = {.lex_state = 905},
  [282] = {.lex_state = 317},
  [283] = {.lex_state = 905},
  [284] = {.lex_state = 317},
  [285] = {.lex_state = 853},
  [286] = {.lex_state = 317},
  [287] = {.lex_state = 317},
  [288] = {.lex_state = 875},
  [289] = {.lex_state = 768},
  [290] = {.lex_state = 652},
  [291] = {.lex_state = 853},
  [292] = {.lex_state = 873},
  [293] = {.lex_state = 653},
  [294] = {.lex_state = 607},
  [295] = {.lex_state = 317},
  [296] = {.lex_state = 607},
  [297] = {.lex_state = 853},
  [298] = {.lex_state = 652},
  [299] = {.lex_state = 853},
  [300] = {.lex_state = 652},
  [301] = {.lex_state = 607},
  [302] = {.lex_state = 607},
  [303] = {.lex_state = 853},
  [304] = {.lex_state = 853},
  [305] = {.lex_state = 307},
  [306] = {.lex_state = 317},
  [307] = {.lex_state = 652},
  [308] = {.lex_state = 607},
  [309] = {.lex_state = 607},
  [310] = {.lex_state = 607},
  [311] = {.lex_state = 768},
  [312] = {.lex_state = 607},
  [313] = {.lex_state = 873},
  [314] = {.lex_state = 768},
  [315] = {.lex_state = 873},
  [316] = {.lex_state = 768},
  [317] = {.lex_state = 873},
  [318] = {.lex_state = 768},
  [319] = {.lex_state = 768},
  [320] = {.lex_state = 768},
  [321] = {.lex_state = 768},
  [322] = {.lex_state = 768},
  [323] = {.lex_state = 768},
  [324] = {.lex_state = 768},
  [325] = {.lex_state = 768},
  [326] = {.lex_state = 768},
  [327] = {.lex_state = 768},
  [328] = {.lex_state = 607},
  [329] = {.lex_state = 873},
  [330] = {.lex_state = 768},
  [331] = {.lex_state = 768},
  [332] = {.lex_state = 873},
  [333] = {.lex_state = 768},
  [334] = {.lex_state = 873},
  [335] = {.lex_state = 317},
  [336] = {.lex_state = 873},
  [337] = {.lex_state = 873},
  [338] = {.lex_state = 873},
  [339] = {.lex_state = 873},
  [340] = {.lex_state = 768},
  [341] = {.lex_state = 873},
  [342] = {.lex_state = 317},
  [343] = {.lex_state = 873},
  [344] = {.lex_state = 873},
  [345] = {.lex_state = 768},
  [346] = {.lex_state = 768},
  [347] = {.lex_state = 607},
  [348] = {.lex_state = 607},
  [349] = {.lex_state = 607},
  [350] = {.lex_state = 607},
  [351] = {.lex_state = 607},
  [352] = {.lex_state = 607},
  [353] = {.lex_state = 607},
  [354] = {.lex_state = 607},
  [355] = {.lex_state = 607},
  [356] = {.lex_state = 607},
  [357] = {.lex_state = 317},
  [358] = {.lex_state = 652},
  [359] = {.lex_state = 875},
  [360] = {.lex_state = 905},
  [361] = {.lex_state = 652},
  [362] = {.lex_state = 315},
  [363] = {.lex_state = 652},
  [364] = {.lex_state = 633},
  [365] = {.lex_state = 317},
  [366] = {.lex_state = 920},
  [367] = {.lex_state = 920},
  [368] = {.lex_state = 853},
  [369] = {.lex_state = 905},
  [370] = {.lex_state = 920},
  [371] = {.lex_state = 317},
  [372] = {.lex_state = 875},
  [373] = {.lex_state = 900},
  [374] = {.lex_state = 317},
  [375] = {.lex_state = 853},
  [376] = {.lex_state = 607},
  [377] = {.lex_state = 317},
  [378] = {.lex_state = 607},
  [379] = {.lex_state = 607},
  [380] = {.lex_state = 853},
  [381] = {.lex_state = 853},
  [382] = {.lex_state = 607},
  [383] = {.lex_state = 607},
  [384] = {.lex_state = 607},
  [385] = {.lex_state = 607},
  [386] = {.lex_state = 607},
  [387] = {.lex_state = 607},
  [388] = {.lex_state = 607},
  [389] = {.lex_state = 607},
  [390] = {.lex_state = 607},
  [391] = {.lex_state = 307},
  [392] = {.lex_state = 317},
  [393] = {.lex_state = 768},
  [394] = {.lex_state = 768},
  [395] = {.lex_state = 607},
  [396] = {.lex_state = 607},
  [397] = {.lex_state = 607},
  [398] = {.lex_state = 607},
  [399] = {.lex_state = 607},
  [400] = {.lex_state = 607},
  [401] = {.lex_state = 607},
  [402] = {.lex_state = 607},
  [403] = {.lex_state = 607},
  [404] = {.lex_state = 768},
  [405] = {.lex_state = 607},
  [406] = {.lex_state = 768},
  [407] = {.lex_state = 315},
  [408] = {.lex_state = 652},
  [409] = {.lex_state = 873},
  [410] = {.lex_state = 873},
  [411] = {.lex_state = 873},
  [412] = {.lex_state = 317},
  [413] = {.lex_state = 853},
  [414] = {.lex_state = 853},
  [415] = {.lex_state = 768},
  [416] = {.lex_state = 768},
  [417] = {.lex_state = 768},
  [418] = {.lex_state = 768},
  [419] = {.lex_state = 768},
  [420] = {.lex_state = 768},
  [421] = {.lex_state = 768},
  [422] = {.lex_state = 768},
  [423] = {.lex_state = 768},
  [424] = {.lex_state = 317},
  [425] = {.lex_state = 652},
  [426] = {.lex_state = 920},
  [427] = {.lex_state = 905},
  [428] = {.lex_state = 920},
  [429] = {.lex_state = 317},
  [430] = {.lex_state = 900},
  [431] = {.lex_state = 926},
  [432] = {.lex_state = 317},
  [433] = {.lex_state = 926},
  [434] = {.lex_state = 317},
  [435] = {.lex_state = 853},
  [436] = {.lex_state = 905},
  [437] = {.lex_state = 905},
  [438] = {.lex_state = 920},
  [439] = {.lex_state = 652},
  [440] = {.lex_state = 905},
  [441] = {.lex_state = 317},
  [442] = {.lex_state = 853},
  [443] = {.lex_state = 853},
  [444] = {.lex_state = 853},
  [445] = {.lex_state = 853},
  [446] = {.lex_state = 853},
  [447] = {.lex_state = 853},
  [448] = {.lex_state = 853},
  [449] = {.lex_state = 853},
  [450] = {.lex_state = 853},
  [451] = {.lex_state = 307},
  [452] = {.lex_state = 768},
  [453] = {.lex_state = 768},
  [454] = {.lex_state = 768},
  [455] = {.lex_state = 768},
  [456] = {.lex_state = 768},
  [457] = {.lex_state = 768},
  [458] = {.lex_state = 768},
  [459] = {.lex_state = 768},
  [460] = {.lex_state = 768},
  [461] = {.lex_state = 768},
  [462] = {.lex_state = 873},
  [463] = {.lex_state = 873},
  [464] = {.lex_state = 652},
  [465] = {.lex_state = 873},
  [466] = {.lex_state = 873},
  [467] = {.lex_state = 607},
  [468] = {.lex_state = 317},
  [469] = {.lex_state = 652},
  [470] = {.lex_state = 920},
  [471] = {.lex_state = 920},
  [472] = {.lex_state = 652},
  [473] = {.lex_state = 926},
  [474] = {.lex_state = 633},
  [475] = {.lex_state = 317},
  [476] = {.lex_state = 853},
  [477] = {.lex_state = 926},
  [478] = {.lex_state = 905},
  [479] = {.lex_state = 317},
  [480] = {.lex_state = 905},
  [481] = {.lex_state = 853},
  [482] = {.lex_state = 317},
  [483] = {.lex_state = 652},
  [484] = {.lex_state = 920},
  [485] = {.lex_state = 317},
  [486] = {.lex_state = 905},
  [487] = {.lex_state = 926},
  [488] = {.lex_state = 317},
  [489] = {.lex_state = 853},
  [490] = {.lex_state = 926},
  [491] = {.lex_state = 926},
  [492] = {.lex_state = 920},
  [493] = {.lex_state = 317},
  [494] = {.lex_state = 652},
  [495] = {.lex_state = 905},
  [496] = {.lex_state = 905},
  [497] = {.lex_state = 926},
  [498] = {.lex_state = 920},
  [499] = {.lex_state = 317},
  [500] = {.lex_state = 905},
  [501] = {.lex_state = 652},
  [502] = {.lex_state = 317},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
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
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
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
    [sym__specification_part] = STATE(35),
    [sym_variable_declaration] = STATE(36),
    [sym_variable_modification] = STATE(36),
    [sym_intrinsic_type] = STATE(37),
    [sym_type_qualifier] = STATE(38),
    [sym_parameter_statement] = STATE(36),
    [sym_equivalence_statement] = STATE(36),
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat1] = STATE(45),
    [aux_sym_program_block_repeat2] = STATE(46),
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
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym__specification_part] = STATE(35),
    [sym_variable_declaration] = STATE(36),
    [sym_variable_modification] = STATE(36),
    [sym_intrinsic_type] = STATE(37),
    [sym_type_qualifier] = STATE(38),
    [sym_parameter_statement] = STATE(36),
    [sym_equivalence_statement] = STATE(36),
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat1] = STATE(48),
    [aux_sym_program_block_repeat2] = STATE(49),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(52),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [13] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_COLON_COLON] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [sym_number_literal] = ACTIONS(100),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(100),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [anon_sym_LPAREN] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [sym_block_label_start_expression] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(104),
    [sym__double_quoted_string] = ACTIONS(104),
    [sym__single_quoted_string] = ACTIONS(104),
    [sym_boolean_literal] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_COLON_COLON] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_number_literal] = ACTIONS(110),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [sym_argument_list] = STATE(56),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(116),
    [sym__single_quoted_string] = ACTIONS(116),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__expression] = STATE(62),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(124),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_COLON_COLON] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_number_literal] = ACTIONS(110),
    [sym__double_quoted_string] = ACTIONS(110),
    [sym__single_quoted_string] = ACTIONS(110),
    [sym_boolean_literal] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [sym_equivalence_set] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [sym_call_expression] = STATE(67),
    [sym_identifier] = ACTIONS(132),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(134),
    [sym__newline] = ACTIONS(134),
  },
  [23] = {
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [sym_statement_label] = STATE(68),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym__expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(134),
    [sym__newline] = ACTIONS(134),
  },
  [26] = {
    [sym_string_literal] = STATE(78),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [sym_loop_control_expression] = STATE(81),
    [sym__end_of_statement] = STATE(82),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [28] = {
    [sym_parenthesized_expression] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(158),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [sym__expression] = STATE(87),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(164),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_EQ_GT] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [34] = {
    [sym_argument_list] = STATE(91),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_EQ_GT] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_block_label_start_expression] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(182),
    [sym__single_quoted_string] = ACTIONS(182),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(182),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [sym__end_of_statement] = STATE(92),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [37] = {
    [sym__declaration_targets] = STATE(96),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COLON_COLON] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [sym__declaration_targets] = STATE(101),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [39] = {
    [sym_subroutine_call] = STATE(102),
    [sym_keyword_statement] = STATE(102),
    [sym_include_statement] = STATE(102),
    [sym_do_loop_statement] = STATE(102),
    [sym_if_statement] = STATE(102),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(102),
    [sym_pointer_assignment_expression] = STATE(102),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(103),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [sym__end_of_statement] = STATE(105),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
  },
  [41] = {
    [sym__end_of_statement] = STATE(92),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [42] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
  },
  [43] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_EQ_GT] = ACTIONS(200),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [sym__end_of_statement] = STATE(105),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
  },
  [45] = {
    [sym__specification_part] = STATE(35),
    [sym_variable_declaration] = STATE(36),
    [sym_variable_modification] = STATE(36),
    [sym_intrinsic_type] = STATE(37),
    [sym_type_qualifier] = STATE(38),
    [sym_parameter_statement] = STATE(36),
    [sym_equivalence_statement] = STATE(36),
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat1] = STATE(117),
    [aux_sym_program_block_repeat2] = STATE(49),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(40),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(118),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym__end_of_statement] = STATE(120),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [48] = {
    [sym__specification_part] = STATE(35),
    [sym_variable_declaration] = STATE(36),
    [sym_variable_modification] = STATE(36),
    [sym_intrinsic_type] = STATE(37),
    [sym_type_qualifier] = STATE(38),
    [sym_parameter_statement] = STATE(36),
    [sym_equivalence_statement] = STATE(36),
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat1] = STATE(117),
    [aux_sym_program_block_repeat2] = STATE(122),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(40),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(118),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [sym__end_of_statement] = STATE(120),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(228),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [sym_parenthesized_expression] = STATE(124),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(234),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [sym__expression] = STATE(132),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_keyword_argument] = STATE(133),
    [sym_array_slice] = STATE(133),
    [sym_assumed_size] = STATE(133),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_COLON_COLON] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [sym_number_literal] = ACTIONS(252),
    [sym__double_quoted_string] = ACTIONS(252),
    [sym__single_quoted_string] = ACTIONS(252),
    [sym_boolean_literal] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_COLON_COLON] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [sym_number_literal] = ACTIONS(258),
    [sym__double_quoted_string] = ACTIONS(258),
    [sym__single_quoted_string] = ACTIONS(258),
    [sym_boolean_literal] = ACTIONS(258),
    [sym_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(262),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [sym__expression] = STATE(135),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [sym__expression] = STATE(136),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [sym_argument_list] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [sym_parameter_assignment] = STATE(151),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(14),
  },
  [64] = {
    [sym_call_expression] = STATE(153),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [aux_sym_equivalence_statement_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(298),
    [sym__newline] = ACTIONS(298),
  },
  [66] = {
    [sym_argument_list] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(300),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(302),
    [sym__newline] = ACTIONS(302),
  },
  [68] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
  },
  [69] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [70] = {
    [sym__expression] = STATE(160),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(306),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [sym__expression] = STATE(161),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym__expression] = STATE(162),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(176),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_STAR_STAR] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(176),
    [sym__newline] = ACTIONS(176),
  },
  [75] = {
    [sym_argument_list] = STATE(91),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
  },
  [76] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
  },
  [77] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(176),
    [sym__newline] = ACTIONS(176),
  },
  [78] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
  },
  [79] = {
    [anon_sym_EQ] = ACTIONS(338),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
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
  [81] = {
    [sym__end_of_statement] = STATE(173),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [82] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(178),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [sym__expression] = STATE(179),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym_statement_label] = STATE(181),
    [sym_subroutine_call] = STATE(182),
    [sym_keyword_statement] = STATE(182),
    [sym_include_statement] = STATE(182),
    [sym_do_loop_statement] = STATE(182),
    [sym_if_statement] = STATE(182),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(182),
    [sym_pointer_assignment_expression] = STATE(182),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(183),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym_argument_list] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_EQ_GT] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym_EQ_GT] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_EQ_GT] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(202),
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
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym_loop_control_expression] = STATE(184),
    [sym__end_of_statement] = STATE(173),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [89] = {
    [sym_parenthesized_expression] = STATE(186),
    [anon_sym_LPAREN] = ACTIONS(356),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [sym__expression] = STATE(188),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_keyword_argument] = STATE(189),
    [sym_array_slice] = STATE(189),
    [sym_assumed_size] = STATE(189),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym_EQ_GT] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_GT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [92] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_block_label_start_expression] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(364),
    [sym__double_quoted_string] = ACTIONS(364),
    [sym__single_quoted_string] = ACTIONS(364),
    [sym_boolean_literal] = ACTIONS(364),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [sym_type_qualifier] = STATE(190),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__declaration_targets] = STATE(191),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [sym_argument_list] = STATE(91),
    [aux_sym__declaration_targets_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [96] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(376),
    [sym__newline] = ACTIONS(376),
  },
  [97] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_EQ_GT] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [aux_sym__declaration_targets_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [99] = {
    [aux_sym__declaration_targets_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [100] = {
    [sym__declaration_targets] = STATE(196),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
  },
  [102] = {
    [sym__end_of_statement] = STATE(197),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
  },
  [103] = {
    [sym__end_of_statement] = STATE(197),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
  },
  [104] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
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
  [105] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [sym_block_label_start_expression] = ACTIONS(386),
    [sym_number_literal] = ACTIONS(386),
    [sym__double_quoted_string] = ACTIONS(386),
    [sym__single_quoted_string] = ACTIONS(386),
    [sym_boolean_literal] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [sym__expression] = STATE(198),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym__expression] = STATE(199),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [sym__expression] = STATE(200),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__expression] = STATE(201),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [sym__expression] = STATE(202),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__expression] = STATE(204),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym__expression] = STATE(205),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym__expression] = STATE(207),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__specification_part] = STATE(35),
    [sym_variable_declaration] = STATE(36),
    [sym_variable_modification] = STATE(36),
    [sym_intrinsic_type] = STATE(37),
    [sym_type_qualifier] = STATE(38),
    [sym_parameter_statement] = STATE(36),
    [sym_equivalence_statement] = STATE(36),
    [sym_include_statement] = STATE(36),
    [aux_sym_program_block_repeat1] = STATE(117),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(399),
    [anon_sym_LPAREN] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [sym_block_label_start_expression] = ACTIONS(411),
    [sym_number_literal] = ACTIONS(411),
    [sym__double_quoted_string] = ACTIONS(411),
    [sym__single_quoted_string] = ACTIONS(411),
    [sym_boolean_literal] = ACTIONS(411),
    [sym_identifier] = ACTIONS(411),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(40),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(118),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [sym_block_label_start_expression] = ACTIONS(449),
    [sym_number_literal] = ACTIONS(452),
    [sym__double_quoted_string] = ACTIONS(455),
    [sym__single_quoted_string] = ACTIONS(455),
    [sym_boolean_literal] = ACTIONS(452),
    [sym_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym__end_of_statement] = STATE(210),
    [sym_identifier] = ACTIONS(461),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(463),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [sym__end_of_statement] = STATE(210),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(465),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [122] = {
    [sym_statement_label] = STATE(39),
    [sym_subroutine_call] = STATE(40),
    [sym_keyword_statement] = STATE(40),
    [sym_include_statement] = STATE(40),
    [sym_do_loop_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(40),
    [sym_pointer_assignment_expression] = STATE(40),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(44),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(118),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [sym__end_of_statement] = STATE(210),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(469),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [sym_number_literal] = ACTIONS(473),
    [sym__double_quoted_string] = ACTIONS(473),
    [sym__single_quoted_string] = ACTIONS(473),
    [sym_boolean_literal] = ACTIONS(473),
    [sym_identifier] = ACTIONS(473),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__expression] = STATE(213),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(477),
    [sym_number_literal] = ACTIONS(481),
    [sym__double_quoted_string] = ACTIONS(481),
    [sym__single_quoted_string] = ACTIONS(481),
    [sym_boolean_literal] = ACTIONS(481),
    [sym_identifier] = ACTIONS(481),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(214),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(215),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(217),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(483),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(485),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym_argument_list] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [aux_sym_argument_list_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [aux_sym_argument_list_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(519),
    [sym_comment] = ACTIONS(14),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(521),
    [sym_comment] = ACTIONS(14),
  },
  [135] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(272),
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
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [sym_number_literal] = ACTIONS(523),
    [sym_identifier] = ACTIONS(525),
    [sym_comment] = ACTIONS(14),
  },
  [138] = {
    [sym__expression] = STATE(235),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_keyword_argument] = STATE(236),
    [sym_array_slice] = STATE(236),
    [sym_assumed_size] = STATE(236),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(527),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_STAR] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_EQ] = ACTIONS(529),
    [anon_sym_EQ_GT] = ACTIONS(531),
    [anon_sym_PERCENT] = ACTIONS(529),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(529),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(529),
    [anon_sym_LT_EQ] = ACTIONS(531),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(529),
    [anon_sym_GT_EQ] = ACTIONS(531),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(529),
    [anon_sym_EQ_EQ] = ACTIONS(531),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(529),
    [anon_sym_SLASH_EQ] = ACTIONS(531),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(529),
    [anon_sym_SLASH_SLASH] = ACTIONS(531),
    [anon_sym_PLUS] = ACTIONS(529),
    [anon_sym_DASH] = ACTIONS(529),
    [anon_sym_SLASH] = ACTIONS(529),
    [anon_sym_STAR_STAR] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(529),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [sym__expression] = STATE(237),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_STAR] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_EQ] = ACTIONS(533),
    [anon_sym_EQ_GT] = ACTIONS(535),
    [anon_sym_PERCENT] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_LT_EQ] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_GT_EQ] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_EQ_EQ] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_SLASH_EQ] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_SLASH_SLASH] = ACTIONS(535),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(533),
    [anon_sym_SLASH] = ACTIONS(533),
    [anon_sym_STAR_STAR] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(533),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [sym__expression] = STATE(238),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [sym__expression] = STATE(239),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__expression] = STATE(240),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [sym__expression] = STATE(241),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym__expression] = STATE(242),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [sym__expression] = STATE(243),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym__expression] = STATE(244),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [sym__expression] = STATE(245),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [anon_sym_EQ] = ACTIONS(539),
    [sym_comment] = ACTIONS(14),
  },
  [151] = {
    [aux_sym_parameter_statement_repeat1] = STATE(249),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(543),
    [sym_comment] = ACTIONS(14),
  },
  [152] = {
    [sym_argument_list] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(547),
    [sym_comment] = ACTIONS(14),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(545),
    [sym_comment] = ACTIONS(14),
  },
  [154] = {
    [sym_equivalence_set] = STATE(253),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(14),
  },
  [155] = {
    [aux_sym_equivalence_statement_repeat1] = STATE(254),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(549),
    [sym__newline] = ACTIONS(549),
  },
  [156] = {
    [sym__expression] = STATE(256),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_keyword_argument] = STATE(257),
    [sym_array_slice] = STATE(257),
    [sym_assumed_size] = STATE(257),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(551),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [sym_argument_list] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
  },
  [162] = {
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(320),
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
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_STAR_STAR] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
  },
  [163] = {
    [sym__expression] = STATE(260),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym__expression] = STATE(261),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [sym__expression] = STATE(262),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [sym__expression] = STATE(263),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [sym__expression] = STATE(264),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym__expression] = STATE(265),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [sym__expression] = STATE(266),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [sym__expression] = STATE(267),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym__expression] = STATE(268),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [sym__expression] = STATE(271),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(273),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym__block_label] = STATE(275),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [175] = {
    [sym_subroutine_call] = STATE(276),
    [sym_keyword_statement] = STATE(276),
    [sym_include_statement] = STATE(276),
    [sym_do_loop_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(276),
    [sym_pointer_assignment_expression] = STATE(276),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(277),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [sym__end_of_statement] = STATE(278),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [177] = {
    [sym__end_of_statement] = STATE(278),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [178] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(279),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [179] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [sym__block_label] = STATE(282),
    [sym__end_of_statement] = STATE(283),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [181] = {
    [sym_subroutine_call] = STATE(284),
    [sym_keyword_statement] = STATE(284),
    [sym_include_statement] = STATE(284),
    [sym_do_loop_statement] = STATE(284),
    [sym_if_statement] = STATE(284),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(284),
    [sym_pointer_assignment_expression] = STATE(284),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(285),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [sym__end_of_statement] = STATE(287),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(571),
    [sym__newline] = ACTIONS(571),
  },
  [183] = {
    [sym__end_of_statement] = STATE(287),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(571),
    [sym__newline] = ACTIONS(571),
  },
  [184] = {
    [sym__end_of_statement] = STATE(288),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [185] = {
    [sym__expression] = STATE(289),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(573),
    [sym_comment] = ACTIONS(14),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_STAR] = ACTIONS(481),
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_EQ_GT] = ACTIONS(481),
    [anon_sym_PERCENT] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT_EQ] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_GT_EQ] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_EQ_EQ] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_SLASH_EQ] = ACTIONS(481),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_SLASH_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(481),
    [anon_sym_DASH] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_STAR_STAR] = ACTIONS(481),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(481),
    [sym__newline] = ACTIONS(481),
  },
  [188] = {
    [aux_sym_argument_list_repeat1] = STATE(292),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [aux_sym_argument_list_repeat1] = STATE(292),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(577),
    [sym_comment] = ACTIONS(14),
  },
  [190] = {
    [sym__declaration_targets] = STATE(295),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_variable_declaration_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(581),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(583),
    [sym__newline] = ACTIONS(583),
  },
  [192] = {
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(298),
    [sym_pointer_assignment_expression] = STATE(298),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(299),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(585),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [aux_sym__declaration_targets_repeat1] = STATE(300),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(587),
    [sym__newline] = ACTIONS(587),
  },
  [194] = {
    [sym__expression] = STATE(303),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__expression] = STATE(304),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(593),
    [sym__newline] = ACTIONS(593),
  },
  [197] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_block_label_start_expression] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [sym__double_quoted_string] = ACTIONS(597),
    [sym__single_quoted_string] = ACTIONS(597),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_identifier] = ACTIONS(597),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(605),
    [sym__newline] = ACTIONS(605),
  },
  [200] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [201] = {
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(609),
    [anon_sym_EQ_GT] = ACTIONS(611),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_DASH] = ACTIONS(609),
    [anon_sym_SLASH] = ACTIONS(609),
    [anon_sym_STAR_STAR] = ACTIONS(611),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(615),
    [anon_sym_EQ_GT] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(615),
    [anon_sym_EQ_GT] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(615),
    [anon_sym_EQ_GT] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(621),
    [anon_sym_EQ_GT] = ACTIONS(623),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_LT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(627),
    [anon_sym_EQ_GT] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [sym__end_of_statement] = STATE(305),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(633),
    [sym_comment] = ACTIONS(14),
  },
  [211] = {
    [sym__end_of_statement] = STATE(305),
    [sym_identifier] = ACTIONS(635),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [212] = {
    [sym__end_of_statement] = STATE(305),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(637),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [213] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(495),
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
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(647),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [sym__expression] = STATE(314),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_assumed_size] = STATE(315),
    [sym_assumed_shape] = STATE(315),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(649),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [sym__expression] = STATE(316),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_keyword_argument] = STATE(317),
    [sym_array_slice] = STATE(317),
    [sym_assumed_size] = STATE(317),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [220] = {
    [sym__expression] = STATE(318),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [anon_sym_COMMA] = ACTIONS(651),
    [anon_sym_COLON_COLON] = ACTIONS(653),
    [anon_sym_LPAREN] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_PLUS] = ACTIONS(651),
    [anon_sym_DASH] = ACTIONS(651),
    [sym_number_literal] = ACTIONS(655),
    [sym__double_quoted_string] = ACTIONS(655),
    [sym__single_quoted_string] = ACTIONS(655),
    [sym_boolean_literal] = ACTIONS(655),
    [sym_identifier] = ACTIONS(655),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [sym__expression] = STATE(319),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [sym__expression] = STATE(320),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [224] = {
    [sym__expression] = STATE(321),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [sym__expression] = STATE(322),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__expression] = STATE(323),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [sym__expression] = STATE(324),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym__expression] = STATE(325),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__expression] = STATE(326),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym__expression] = STATE(327),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(645),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [aux_sym_argument_list_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(657),
    [sym_comment] = ACTIONS(14),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(659),
    [anon_sym_COLON_COLON] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_PLUS] = ACTIONS(659),
    [anon_sym_DASH] = ACTIONS(659),
    [sym_number_literal] = ACTIONS(663),
    [sym__double_quoted_string] = ACTIONS(663),
    [sym__single_quoted_string] = ACTIONS(663),
    [sym_boolean_literal] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(665),
    [sym_comment] = ACTIONS(14),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_STAR] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(479),
    [anon_sym_PERCENT] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_GT] = ACTIONS(477),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_LT_EQ] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_GT_EQ] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_EQ_EQ] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_SLASH_EQ] = ACTIONS(479),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(477),
    [anon_sym_SLASH_SLASH] = ACTIONS(479),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(477),
    [anon_sym_STAR_STAR] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(477),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [aux_sym_argument_list_repeat1] = STATE(332),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(667),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [aux_sym_argument_list_repeat1] = STATE(332),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(669),
    [sym_comment] = ACTIONS(14),
  },
  [237] = {
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_DASH] = ACTIONS(609),
    [anon_sym_SLASH] = ACTIONS(609),
    [anon_sym_STAR_STAR] = ACTIONS(611),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [240] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_LT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [sym__expression] = STATE(333),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [sym_parameter_assignment] = STATE(334),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(14),
  },
  [248] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(671),
    [sym__newline] = ACTIONS(671),
  },
  [249] = {
    [aux_sym_parameter_statement_repeat1] = STATE(336),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(673),
    [sym_comment] = ACTIONS(14),
  },
  [250] = {
    [sym_call_expression] = STATE(338),
    [sym_identifier] = ACTIONS(675),
    [sym_comment] = ACTIONS(14),
  },
  [251] = {
    [sym__expression] = STATE(340),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_keyword_argument] = STATE(341),
    [sym_array_slice] = STATE(341),
    [sym_assumed_size] = STATE(341),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(677),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [sym_comment] = ACTIONS(14),
  },
  [253] = {
    [anon_sym_COMMA] = ACTIONS(679),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(679),
    [sym__newline] = ACTIONS(679),
  },
  [254] = {
    [aux_sym_equivalence_statement_repeat1] = STATE(254),
    [anon_sym_COMMA] = ACTIONS(681),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(679),
    [sym__newline] = ACTIONS(679),
  },
  [255] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(481),
    [sym__newline] = ACTIONS(481),
  },
  [256] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(686),
    [sym_comment] = ACTIONS(14),
  },
  [258] = {
    [sym_number_literal] = ACTIONS(688),
    [sym_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(14),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_STAR] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_LT_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_GT_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_EQ_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_SLASH_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_SLASH_SLASH] = ACTIONS(537),
    [anon_sym_PLUS] = ACTIONS(537),
    [anon_sym_DASH] = ACTIONS(537),
    [anon_sym_SLASH] = ACTIONS(537),
    [anon_sym_STAR_STAR] = ACTIONS(537),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(537),
    [sym__newline] = ACTIONS(537),
  },
  [260] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
  },
  [261] = {
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(613),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(613),
    [sym__newline] = ACTIONS(613),
  },
  [262] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
  },
  [263] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
  },
  [264] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
  },
  [265] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(625),
    [sym__newline] = ACTIONS(625),
  },
  [266] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(631),
    [sym__newline] = ACTIONS(631),
  },
  [267] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
  },
  [268] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(603),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
  },
  [269] = {
    [sym__expression] = STATE(345),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [sym__expression] = STATE(346),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(704),
    [anon_sym_LT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_LT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_EQ_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [272] = {
    [sym__block_label] = STATE(357),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(716),
    [sym__newline] = ACTIONS(716),
  },
  [273] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(279),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [274] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(720),
    [sym__newline] = ACTIONS(720),
  },
  [275] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(716),
    [sym__newline] = ACTIONS(716),
  },
  [276] = {
    [sym__end_of_statement] = STATE(359),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [277] = {
    [sym__end_of_statement] = STATE(359),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [278] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [sym_block_label_start_expression] = ACTIONS(386),
    [sym_number_literal] = ACTIONS(386),
    [sym__double_quoted_string] = ACTIONS(386),
    [sym__single_quoted_string] = ACTIONS(386),
    [sym_boolean_literal] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(279),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [sym_block_label_start_expression] = ACTIONS(449),
    [sym_number_literal] = ACTIONS(452),
    [sym__double_quoted_string] = ACTIONS(455),
    [sym__single_quoted_string] = ACTIONS(455),
    [sym_boolean_literal] = ACTIONS(452),
    [sym_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(533),
    [sym_block_label_start_expression] = ACTIONS(537),
    [sym_number_literal] = ACTIONS(537),
    [sym__double_quoted_string] = ACTIONS(537),
    [sym__single_quoted_string] = ACTIONS(537),
    [sym_boolean_literal] = ACTIONS(537),
    [sym_identifier] = ACTIONS(537),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
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
  [282] = {
    [sym__end_of_statement] = STATE(360),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [283] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(367),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(369),
    [aux_sym__block_if_statement_repeat1] = STATE(370),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(722),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [sym__end_of_statement] = STATE(371),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(571),
    [sym__newline] = ACTIONS(571),
  },
  [285] = {
    [sym__end_of_statement] = STATE(371),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(571),
    [sym__newline] = ACTIONS(571),
  },
  [286] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [287] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(728),
    [sym__newline] = ACTIONS(728),
  },
  [288] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(372),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_PERCENT] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [290] = {
    [sym__block_label] = STATE(374),
    [sym__end_of_statement] = STATE(360),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [291] = {
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_STAR] = ACTIONS(655),
    [anon_sym_EQ] = ACTIONS(655),
    [anon_sym_EQ_GT] = ACTIONS(655),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_LT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_GT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_EQ_EQ] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_SLASH_EQ] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_SLASH_SLASH] = ACTIONS(655),
    [anon_sym_PLUS] = ACTIONS(655),
    [anon_sym_DASH] = ACTIONS(655),
    [anon_sym_SLASH] = ACTIONS(655),
    [anon_sym_STAR_STAR] = ACTIONS(655),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(655),
    [sym__newline] = ACTIONS(655),
  },
  [292] = {
    [aux_sym_argument_list_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(14),
  },
  [293] = {
    [sym_type_qualifier] = STATE(376),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(14),
  },
  [294] = {
    [sym__declaration_targets] = STATE(377),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(734),
    [sym__newline] = ACTIONS(734),
  },
  [296] = {
    [sym__declaration_targets] = STATE(377),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_variable_declaration_repeat1] = STATE(379),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [297] = {
    [sym_argument_list] = STATE(91),
    [anon_sym_COMMA] = ACTIONS(738),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(738),
    [sym__newline] = ACTIONS(738),
  },
  [298] = {
    [anon_sym_COMMA] = ACTIONS(738),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(738),
    [sym__newline] = ACTIONS(738),
  },
  [299] = {
    [anon_sym_COMMA] = ACTIONS(738),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(738),
    [sym__newline] = ACTIONS(738),
  },
  [300] = {
    [aux_sym__declaration_targets_repeat1] = STATE(300),
    [anon_sym_COMMA] = ACTIONS(740),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(738),
    [sym__newline] = ACTIONS(738),
  },
  [301] = {
    [sym__expression] = STATE(380),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [302] = {
    [sym__expression] = STATE(381),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(751),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(751),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(605),
    [sym__newline] = ACTIONS(605),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(751),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(751),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [305] = {
    [ts_builtin_sym_end] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(761),
    [sym_comment] = ACTIONS(14),
  },
  [306] = {
    [sym__end_of_statement] = STATE(391),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [307] = {
    [sym__end_of_statement] = STATE(391),
    [sym_identifier] = ACTIONS(763),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_COLON_COLON] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(533),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(533),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(537),
    [sym__double_quoted_string] = ACTIONS(537),
    [sym__single_quoted_string] = ACTIONS(537),
    [sym_boolean_literal] = ACTIONS(537),
    [sym_identifier] = ACTIONS(537),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [sym__expression] = STATE(393),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [sym__expression] = STATE(394),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [311] = {
    [anon_sym_COMMA] = ACTIONS(765),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(765),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [sym__expression] = STATE(404),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_RPAREN] = ACTIONS(789),
    [sym_comment] = ACTIONS(14),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(791),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(793),
    [sym_comment] = ACTIONS(14),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(795),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(797),
    [anon_sym_RPAREN] = ACTIONS(797),
    [sym_comment] = ACTIONS(14),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(599),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_DASH] = ACTIONS(609),
    [anon_sym_SLASH] = ACTIONS(609),
    [anon_sym_STAR_STAR] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(609),
    [sym_comment] = ACTIONS(34),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_LT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(621),
    [sym_comment] = ACTIONS(34),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(627),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(599),
    [sym_comment] = ACTIONS(34),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(599),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(765),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(765),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(799),
    [sym_comment] = ACTIONS(34),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(801),
    [anon_sym_COLON_COLON] = ACTIONS(803),
    [anon_sym_LPAREN] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_PLUS] = ACTIONS(801),
    [anon_sym_DASH] = ACTIONS(801),
    [sym_number_literal] = ACTIONS(805),
    [sym__double_quoted_string] = ACTIONS(805),
    [sym__single_quoted_string] = ACTIONS(805),
    [sym_boolean_literal] = ACTIONS(805),
    [sym_identifier] = ACTIONS(805),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [aux_sym_argument_list_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(807),
    [anon_sym_RPAREN] = ACTIONS(797),
    [sym_comment] = ACTIONS(14),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_STAR] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_EQ] = ACTIONS(810),
    [anon_sym_EQ_GT] = ACTIONS(812),
    [anon_sym_PERCENT] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_LT] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_GT] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_LT_EQ] = ACTIONS(812),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_GT_EQ] = ACTIONS(812),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_EQ_EQ] = ACTIONS(812),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_SLASH_EQ] = ACTIONS(812),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_SLASH_SLASH] = ACTIONS(812),
    [anon_sym_PLUS] = ACTIONS(810),
    [anon_sym_DASH] = ACTIONS(810),
    [anon_sym_SLASH] = ACTIONS(810),
    [anon_sym_STAR_STAR] = ACTIONS(812),
    [anon_sym_COLON] = ACTIONS(810),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(651),
    [anon_sym_STAR] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_EQ] = ACTIONS(651),
    [anon_sym_EQ_GT] = ACTIONS(653),
    [anon_sym_PERCENT] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_LT] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_GT] = ACTIONS(651),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_LT_EQ] = ACTIONS(653),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_GT_EQ] = ACTIONS(653),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_EQ_EQ] = ACTIONS(653),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_SLASH_EQ] = ACTIONS(653),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(651),
    [anon_sym_SLASH_SLASH] = ACTIONS(653),
    [anon_sym_PLUS] = ACTIONS(651),
    [anon_sym_DASH] = ACTIONS(651),
    [anon_sym_SLASH] = ACTIONS(651),
    [anon_sym_STAR_STAR] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(651),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [aux_sym_argument_list_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(14),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(820),
    [anon_sym_RPAREN] = ACTIONS(820),
    [sym_comment] = ACTIONS(14),
  },
  [335] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(822),
    [sym__newline] = ACTIONS(822),
  },
  [336] = {
    [aux_sym_parameter_statement_repeat1] = STATE(336),
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(820),
    [sym_comment] = ACTIONS(14),
  },
  [337] = {
    [sym_argument_list] = STATE(252),
    [aux_sym_equivalence_set_repeat1] = STATE(409),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(829),
    [sym_comment] = ACTIONS(14),
  },
  [338] = {
    [aux_sym_equivalence_set_repeat1] = STATE(409),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(829),
    [sym_comment] = ACTIONS(14),
  },
  [339] = {
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_comment] = ACTIONS(14),
  },
  [340] = {
    [aux_sym_argument_list_repeat1] = STATE(411),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_PERCENT] = ACTIONS(495),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(505),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_STAR_STAR] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [aux_sym_argument_list_repeat1] = STATE(411),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(833),
    [sym_comment] = ACTIONS(14),
  },
  [342] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(655),
    [sym__newline] = ACTIONS(655),
  },
  [343] = {
    [aux_sym_argument_list_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym_comment] = ACTIONS(14),
  },
  [344] = {
    [anon_sym_RPAREN] = ACTIONS(837),
    [sym_comment] = ACTIONS(14),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_LT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_EQ_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(696),
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
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [347] = {
    [sym__expression] = STATE(414),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [348] = {
    [sym__expression] = STATE(415),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [349] = {
    [sym__expression] = STATE(416),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [sym__expression] = STATE(417),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [sym__expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [sym__expression] = STATE(419),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [sym__expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [sym__expression] = STATE(421),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym__expression] = STATE(422),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [sym__expression] = STATE(423),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [358] = {
    [sym__block_label] = STATE(424),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [359] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_block_label_start_expression] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [sym__double_quoted_string] = ACTIONS(597),
    [sym__single_quoted_string] = ACTIONS(597),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_identifier] = ACTIONS(597),
    [sym_comment] = ACTIONS(34),
  },
  [360] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(426),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(427),
    [aux_sym__block_if_statement_repeat1] = STATE(428),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [sym__block_label] = STATE(429),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(843),
    [sym__newline] = ACTIONS(843),
  },
  [362] = {
    [sym_parenthesized_expression] = STATE(430),
    [anon_sym_LPAREN] = ACTIONS(356),
    [sym_comment] = ACTIONS(14),
  },
  [363] = {
    [sym__block_label] = STATE(432),
    [sym__end_of_statement] = STATE(433),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
  },
  [364] = {
    [sym_subroutine_call] = STATE(434),
    [sym_keyword_statement] = STATE(434),
    [sym_include_statement] = STATE(434),
    [sym_do_loop_statement] = STATE(434),
    [sym_if_statement] = STATE(434),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(434),
    [sym_pointer_assignment_expression] = STATE(434),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(435),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [365] = {
    [sym__end_of_statement] = STATE(436),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [366] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(849),
    [sym_comment] = ACTIONS(14),
  },
  [367] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(851),
    [sym_comment] = ACTIONS(14),
  },
  [368] = {
    [sym__end_of_statement] = STATE(436),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [369] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(426),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym__block_if_statement_repeat1] = STATE(428),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [370] = {
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(426),
    [aux_sym__block_if_statement_repeat1] = STATE(438),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(851),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [sym_comment] = ACTIONS(14),
  },
  [371] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(855),
    [sym__newline] = ACTIONS(855),
  },
  [372] = {
    [sym_statement_label] = STATE(175),
    [sym_subroutine_call] = STATE(176),
    [sym_keyword_statement] = STATE(176),
    [sym_include_statement] = STATE(176),
    [sym_do_loop_statement] = STATE(176),
    [sym_if_statement] = STATE(176),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(176),
    [sym_pointer_assignment_expression] = STATE(176),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(177),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(279),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(857),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [373] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(535),
    [sym_comment] = ACTIONS(14),
  },
  [374] = {
    [sym__end_of_statement] = STATE(440),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(805),
    [anon_sym_STAR] = ACTIONS(805),
    [anon_sym_EQ] = ACTIONS(805),
    [anon_sym_EQ_GT] = ACTIONS(805),
    [anon_sym_PERCENT] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_GT] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_LT_EQ] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_GT_EQ] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_EQ_EQ] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_SLASH_EQ] = ACTIONS(805),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_SLASH_SLASH] = ACTIONS(805),
    [anon_sym_PLUS] = ACTIONS(805),
    [anon_sym_DASH] = ACTIONS(805),
    [anon_sym_SLASH] = ACTIONS(805),
    [anon_sym_STAR_STAR] = ACTIONS(805),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(805),
    [sym__newline] = ACTIONS(805),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_LPAREN] = ACTIONS(859),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(859),
    [anon_sym_PLUS] = ACTIONS(859),
    [anon_sym_DASH] = ACTIONS(859),
    [sym_number_literal] = ACTIONS(863),
    [sym__double_quoted_string] = ACTIONS(863),
    [sym__single_quoted_string] = ACTIONS(863),
    [sym_boolean_literal] = ACTIONS(863),
    [sym_identifier] = ACTIONS(863),
    [sym_comment] = ACTIONS(34),
  },
  [377] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(865),
    [sym__newline] = ACTIONS(865),
  },
  [378] = {
    [sym__declaration_targets] = STATE(441),
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(98),
    [sym_pointer_assignment_expression] = STATE(98),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(99),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [379] = {
    [aux_sym_variable_declaration_repeat1] = STATE(379),
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_LPAREN] = ACTIONS(859),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(859),
    [anon_sym_PLUS] = ACTIONS(859),
    [anon_sym_DASH] = ACTIONS(859),
    [sym_number_literal] = ACTIONS(863),
    [sym__double_quoted_string] = ACTIONS(863),
    [sym__single_quoted_string] = ACTIONS(863),
    [sym_boolean_literal] = ACTIONS(863),
    [sym_identifier] = ACTIONS(863),
    [sym_comment] = ACTIONS(34),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
  },
  [381] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(745),
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
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_STAR_STAR] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
  },
  [382] = {
    [sym__expression] = STATE(442),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [383] = {
    [sym__expression] = STATE(443),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [384] = {
    [sym__expression] = STATE(444),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [385] = {
    [sym__expression] = STATE(445),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [386] = {
    [sym__expression] = STATE(446),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [387] = {
    [sym__expression] = STATE(447),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [388] = {
    [sym__expression] = STATE(448),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [389] = {
    [sym__expression] = STATE(449),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [390] = {
    [sym__expression] = STATE(450),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [391] = {
    [ts_builtin_sym_end] = ACTIONS(870),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(870),
    [sym_comment] = ACTIONS(14),
  },
  [392] = {
    [sym__end_of_statement] = STATE(451),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
  },
  [393] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [394] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(769),
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
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [sym__expression] = STATE(452),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [396] = {
    [sym__expression] = STATE(453),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [397] = {
    [sym__expression] = STATE(454),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [398] = {
    [sym__expression] = STATE(455),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [399] = {
    [sym__expression] = STATE(456),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [400] = {
    [sym__expression] = STATE(457),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [sym__expression] = STATE(458),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
    [sym__expression] = STATE(459),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [403] = {
    [sym__expression] = STATE(460),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(872),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(872),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
    [sym__expression] = STATE(461),
    [sym_parenthesized_expression] = STATE(32),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
    [anon_sym_COMMA] = ACTIONS(801),
    [anon_sym_STAR] = ACTIONS(801),
    [anon_sym_RPAREN] = ACTIONS(801),
    [anon_sym_EQ] = ACTIONS(801),
    [anon_sym_EQ_GT] = ACTIONS(803),
    [anon_sym_PERCENT] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_GT] = ACTIONS(801),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_LT_EQ] = ACTIONS(803),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_GT_EQ] = ACTIONS(803),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_EQ_EQ] = ACTIONS(803),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_SLASH_EQ] = ACTIONS(803),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(801),
    [anon_sym_SLASH_SLASH] = ACTIONS(803),
    [anon_sym_PLUS] = ACTIONS(801),
    [anon_sym_DASH] = ACTIONS(801),
    [anon_sym_SLASH] = ACTIONS(801),
    [anon_sym_STAR_STAR] = ACTIONS(803),
    [anon_sym_COLON] = ACTIONS(801),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
    [sym_call_expression] = STATE(463),
    [sym_identifier] = ACTIONS(874),
    [sym_comment] = ACTIONS(14),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(876),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(876),
    [sym__newline] = ACTIONS(876),
  },
  [409] = {
    [aux_sym_equivalence_set_repeat1] = STATE(465),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(878),
    [sym_comment] = ACTIONS(14),
  },
  [410] = {
    [anon_sym_COMMA] = ACTIONS(653),
    [anon_sym_RPAREN] = ACTIONS(653),
    [sym_comment] = ACTIONS(14),
  },
  [411] = {
    [aux_sym_argument_list_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(880),
    [sym_comment] = ACTIONS(14),
  },
  [412] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(805),
    [sym__newline] = ACTIONS(805),
  },
  [413] = {
    [anon_sym_COMMA] = ACTIONS(814),
    [anon_sym_STAR] = ACTIONS(814),
    [anon_sym_PERCENT] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_LT] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_GT] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_LT_EQ] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_GT_EQ] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_EQ_EQ] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_SLASH_EQ] = ACTIONS(814),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(814),
    [anon_sym_SLASH_SLASH] = ACTIONS(814),
    [anon_sym_PLUS] = ACTIONS(814),
    [anon_sym_DASH] = ACTIONS(814),
    [anon_sym_SLASH] = ACTIONS(814),
    [anon_sym_STAR_STAR] = ACTIONS(814),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(814),
    [sym__newline] = ACTIONS(814),
  },
  [414] = {
    [anon_sym_COMMA] = ACTIONS(882),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(751),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(751),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(884),
    [sym__newline] = ACTIONS(884),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [416] = {
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_DASH] = ACTIONS(609),
    [anon_sym_SLASH] = ACTIONS(609),
    [anon_sym_STAR_STAR] = ACTIONS(611),
    [sym_comment] = ACTIONS(34),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_LT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_EQ_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [418] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_LT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_EQ_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_LT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_GT_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_EQ_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_EQ] = ACTIONS(708),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(706),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_LT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(694),
    [anon_sym_STAR_STAR] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [423] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [424] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(886),
    [sym__newline] = ACTIONS(886),
  },
  [425] = {
    [sym__block_label] = STATE(468),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(888),
    [sym__newline] = ACTIONS(888),
  },
  [426] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(890),
    [sym_comment] = ACTIONS(14),
  },
  [427] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(470),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym__block_if_statement_repeat1] = STATE(471),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(892),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [428] = {
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(470),
    [aux_sym__block_if_statement_repeat1] = STATE(438),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(890),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [sym_comment] = ACTIONS(14),
  },
  [429] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(888),
    [sym__newline] = ACTIONS(888),
  },
  [430] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(894),
    [sym_comment] = ACTIONS(14),
  },
  [431] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
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
  [432] = {
    [sym__end_of_statement] = STATE(473),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
  },
  [433] = {
    [sym_statement_label] = STATE(474),
    [sym_subroutine_call] = STATE(475),
    [sym_keyword_statement] = STATE(475),
    [sym_include_statement] = STATE(475),
    [sym_do_loop_statement] = STATE(475),
    [sym_if_statement] = STATE(475),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(475),
    [sym_pointer_assignment_expression] = STATE(475),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(476),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(477),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(896),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [434] = {
    [sym__end_of_statement] = STATE(478),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [435] = {
    [sym__end_of_statement] = STATE(478),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [436] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [sym_block_label_start_expression] = ACTIONS(386),
    [sym_number_literal] = ACTIONS(386),
    [sym__double_quoted_string] = ACTIONS(386),
    [sym__single_quoted_string] = ACTIONS(386),
    [sym_boolean_literal] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [437] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [sym_block_label_start_expression] = ACTIONS(449),
    [sym_number_literal] = ACTIONS(452),
    [sym__double_quoted_string] = ACTIONS(455),
    [sym__single_quoted_string] = ACTIONS(455),
    [sym_boolean_literal] = ACTIONS(452),
    [sym_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(34),
  },
  [438] = {
    [sym_elseif_clause] = STATE(366),
    [aux_sym__block_if_statement_repeat1] = STATE(438),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(898),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(900),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [sym_comment] = ACTIONS(14),
  },
  [439] = {
    [sym__block_label] = STATE(479),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(886),
    [sym__newline] = ACTIONS(886),
  },
  [440] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(470),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(480),
    [aux_sym__block_if_statement_repeat1] = STATE(471),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(892),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [441] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(905),
    [sym__newline] = ACTIONS(905),
  },
  [442] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
  },
  [443] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(613),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(613),
    [sym__newline] = ACTIONS(613),
  },
  [444] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_EQ] = ACTIONS(753),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(753),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
  },
  [447] = {
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(625),
    [sym__newline] = ACTIONS(625),
  },
  [448] = {
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(631),
    [sym__newline] = ACTIONS(631),
  },
  [449] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(743),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(743),
    [anon_sym_STAR_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
  },
  [450] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(603),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
  },
  [451] = {
    [ts_builtin_sym_end] = ACTIONS(907),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(907),
    [sym_comment] = ACTIONS(14),
  },
  [452] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_LT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_GT_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_EQ] = ACTIONS(611),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(609),
    [anon_sym_SLASH_SLASH] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_DASH] = ACTIONS(609),
    [anon_sym_SLASH] = ACTIONS(609),
    [anon_sym_STAR_STAR] = ACTIONS(611),
    [sym_comment] = ACTIONS(34),
  },
  [454] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [455] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_LT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_GT_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [458] = {
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(627),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [459] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [460] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_LT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_GT_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_EQ_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_EQ] = ACTIONS(601),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_SLASH_SLASH] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_STAR_STAR] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [461] = {
    [anon_sym_COMMA] = ACTIONS(909),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_PERCENT] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(779),
    [anon_sym_SLASH_SLASH] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(785),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(787),
    [sym_comment] = ACTIONS(34),
  },
  [462] = {
    [sym_argument_list] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(911),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(911),
    [sym_comment] = ACTIONS(14),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(911),
    [anon_sym_RPAREN] = ACTIONS(911),
    [sym_comment] = ACTIONS(14),
  },
  [464] = {
    [anon_sym_COMMA] = ACTIONS(913),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(913),
    [sym__newline] = ACTIONS(913),
  },
  [465] = {
    [aux_sym_equivalence_set_repeat1] = STATE(465),
    [anon_sym_COMMA] = ACTIONS(915),
    [anon_sym_RPAREN] = ACTIONS(911),
    [sym_comment] = ACTIONS(14),
  },
  [466] = {
    [anon_sym_COMMA] = ACTIONS(803),
    [anon_sym_RPAREN] = ACTIONS(803),
    [sym_comment] = ACTIONS(14),
  },
  [467] = {
    [sym__expression] = STATE(481),
    [sym_parenthesized_expression] = STATE(73),
    [sym_derived_type_member_expression] = STATE(73),
    [sym_logical_expression] = STATE(73),
    [sym_relational_expression] = STATE(73),
    [sym_concatenation_expression] = STATE(73),
    [sym_math_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_complex_literal] = STATE(73),
    [sym_string_literal] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [sym_number_literal] = ACTIONS(146),
    [sym__double_quoted_string] = ACTIONS(148),
    [sym__single_quoted_string] = ACTIONS(148),
    [sym_boolean_literal] = ACTIONS(146),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [468] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(918),
    [sym__newline] = ACTIONS(918),
  },
  [469] = {
    [sym__block_label] = STATE(482),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(918),
    [sym__newline] = ACTIONS(918),
  },
  [470] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(920),
    [sym_comment] = ACTIONS(14),
  },
  [471] = {
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(484),
    [aux_sym__block_if_statement_repeat1] = STATE(438),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(920),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [sym_comment] = ACTIONS(14),
  },
  [472] = {
    [sym__block_label] = STATE(485),
    [sym__end_of_statement] = STATE(486),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [473] = {
    [sym_statement_label] = STATE(474),
    [sym_subroutine_call] = STATE(475),
    [sym_keyword_statement] = STATE(475),
    [sym_include_statement] = STATE(475),
    [sym_do_loop_statement] = STATE(475),
    [sym_if_statement] = STATE(475),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(475),
    [sym_pointer_assignment_expression] = STATE(475),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(476),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(487),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(922),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [474] = {
    [sym_subroutine_call] = STATE(488),
    [sym_keyword_statement] = STATE(488),
    [sym_include_statement] = STATE(488),
    [sym_do_loop_statement] = STATE(488),
    [sym_if_statement] = STATE(488),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(488),
    [sym_pointer_assignment_expression] = STATE(488),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(489),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [475] = {
    [sym__end_of_statement] = STATE(490),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
  },
  [476] = {
    [sym__end_of_statement] = STATE(490),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
  },
  [477] = {
    [sym_statement_label] = STATE(474),
    [sym_subroutine_call] = STATE(475),
    [sym_keyword_statement] = STATE(475),
    [sym_include_statement] = STATE(475),
    [sym_do_loop_statement] = STATE(475),
    [sym_if_statement] = STATE(475),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(475),
    [sym_pointer_assignment_expression] = STATE(475),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(476),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(491),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(922),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [478] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_block_label_start_expression] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [sym__double_quoted_string] = ACTIONS(597),
    [sym__single_quoted_string] = ACTIONS(597),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_identifier] = ACTIONS(597),
    [sym_comment] = ACTIONS(34),
  },
  [479] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(924),
    [sym__newline] = ACTIONS(924),
  },
  [480] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(484),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym__block_if_statement_repeat1] = STATE(492),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(926),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [481] = {
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(928),
    [sym__newline] = ACTIONS(928),
  },
  [482] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(930),
    [sym__newline] = ACTIONS(930),
  },
  [483] = {
    [sym__block_label] = STATE(493),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(930),
    [sym__newline] = ACTIONS(930),
  },
  [484] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(932),
    [sym_comment] = ACTIONS(14),
  },
  [485] = {
    [sym__end_of_statement] = STATE(495),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
  },
  [486] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(496),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [487] = {
    [sym_statement_label] = STATE(474),
    [sym_subroutine_call] = STATE(475),
    [sym_keyword_statement] = STATE(475),
    [sym_include_statement] = STATE(475),
    [sym_do_loop_statement] = STATE(475),
    [sym_if_statement] = STATE(475),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(475),
    [sym_pointer_assignment_expression] = STATE(475),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(476),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(491),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [488] = {
    [sym__end_of_statement] = STATE(497),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
  },
  [489] = {
    [sym__end_of_statement] = STATE(497),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
  },
  [490] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [sym_block_label_start_expression] = ACTIONS(386),
    [sym_number_literal] = ACTIONS(386),
    [sym__double_quoted_string] = ACTIONS(386),
    [sym__single_quoted_string] = ACTIONS(386),
    [sym_boolean_literal] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [491] = {
    [sym_statement_label] = STATE(474),
    [sym_subroutine_call] = STATE(475),
    [sym_keyword_statement] = STATE(475),
    [sym_include_statement] = STATE(475),
    [sym_do_loop_statement] = STATE(475),
    [sym_if_statement] = STATE(475),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(475),
    [sym_pointer_assignment_expression] = STATE(475),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(476),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(491),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [sym_block_label_start_expression] = ACTIONS(449),
    [sym_number_literal] = ACTIONS(452),
    [sym__double_quoted_string] = ACTIONS(455),
    [sym__single_quoted_string] = ACTIONS(455),
    [sym_boolean_literal] = ACTIONS(452),
    [sym_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(34),
  },
  [492] = {
    [sym_elseif_clause] = STATE(366),
    [sym_else_clause] = STATE(498),
    [aux_sym__block_if_statement_repeat1] = STATE(438),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(726),
    [sym_comment] = ACTIONS(14),
  },
  [493] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(938),
    [sym__newline] = ACTIONS(938),
  },
  [494] = {
    [sym__block_label] = STATE(499),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(938),
    [sym__newline] = ACTIONS(938),
  },
  [495] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(500),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [496] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [497] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_block_label_start_expression] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [sym__double_quoted_string] = ACTIONS(597),
    [sym__single_quoted_string] = ACTIONS(597),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_identifier] = ACTIONS(597),
    [sym_comment] = ACTIONS(34),
  },
  [498] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(942),
    [sym_comment] = ACTIONS(14),
  },
  [499] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(944),
    [sym__newline] = ACTIONS(944),
  },
  [500] = {
    [sym_statement_label] = STATE(364),
    [sym_subroutine_call] = STATE(365),
    [sym_keyword_statement] = STATE(365),
    [sym_include_statement] = STATE(365),
    [sym_do_loop_statement] = STATE(365),
    [sym_if_statement] = STATE(365),
    [sym__inline_if_statement] = STATE(42),
    [sym__block_if_statement] = STATE(42),
    [sym__expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(32),
    [sym_assignment_expression] = STATE(365),
    [sym_pointer_assignment_expression] = STATE(365),
    [sym_derived_type_member_expression] = STATE(32),
    [sym_logical_expression] = STATE(32),
    [sym_relational_expression] = STATE(32),
    [sym_concatenation_expression] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_call_expression] = STATE(368),
    [sym_complex_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(946),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(946),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(946),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_block_label_start_expression] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(80),
    [sym__double_quoted_string] = ACTIONS(82),
    [sym__single_quoted_string] = ACTIONS(82),
    [sym_boolean_literal] = ACTIONS(80),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [501] = {
    [sym__block_label] = STATE(502),
    [sym_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(944),
    [sym__newline] = ACTIONS(944),
  },
  [502] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(948),
    [sym__newline] = ACTIONS(948),
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
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_label, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_label, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 2),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_statement, 2),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include_statement, 2, .alias_sequence_id = 1),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__specification_part, 2),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__specification_part, 2),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_targets, 1),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_modification, 2),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [390] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [393] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [396] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [399] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [402] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [405] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [408] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(26),
  [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [413] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(14),
  [416] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(18),
  [419] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(21),
  [422] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(22),
  [425] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(23),
  [428] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(24),
  [431] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(25),
  [434] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(26),
  [437] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(27),
  [440] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(28),
  [443] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(29),
  [446] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(30),
  [449] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(31),
  [452] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(32),
  [455] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(33),
  [458] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(34),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 3),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_size, 1),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(233),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_statement, 3),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(297),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_targets, 2),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_modification, 3),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(307),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 4),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_statement, 4),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_statement_repeat1, 2),
  [681] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_statement_repeat1, 2), SHIFT_REPEAT(154),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [690] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(344),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(352),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [716] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [720] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [728] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [734] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [738] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__declaration_targets_repeat1, 2),
  [740] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__declaration_targets_repeat1, 2), SHIFT_REPEAT(192),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(382),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(386),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(387),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(388),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(389),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(390),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(392),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_shape, 1),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [807] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(219),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [814] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_assignment, 3),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_statement_repeat1, 2),
  [822] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_statement, 5),
  [824] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_statement_repeat1, 2), SHIFT_REPEAT(247),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(431),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [867] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(293),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [876] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_set, 5),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [882] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(467),
  [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [886] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [888] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [900] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(362),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 6),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_set_repeat1, 2),
  [913] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_set, 6),
  [915] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_set_repeat1, 2), SHIFT_REPEAT(407),
  [918] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [924] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [930] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [938] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
