#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 514
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 3
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 3,
  anon_sym_COMMA = 4,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH = 5,
  anon_sym_COLON = 6,
  anon_sym_COLON_COLON = 7,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH = 8,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 10,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 12,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 13,
  aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 14,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 15,
  anon_sym_STAR = 16,
  aux_sym_SLASH_BSLASHd_PLUS_SLASH = 17,
  aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH = 22,
  anon_sym_LPAREN = 23,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH = 26,
  anon_sym_RPAREN = 27,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 28,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 29,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 30,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 31,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH = 32,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 33,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 34,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH = 35,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 36,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH = 37,
  aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 38,
  anon_sym_EQ = 39,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH = 40,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 41,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 43,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH = 44,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 45,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH = 46,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH = 47,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 48,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 49,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 50,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 51,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 52,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 53,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 54,
  anon_sym_EQ_GT = 55,
  anon_sym_PERCENT = 56,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 57,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 58,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 59,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 60,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 61,
  anon_sym_LT = 62,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 63,
  anon_sym_GT = 64,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 65,
  anon_sym_LT_EQ = 66,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 67,
  anon_sym_GT_EQ = 68,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 69,
  anon_sym_EQ_EQ = 70,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 71,
  anon_sym_SLASH_EQ = 72,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 73,
  anon_sym_SLASH_SLASH = 74,
  anon_sym_PLUS = 75,
  anon_sym_DASH = 76,
  anon_sym_SLASH = 77,
  anon_sym_STAR_STAR = 78,
  sym_block_label_start_expression = 79,
  sym_number_literal = 80,
  sym__double_quoted_string = 81,
  sym__single_quoted_string = 82,
  sym_boolean_literal = 83,
  sym_identifier = 84,
  sym_comment = 85,
  sym__semicolon = 86,
  sym__newline = 87,
  sym_translation_unit = 88,
  sym_program_block = 89,
  sym__specification_part = 90,
  sym_use_statement = 91,
  sym_included_items = 92,
  sym_variable_declaration = 93,
  sym_variable_modification = 94,
  sym__declaration_targets = 95,
  sym_intrinsic_type = 96,
  sym_type_qualifier = 97,
  sym_parameter_statement = 98,
  sym_parameter_assignment = 99,
  sym_equivalence_statement = 100,
  sym_equivalence_set = 101,
  sym_statement_label = 102,
  sym_subroutine_call = 103,
  sym_keyword_statement = 104,
  sym_include_statement = 105,
  sym_do_loop_statement = 106,
  sym_if_statement = 107,
  sym__inline_if_statement = 108,
  sym__block_if_statement = 109,
  sym_elseif_clause = 110,
  sym_else_clause = 111,
  sym__expression = 112,
  sym_parenthesized_expression = 113,
  sym_assignment_expression = 114,
  sym_pointer_assignment_expression = 115,
  sym_derived_type_member_expression = 116,
  sym_logical_expression = 117,
  sym_relational_expression = 118,
  sym_concatenation_expression = 119,
  sym_math_expression = 120,
  sym_call_expression = 121,
  sym_argument_list = 122,
  sym_keyword_argument = 123,
  sym_array_slice = 124,
  sym_assumed_size = 125,
  sym_assumed_shape = 126,
  sym__block_label = 127,
  sym_loop_control_expression = 128,
  sym_complex_literal = 129,
  sym_string_literal = 130,
  sym__end_of_statement = 131,
  aux_sym_translation_unit_repeat1 = 132,
  aux_sym_program_block_repeat1 = 133,
  aux_sym_program_block_repeat2 = 134,
  aux_sym_included_items_repeat1 = 135,
  aux_sym_variable_declaration_repeat1 = 136,
  aux_sym__declaration_targets_repeat1 = 137,
  aux_sym_parameter_statement_repeat1 = 138,
  aux_sym_equivalence_statement_repeat1 = 139,
  aux_sym_equivalence_set_repeat1 = 140,
  aux_sym__block_if_statement_repeat1 = 141,
  aux_sym_argument_list_repeat1 = 142,
  alias_sym_block_label = 143,
  alias_sym_filename = 144,
  alias_sym_module_name = 145,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[uU][sS][eE]/",
  [anon_sym_COMMA] = ",",
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = "/[oO][nN][lL][yY]/",
  [anon_sym_COLON] = ":",
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
  [sym_use_statement] = "use_statement",
  [sym_included_items] = "included_items",
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
  [aux_sym_included_items_repeat1] = "included_items_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym__declaration_targets_repeat1] = "_declaration_targets_repeat1",
  [aux_sym_parameter_statement_repeat1] = "parameter_statement_repeat1",
  [aux_sym_equivalence_statement_repeat1] = "equivalence_statement_repeat1",
  [aux_sym_equivalence_set_repeat1] = "equivalence_set_repeat1",
  [aux_sym__block_if_statement_repeat1] = "_block_if_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_block_label] = "block_label",
  [alias_sym_filename] = "filename",
  [alias_sym_module_name] = "module_name",
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
  [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_included_items] = {
    .visible = true,
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
  [aux_sym_included_items_repeat1] = {
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
  [alias_sym_module_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_module_name,
  },
  [2] = {
    [1] = alias_sym_filename,
  },
  [3] = {
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
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(297);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(300);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(309);
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
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(309);
      END_STATE();
    case 310:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(310);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 318:
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
        SKIP(318);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(319);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(311);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(322);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(381);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(414);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(418);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(477);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(523);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(531);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(573);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(612);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(600);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(324);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 336:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 337:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 338:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 339:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 340:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 341:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 343:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 344:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 345:
      if (lookahead == '\"')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(347);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 348:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 349:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 350:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(362);
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
    case 351:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 352:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 353:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 354:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 355:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 357:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 358:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 359:
      if (lookahead == '\'')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 362:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 363:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 365:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 371:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(368);
      END_STATE();
    case 377:
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
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
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
    case 378:
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
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
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
    case 379:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(322);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(381);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(414);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(418);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(477);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(523);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(531);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(573);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(591);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(600);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('H' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_block_label_start_expression);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(370);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(374);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(422);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(430);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(431);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(460);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(478);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(480);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(384);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(499);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(503);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(524);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(532);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(540);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(574);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(577);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(585);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(592);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(601);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(309);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 611:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(592);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(613);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '*')
        ADVANCE(614);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == ',')
        ADVANCE(615);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == ':')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(617);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(633);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 616:
      if (lookahead == ':')
        ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(613);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '*')
        ADVANCE(614);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == ',')
        ADVANCE(615);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == ':')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(617);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(618);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(631);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(632);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(633);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(370);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(374);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(620);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(626);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(639);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(640);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(639);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(640);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(646);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(654);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(645);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(503);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(648);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(651);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == ';')
        ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(657);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(633);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == ';')
        ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(657);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(618);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(631);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(632);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(633);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(658);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 659:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(660);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(679);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(689);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(697);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(710);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(744);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(760);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(659);
      END_STATE();
    case 660:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(661);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(671);
      END_STATE();
    case 661:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(663);
      END_STATE();
    case 663:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(664);
      END_STATE();
    case 664:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(665);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(670);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(673);
      END_STATE();
    case 673:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(674);
      END_STATE();
    case 674:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(678);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 679:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(680);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(688);
      END_STATE();
    case 680:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(681);
      END_STATE();
    case 681:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 689:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(690);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(691);
      END_STATE();
    case 691:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(692);
      END_STATE();
    case 692:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(693);
      END_STATE();
    case 693:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(694);
      END_STATE();
    case 694:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 697:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(698);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(699);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(701);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(704);
      END_STATE();
    case 701:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 704:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(705);
      END_STATE();
    case 705:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(706);
      END_STATE();
    case 706:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(707);
      END_STATE();
    case 707:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(708);
      END_STATE();
    case 708:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(709);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 710:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(711);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(712);
      END_STATE();
    case 712:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(713);
      END_STATE();
    case 713:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(714);
      END_STATE();
    case 714:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(716);
      END_STATE();
    case 716:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(719);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(727);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(733);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(739);
      END_STATE();
    case 719:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(720);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(721);
      END_STATE();
    case 721:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(722);
      END_STATE();
    case 722:
      if (lookahead == 'E' ||
          lookahead == 'e')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 727:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(728);
      END_STATE();
    case 728:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(729);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(730);
      END_STATE();
    case 730:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(731);
      END_STATE();
    case 731:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 733:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(734);
      END_STATE();
    case 734:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(735);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(736);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(737);
      END_STATE();
    case 737:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(738);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 739:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(740);
      END_STATE();
    case 740:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(741);
      END_STATE();
    case 741:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(742);
      END_STATE();
    case 742:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(743);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(745);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(748);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(755);
      END_STATE();
    case 745:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(746);
      END_STATE();
    case 746:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 748:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(749);
      END_STATE();
    case 749:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(750);
      END_STATE();
    case 750:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(751);
      END_STATE();
    case 751:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(752);
      END_STATE();
    case 752:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(753);
      END_STATE();
    case 753:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(754);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(756);
      END_STATE();
    case 756:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(757);
      END_STATE();
    case 757:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(758);
      END_STATE();
    case 758:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(762);
      END_STATE();
    case 762:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(763);
      END_STATE();
    case 763:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(764);
      END_STATE();
    case 764:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(765);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 766:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(767);
      END_STATE();
    case 767:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(768);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(769);
      END_STATE();
    case 769:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(770);
      END_STATE();
    case 770:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(771);
      END_STATE();
    case 771:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(772);
      END_STATE();
    case 772:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 774:
      if (lookahead == '\n')
        SKIP(774);
      if (lookahead == '!')
        ADVANCE(775);
      if (lookahead == '%')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(833);
      if (lookahead == ')')
        ADVANCE(834);
      if (lookahead == '*')
        ADVANCE(835);
      if (lookahead == '+')
        ADVANCE(836);
      if (lookahead == ',')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(838);
      if (lookahead == '/')
        ADVANCE(839);
      if (lookahead == ':')
        ADVANCE(840);
      if (lookahead == '<')
        ADVANCE(841);
      if (lookahead == '=')
        ADVANCE(842);
      if (lookahead == '>')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(844);
      if (lookahead != 0)
        ADVANCE(858);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(780);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(785);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(790);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(779);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(784);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(792);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(794);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(800);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(803);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 805:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(806);
      END_STATE();
    case 806:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(807);
      END_STATE();
    case 807:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(808);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 809:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(810);
      END_STATE();
    case 810:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(813);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 814:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(815);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(817);
      END_STATE();
    case 815:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 817:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(818);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 819:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(822);
      END_STATE();
    case 820:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(821);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 822:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(823);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 824:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(825);
      END_STATE();
    case 825:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(829);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(827);
      END_STATE();
    case 827:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(828);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 830:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(831);
      END_STATE();
    case 831:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(832);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 844:
      if (lookahead == '\n')
        SKIP(774);
      if (lookahead == '!')
        ADVANCE(775);
      if (lookahead == '%')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(833);
      if (lookahead == ')')
        ADVANCE(834);
      if (lookahead == '*')
        ADVANCE(835);
      if (lookahead == '+')
        ADVANCE(836);
      if (lookahead == ',')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(838);
      if (lookahead == '/')
        ADVANCE(839);
      if (lookahead == ':')
        ADVANCE(840);
      if (lookahead == '<')
        ADVANCE(841);
      if (lookahead == '=')
        ADVANCE(842);
      if (lookahead == '>')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(844);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(845);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(847);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(848);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(851);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(857);
      if (lookahead != 0)
        ADVANCE(858);
      END_STATE();
    case 845:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 846:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(807);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(825);
      END_STATE();
    case 847:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(810);
      END_STATE();
    case 848:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(849);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(817);
      END_STATE();
    case 849:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(816);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(813);
      END_STATE();
    case 851:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(852);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(822);
      END_STATE();
    case 852:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(821);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(813);
      END_STATE();
    case 854:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(855);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 855:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(829);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(813);
      END_STATE();
    case 857:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(831);
      END_STATE();
    case 858:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 859:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '!')
        ADVANCE(775);
      if (lookahead == '%')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(833);
      if (lookahead == '*')
        ADVANCE(835);
      if (lookahead == '+')
        ADVANCE(836);
      if (lookahead == ',')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(838);
      if (lookahead == '/')
        ADVANCE(839);
      if (lookahead == ';')
        ADVANCE(860);
      if (lookahead == '<')
        ADVANCE(841);
      if (lookahead == '=')
        ADVANCE(842);
      if (lookahead == '>')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (lookahead != 0)
        ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '!')
        ADVANCE(775);
      if (lookahead == '%')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(833);
      if (lookahead == '*')
        ADVANCE(835);
      if (lookahead == '+')
        ADVANCE(836);
      if (lookahead == ',')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(838);
      if (lookahead == '/')
        ADVANCE(839);
      if (lookahead == ';')
        ADVANCE(860);
      if (lookahead == '<')
        ADVANCE(841);
      if (lookahead == '=')
        ADVANCE(842);
      if (lookahead == '>')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(845);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(847);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(848);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(851);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(857);
      if (lookahead != 0)
        ADVANCE(858);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(862);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(864);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(862);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(864);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(654);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(478);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(865);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == ')')
        ADVANCE(866);
      if (lookahead == '*')
        ADVANCE(614);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == ',')
        ADVANCE(615);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == ':')
        ADVANCE(867);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(633);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(865);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == ')')
        ADVANCE(866);
      if (lookahead == '*')
        ADVANCE(614);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == ',')
        ADVANCE(615);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == ':')
        ADVANCE(867);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(618);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(631);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(632);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(633);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 869:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(870);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(869);
      END_STATE();
    case 870:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(871);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(872);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(873);
      END_STATE();
    case 872:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(872);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(873);
      END_STATE();
    case 873:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(874);
      END_STATE();
    case 874:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(875);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 876:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(877);
      END_STATE();
    case 877:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(878);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 879:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(880);
      if (lookahead == '=')
        ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(882);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(883);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(884);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(882);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(883);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(884);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(654);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(885);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(886);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(887);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 887:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(887);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(888);
      END_STATE();
    case 888:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(889);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(892);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(893);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(898);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(892);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(893);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(646);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(894);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(895);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(895);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 899:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(900);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(899);
      END_STATE();
    case 900:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(901);
      END_STATE();
    case 901:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(902);
      END_STATE();
    case 902:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(903);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        SKIP(904);
      if (lookahead == '!')
        ADVANCE(775);
      if (lookahead == '%')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(833);
      if (lookahead == ')')
        ADVANCE(834);
      if (lookahead == '*')
        ADVANCE(835);
      if (lookahead == '+')
        ADVANCE(836);
      if (lookahead == ',')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(838);
      if (lookahead == '/')
        ADVANCE(839);
      if (lookahead == ':')
        ADVANCE(840);
      if (lookahead == '<')
        ADVANCE(841);
      if (lookahead == '=')
        ADVANCE(905);
      if (lookahead == '>')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(906);
      if (lookahead != 0)
        ADVANCE(858);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(819);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(830);
      END_STATE();
    case 906:
      if (lookahead == '\n')
        SKIP(904);
      if (lookahead == '!')
        ADVANCE(775);
      if (lookahead == '%')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(833);
      if (lookahead == ')')
        ADVANCE(834);
      if (lookahead == '*')
        ADVANCE(835);
      if (lookahead == '+')
        ADVANCE(836);
      if (lookahead == ',')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(838);
      if (lookahead == '/')
        ADVANCE(839);
      if (lookahead == ':')
        ADVANCE(840);
      if (lookahead == '<')
        ADVANCE(841);
      if (lookahead == '=')
        ADVANCE(905);
      if (lookahead == '>')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(906);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(845);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(847);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(848);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(851);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(857);
      if (lookahead != 0)
        ADVANCE(858);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(908);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(909);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(910);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(907);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 908:
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
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 911:
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
    case 912:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(913);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(912);
      END_STATE();
    case 913:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(914);
      END_STATE();
    case 914:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(915);
      END_STATE();
    case 915:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(916);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(917);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(918);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(919);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(917);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(918);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(919);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(654);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(920);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(925);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(926);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 927:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(928);
      END_STATE();
    case 928:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(929);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    case 932:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(933);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(932);
      END_STATE();
    case 933:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(934);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(937);
      END_STATE();
    case 934:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(935);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(936);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 937:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(927);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(938);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(939);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(940);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(938);
      if (lookahead == '!')
        ADVANCE(323);
      if (lookahead == '\"')
        ADVANCE(336);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '(')
        ADVANCE(364);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead == '.')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(939);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(642);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(644);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(940);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(654);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(611);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(925);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(389);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 310},
  [2] = {.lex_state = 318},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 310},
  [5] = {.lex_state = 310},
  [6] = {.lex_state = 320},
  [7] = {.lex_state = 310},
  [8] = {.lex_state = 320},
  [9] = {.lex_state = 322},
  [10] = {.lex_state = 322},
  [11] = {.lex_state = 322},
  [12] = {.lex_state = 320},
  [13] = {.lex_state = 318},
  [14] = {.lex_state = 613},
  [15] = {.lex_state = 639},
  [16] = {.lex_state = 613},
  [17] = {.lex_state = 613},
  [18] = {.lex_state = 318},
  [19] = {.lex_state = 613},
  [20] = {.lex_state = 613},
  [21] = {.lex_state = 318},
  [22] = {.lex_state = 318},
  [23] = {.lex_state = 320},
  [24] = {.lex_state = 318},
  [25] = {.lex_state = 318},
  [26] = {.lex_state = 655},
  [27] = {.lex_state = 318},
  [28] = {.lex_state = 658},
  [29] = {.lex_state = 318},
  [30] = {.lex_state = 613},
  [31] = {.lex_state = 613},
  [32] = {.lex_state = 659},
  [33] = {.lex_state = 774},
  [34] = {.lex_state = 774},
  [35] = {.lex_state = 774},
  [36] = {.lex_state = 322},
  [37] = {.lex_state = 320},
  [38] = {.lex_state = 613},
  [39] = {.lex_state = 613},
  [40] = {.lex_state = 639},
  [41] = {.lex_state = 320},
  [42] = {.lex_state = 320},
  [43] = {.lex_state = 320},
  [44] = {.lex_state = 774},
  [45] = {.lex_state = 859},
  [46] = {.lex_state = 322},
  [47] = {.lex_state = 862},
  [48] = {.lex_state = 320},
  [49] = {.lex_state = 322},
  [50] = {.lex_state = 862},
  [51] = {.lex_state = 658},
  [52] = {.lex_state = 310},
  [53] = {.lex_state = 310},
  [54] = {.lex_state = 658},
  [55] = {.lex_state = 318},
  [56] = {.lex_state = 865},
  [57] = {.lex_state = 613},
  [58] = {.lex_state = 613},
  [59] = {.lex_state = 869},
  [60] = {.lex_state = 613},
  [61] = {.lex_state = 613},
  [62] = {.lex_state = 774},
  [63] = {.lex_state = 774},
  [64] = {.lex_state = 774},
  [65] = {.lex_state = 318},
  [66] = {.lex_state = 318},
  [67] = {.lex_state = 658},
  [68] = {.lex_state = 318},
  [69] = {.lex_state = 320},
  [70] = {.lex_state = 320},
  [71] = {.lex_state = 320},
  [72] = {.lex_state = 613},
  [73] = {.lex_state = 613},
  [74] = {.lex_state = 613},
  [75] = {.lex_state = 859},
  [76] = {.lex_state = 859},
  [77] = {.lex_state = 859},
  [78] = {.lex_state = 859},
  [79] = {.lex_state = 320},
  [80] = {.lex_state = 320},
  [81] = {.lex_state = 879},
  [82] = {.lex_state = 882},
  [83] = {.lex_state = 320},
  [84] = {.lex_state = 882},
  [85] = {.lex_state = 613},
  [86] = {.lex_state = 892},
  [87] = {.lex_state = 774},
  [88] = {.lex_state = 774},
  [89] = {.lex_state = 774},
  [90] = {.lex_state = 658},
  [91] = {.lex_state = 318},
  [92] = {.lex_state = 865},
  [93] = {.lex_state = 859},
  [94] = {.lex_state = 322},
  [95] = {.lex_state = 659},
  [96] = {.lex_state = 613},
  [97] = {.lex_state = 859},
  [98] = {.lex_state = 320},
  [99] = {.lex_state = 774},
  [100] = {.lex_state = 658},
  [101] = {.lex_state = 859},
  [102] = {.lex_state = 613},
  [103] = {.lex_state = 320},
  [104] = {.lex_state = 320},
  [105] = {.lex_state = 859},
  [106] = {.lex_state = 862},
  [107] = {.lex_state = 862},
  [108] = {.lex_state = 613},
  [109] = {.lex_state = 613},
  [110] = {.lex_state = 613},
  [111] = {.lex_state = 613},
  [112] = {.lex_state = 613},
  [113] = {.lex_state = 613},
  [114] = {.lex_state = 613},
  [115] = {.lex_state = 613},
  [116] = {.lex_state = 613},
  [117] = {.lex_state = 613},
  [118] = {.lex_state = 613},
  [119] = {.lex_state = 322},
  [120] = {.lex_state = 862},
  [121] = {.lex_state = 658},
  [122] = {.lex_state = 310},
  [123] = {.lex_state = 320},
  [124] = {.lex_state = 862},
  [125] = {.lex_state = 320},
  [126] = {.lex_state = 899},
  [127] = {.lex_state = 320},
  [128] = {.lex_state = 613},
  [129] = {.lex_state = 613},
  [130] = {.lex_state = 865},
  [131] = {.lex_state = 879},
  [132] = {.lex_state = 613},
  [133] = {.lex_state = 613},
  [134] = {.lex_state = 613},
  [135] = {.lex_state = 904},
  [136] = {.lex_state = 774},
  [137] = {.lex_state = 879},
  [138] = {.lex_state = 879},
  [139] = {.lex_state = 774},
  [140] = {.lex_state = 774},
  [141] = {.lex_state = 907},
  [142] = {.lex_state = 865},
  [143] = {.lex_state = 774},
  [144] = {.lex_state = 613},
  [145] = {.lex_state = 774},
  [146] = {.lex_state = 613},
  [147] = {.lex_state = 613},
  [148] = {.lex_state = 613},
  [149] = {.lex_state = 613},
  [150] = {.lex_state = 613},
  [151] = {.lex_state = 613},
  [152] = {.lex_state = 613},
  [153] = {.lex_state = 613},
  [154] = {.lex_state = 879},
  [155] = {.lex_state = 879},
  [156] = {.lex_state = 879},
  [157] = {.lex_state = 879},
  [158] = {.lex_state = 318},
  [159] = {.lex_state = 658},
  [160] = {.lex_state = 865},
  [161] = {.lex_state = 320},
  [162] = {.lex_state = 774},
  [163] = {.lex_state = 774},
  [164] = {.lex_state = 774},
  [165] = {.lex_state = 859},
  [166] = {.lex_state = 859},
  [167] = {.lex_state = 613},
  [168] = {.lex_state = 613},
  [169] = {.lex_state = 613},
  [170] = {.lex_state = 613},
  [171] = {.lex_state = 613},
  [172] = {.lex_state = 613},
  [173] = {.lex_state = 613},
  [174] = {.lex_state = 613},
  [175] = {.lex_state = 613},
  [176] = {.lex_state = 613},
  [177] = {.lex_state = 882},
  [178] = {.lex_state = 658},
  [179] = {.lex_state = 639},
  [180] = {.lex_state = 320},
  [181] = {.lex_state = 859},
  [182] = {.lex_state = 882},
  [183] = {.lex_state = 774},
  [184] = {.lex_state = 658},
  [185] = {.lex_state = 639},
  [186] = {.lex_state = 320},
  [187] = {.lex_state = 859},
  [188] = {.lex_state = 320},
  [189] = {.lex_state = 613},
  [190] = {.lex_state = 912},
  [191] = {.lex_state = 859},
  [192] = {.lex_state = 774},
  [193] = {.lex_state = 879},
  [194] = {.lex_state = 613},
  [195] = {.lex_state = 320},
  [196] = {.lex_state = 613},
  [197] = {.lex_state = 658},
  [198] = {.lex_state = 613},
  [199] = {.lex_state = 613},
  [200] = {.lex_state = 320},
  [201] = {.lex_state = 862},
  [202] = {.lex_state = 774},
  [203] = {.lex_state = 859},
  [204] = {.lex_state = 859},
  [205] = {.lex_state = 774},
  [206] = {.lex_state = 774},
  [207] = {.lex_state = 774},
  [208] = {.lex_state = 774},
  [209] = {.lex_state = 774},
  [210] = {.lex_state = 774},
  [211] = {.lex_state = 774},
  [212] = {.lex_state = 774},
  [213] = {.lex_state = 320},
  [214] = {.lex_state = 310},
  [215] = {.lex_state = 658},
  [216] = {.lex_state = 320},
  [217] = {.lex_state = 879},
  [218] = {.lex_state = 774},
  [219] = {.lex_state = 613},
  [220] = {.lex_state = 774},
  [221] = {.lex_state = 774},
  [222] = {.lex_state = 774},
  [223] = {.lex_state = 865},
  [224] = {.lex_state = 865},
  [225] = {.lex_state = 865},
  [226] = {.lex_state = 613},
  [227] = {.lex_state = 613},
  [228] = {.lex_state = 613},
  [229] = {.lex_state = 613},
  [230] = {.lex_state = 613},
  [231] = {.lex_state = 613},
  [232] = {.lex_state = 613},
  [233] = {.lex_state = 613},
  [234] = {.lex_state = 613},
  [235] = {.lex_state = 613},
  [236] = {.lex_state = 879},
  [237] = {.lex_state = 613},
  [238] = {.lex_state = 879},
  [239] = {.lex_state = 774},
  [240] = {.lex_state = 774},
  [241] = {.lex_state = 879},
  [242] = {.lex_state = 774},
  [243] = {.lex_state = 774},
  [244] = {.lex_state = 774},
  [245] = {.lex_state = 774},
  [246] = {.lex_state = 774},
  [247] = {.lex_state = 774},
  [248] = {.lex_state = 774},
  [249] = {.lex_state = 774},
  [250] = {.lex_state = 774},
  [251] = {.lex_state = 613},
  [252] = {.lex_state = 318},
  [253] = {.lex_state = 320},
  [254] = {.lex_state = 879},
  [255] = {.lex_state = 318},
  [256] = {.lex_state = 865},
  [257] = {.lex_state = 879},
  [258] = {.lex_state = 658},
  [259] = {.lex_state = 658},
  [260] = {.lex_state = 320},
  [261] = {.lex_state = 774},
  [262] = {.lex_state = 879},
  [263] = {.lex_state = 907},
  [264] = {.lex_state = 859},
  [265] = {.lex_state = 859},
  [266] = {.lex_state = 859},
  [267] = {.lex_state = 859},
  [268] = {.lex_state = 859},
  [269] = {.lex_state = 859},
  [270] = {.lex_state = 859},
  [271] = {.lex_state = 859},
  [272] = {.lex_state = 859},
  [273] = {.lex_state = 859},
  [274] = {.lex_state = 613},
  [275] = {.lex_state = 613},
  [276] = {.lex_state = 774},
  [277] = {.lex_state = 658},
  [278] = {.lex_state = 882},
  [279] = {.lex_state = 320},
  [280] = {.lex_state = 320},
  [281] = {.lex_state = 320},
  [282] = {.lex_state = 859},
  [283] = {.lex_state = 882},
  [284] = {.lex_state = 882},
  [285] = {.lex_state = 892},
  [286] = {.lex_state = 917},
  [287] = {.lex_state = 320},
  [288] = {.lex_state = 917},
  [289] = {.lex_state = 320},
  [290] = {.lex_state = 859},
  [291] = {.lex_state = 320},
  [292] = {.lex_state = 320},
  [293] = {.lex_state = 882},
  [294] = {.lex_state = 774},
  [295] = {.lex_state = 658},
  [296] = {.lex_state = 859},
  [297] = {.lex_state = 879},
  [298] = {.lex_state = 659},
  [299] = {.lex_state = 613},
  [300] = {.lex_state = 320},
  [301] = {.lex_state = 613},
  [302] = {.lex_state = 859},
  [303] = {.lex_state = 658},
  [304] = {.lex_state = 859},
  [305] = {.lex_state = 658},
  [306] = {.lex_state = 613},
  [307] = {.lex_state = 613},
  [308] = {.lex_state = 859},
  [309] = {.lex_state = 859},
  [310] = {.lex_state = 310},
  [311] = {.lex_state = 320},
  [312] = {.lex_state = 658},
  [313] = {.lex_state = 318},
  [314] = {.lex_state = 613},
  [315] = {.lex_state = 613},
  [316] = {.lex_state = 613},
  [317] = {.lex_state = 774},
  [318] = {.lex_state = 613},
  [319] = {.lex_state = 879},
  [320] = {.lex_state = 774},
  [321] = {.lex_state = 879},
  [322] = {.lex_state = 774},
  [323] = {.lex_state = 879},
  [324] = {.lex_state = 774},
  [325] = {.lex_state = 774},
  [326] = {.lex_state = 774},
  [327] = {.lex_state = 774},
  [328] = {.lex_state = 774},
  [329] = {.lex_state = 774},
  [330] = {.lex_state = 774},
  [331] = {.lex_state = 774},
  [332] = {.lex_state = 774},
  [333] = {.lex_state = 774},
  [334] = {.lex_state = 613},
  [335] = {.lex_state = 879},
  [336] = {.lex_state = 774},
  [337] = {.lex_state = 774},
  [338] = {.lex_state = 879},
  [339] = {.lex_state = 774},
  [340] = {.lex_state = 879},
  [341] = {.lex_state = 320},
  [342] = {.lex_state = 879},
  [343] = {.lex_state = 879},
  [344] = {.lex_state = 879},
  [345] = {.lex_state = 879},
  [346] = {.lex_state = 774},
  [347] = {.lex_state = 879},
  [348] = {.lex_state = 320},
  [349] = {.lex_state = 879},
  [350] = {.lex_state = 879},
  [351] = {.lex_state = 774},
  [352] = {.lex_state = 774},
  [353] = {.lex_state = 613},
  [354] = {.lex_state = 613},
  [355] = {.lex_state = 613},
  [356] = {.lex_state = 613},
  [357] = {.lex_state = 613},
  [358] = {.lex_state = 613},
  [359] = {.lex_state = 613},
  [360] = {.lex_state = 613},
  [361] = {.lex_state = 613},
  [362] = {.lex_state = 613},
  [363] = {.lex_state = 320},
  [364] = {.lex_state = 658},
  [365] = {.lex_state = 882},
  [366] = {.lex_state = 917},
  [367] = {.lex_state = 658},
  [368] = {.lex_state = 318},
  [369] = {.lex_state = 658},
  [370] = {.lex_state = 639},
  [371] = {.lex_state = 320},
  [372] = {.lex_state = 932},
  [373] = {.lex_state = 932},
  [374] = {.lex_state = 859},
  [375] = {.lex_state = 917},
  [376] = {.lex_state = 932},
  [377] = {.lex_state = 320},
  [378] = {.lex_state = 882},
  [379] = {.lex_state = 912},
  [380] = {.lex_state = 320},
  [381] = {.lex_state = 859},
  [382] = {.lex_state = 613},
  [383] = {.lex_state = 320},
  [384] = {.lex_state = 613},
  [385] = {.lex_state = 613},
  [386] = {.lex_state = 859},
  [387] = {.lex_state = 859},
  [388] = {.lex_state = 613},
  [389] = {.lex_state = 613},
  [390] = {.lex_state = 613},
  [391] = {.lex_state = 613},
  [392] = {.lex_state = 613},
  [393] = {.lex_state = 613},
  [394] = {.lex_state = 613},
  [395] = {.lex_state = 613},
  [396] = {.lex_state = 613},
  [397] = {.lex_state = 310},
  [398] = {.lex_state = 320},
  [399] = {.lex_state = 658},
  [400] = {.lex_state = 774},
  [401] = {.lex_state = 774},
  [402] = {.lex_state = 613},
  [403] = {.lex_state = 613},
  [404] = {.lex_state = 613},
  [405] = {.lex_state = 613},
  [406] = {.lex_state = 613},
  [407] = {.lex_state = 613},
  [408] = {.lex_state = 613},
  [409] = {.lex_state = 613},
  [410] = {.lex_state = 613},
  [411] = {.lex_state = 774},
  [412] = {.lex_state = 613},
  [413] = {.lex_state = 774},
  [414] = {.lex_state = 318},
  [415] = {.lex_state = 658},
  [416] = {.lex_state = 879},
  [417] = {.lex_state = 879},
  [418] = {.lex_state = 879},
  [419] = {.lex_state = 320},
  [420] = {.lex_state = 859},
  [421] = {.lex_state = 859},
  [422] = {.lex_state = 774},
  [423] = {.lex_state = 774},
  [424] = {.lex_state = 774},
  [425] = {.lex_state = 774},
  [426] = {.lex_state = 774},
  [427] = {.lex_state = 774},
  [428] = {.lex_state = 774},
  [429] = {.lex_state = 774},
  [430] = {.lex_state = 774},
  [431] = {.lex_state = 320},
  [432] = {.lex_state = 658},
  [433] = {.lex_state = 932},
  [434] = {.lex_state = 917},
  [435] = {.lex_state = 932},
  [436] = {.lex_state = 320},
  [437] = {.lex_state = 912},
  [438] = {.lex_state = 938},
  [439] = {.lex_state = 320},
  [440] = {.lex_state = 938},
  [441] = {.lex_state = 320},
  [442] = {.lex_state = 859},
  [443] = {.lex_state = 917},
  [444] = {.lex_state = 917},
  [445] = {.lex_state = 932},
  [446] = {.lex_state = 658},
  [447] = {.lex_state = 917},
  [448] = {.lex_state = 320},
  [449] = {.lex_state = 859},
  [450] = {.lex_state = 859},
  [451] = {.lex_state = 859},
  [452] = {.lex_state = 859},
  [453] = {.lex_state = 859},
  [454] = {.lex_state = 859},
  [455] = {.lex_state = 859},
  [456] = {.lex_state = 859},
  [457] = {.lex_state = 859},
  [458] = {.lex_state = 310},
  [459] = {.lex_state = 318},
  [460] = {.lex_state = 658},
  [461] = {.lex_state = 774},
  [462] = {.lex_state = 774},
  [463] = {.lex_state = 774},
  [464] = {.lex_state = 774},
  [465] = {.lex_state = 774},
  [466] = {.lex_state = 774},
  [467] = {.lex_state = 774},
  [468] = {.lex_state = 774},
  [469] = {.lex_state = 774},
  [470] = {.lex_state = 774},
  [471] = {.lex_state = 879},
  [472] = {.lex_state = 879},
  [473] = {.lex_state = 658},
  [474] = {.lex_state = 879},
  [475] = {.lex_state = 879},
  [476] = {.lex_state = 613},
  [477] = {.lex_state = 320},
  [478] = {.lex_state = 658},
  [479] = {.lex_state = 932},
  [480] = {.lex_state = 932},
  [481] = {.lex_state = 658},
  [482] = {.lex_state = 938},
  [483] = {.lex_state = 639},
  [484] = {.lex_state = 320},
  [485] = {.lex_state = 859},
  [486] = {.lex_state = 938},
  [487] = {.lex_state = 917},
  [488] = {.lex_state = 320},
  [489] = {.lex_state = 917},
  [490] = {.lex_state = 658},
  [491] = {.lex_state = 658},
  [492] = {.lex_state = 859},
  [493] = {.lex_state = 320},
  [494] = {.lex_state = 658},
  [495] = {.lex_state = 932},
  [496] = {.lex_state = 320},
  [497] = {.lex_state = 917},
  [498] = {.lex_state = 938},
  [499] = {.lex_state = 320},
  [500] = {.lex_state = 859},
  [501] = {.lex_state = 938},
  [502] = {.lex_state = 938},
  [503] = {.lex_state = 932},
  [504] = {.lex_state = 320},
  [505] = {.lex_state = 658},
  [506] = {.lex_state = 917},
  [507] = {.lex_state = 917},
  [508] = {.lex_state = 938},
  [509] = {.lex_state = 932},
  [510] = {.lex_state = 320},
  [511] = {.lex_state = 917},
  [512] = {.lex_state = 658},
  [513] = {.lex_state = 320},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
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
    [sym__specification_part] = STATE(36),
    [sym_use_statement] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [sym_variable_modification] = STATE(37),
    [sym_intrinsic_type] = STATE(38),
    [sym_type_qualifier] = STATE(39),
    [sym_parameter_statement] = STATE(37),
    [sym_equivalence_statement] = STATE(37),
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(42),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat1] = STATE(46),
    [aux_sym_program_block_repeat2] = STATE(47),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym__specification_part] = STATE(36),
    [sym_use_statement] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [sym_variable_modification] = STATE(37),
    [sym_intrinsic_type] = STATE(38),
    [sym_type_qualifier] = STATE(39),
    [sym_parameter_statement] = STATE(37),
    [sym_equivalence_statement] = STATE(37),
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(42),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat1] = STATE(49),
    [aux_sym_program_block_repeat2] = STATE(50),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(53),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [13] = {
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [sym_argument_list] = STATE(57),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_COLON_COLON] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(104),
    [sym__double_quoted_string] = ACTIONS(104),
    [sym__single_quoted_string] = ACTIONS(104),
    [sym_boolean_literal] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [15] = {
    [anon_sym_LPAREN] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_block_label_start_expression] = ACTIONS(108),
    [sym_number_literal] = ACTIONS(108),
    [sym__double_quoted_string] = ACTIONS(108),
    [sym__single_quoted_string] = ACTIONS(108),
    [sym_boolean_literal] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_COLON_COLON] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(110),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(114),
    [sym__double_quoted_string] = ACTIONS(114),
    [sym__single_quoted_string] = ACTIONS(114),
    [sym_boolean_literal] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [sym_argument_list] = STATE(58),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(120),
    [sym__double_quoted_string] = ACTIONS(120),
    [sym__single_quoted_string] = ACTIONS(120),
    [sym_boolean_literal] = ACTIONS(120),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym__expression] = STATE(64),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(128),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [anon_sym_COLON_COLON] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(114),
    [sym__double_quoted_string] = ACTIONS(114),
    [sym__single_quoted_string] = ACTIONS(114),
    [sym_boolean_literal] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [sym_equivalence_set] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym_call_expression] = STATE(69),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [24] = {
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [sym_statement_label] = STATE(70),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym__expression] = STATE(78),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
  },
  [27] = {
    [sym_string_literal] = STATE(80),
    [sym__double_quoted_string] = ACTIONS(156),
    [sym__single_quoted_string] = ACTIONS(156),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [sym_loop_control_expression] = STATE(83),
    [sym__end_of_statement] = STATE(84),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [29] = {
    [sym_parenthesized_expression] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(162),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym__expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [sym__expression] = STATE(89),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(176),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_STAR_STAR] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym_argument_list] = STATE(93),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [sym_block_label_start_expression] = ACTIONS(186),
    [sym_number_literal] = ACTIONS(186),
    [sym__double_quoted_string] = ACTIONS(186),
    [sym__single_quoted_string] = ACTIONS(186),
    [sym_boolean_literal] = ACTIONS(186),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym__end_of_statement] = STATE(94),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [38] = {
    [sym__declaration_targets] = STATE(98),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [39] = {
    [sym__declaration_targets] = STATE(103),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON_COLON] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [sym_subroutine_call] = STATE(104),
    [sym_keyword_statement] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_do_loop_statement] = STATE(104),
    [sym_if_statement] = STATE(104),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(104),
    [sym_pointer_assignment_expression] = STATE(104),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(105),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__end_of_statement] = STATE(107),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
  },
  [42] = {
    [sym__end_of_statement] = STATE(94),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [43] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(198),
    [sym__newline] = ACTIONS(198),
  },
  [44] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_EQ_GT] = ACTIONS(204),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [45] = {
    [sym__end_of_statement] = STATE(107),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
  },
  [46] = {
    [sym__specification_part] = STATE(36),
    [sym_use_statement] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [sym_variable_modification] = STATE(37),
    [sym_intrinsic_type] = STATE(38),
    [sym_type_qualifier] = STATE(39),
    [sym_parameter_statement] = STATE(37),
    [sym_equivalence_statement] = STATE(37),
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(42),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat1] = STATE(119),
    [aux_sym_program_block_repeat2] = STATE(50),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym__end_of_statement] = STATE(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [49] = {
    [sym__specification_part] = STATE(36),
    [sym_use_statement] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [sym_variable_modification] = STATE(37),
    [sym_intrinsic_type] = STATE(38),
    [sym_type_qualifier] = STATE(39),
    [sym_parameter_statement] = STATE(37),
    [sym_equivalence_statement] = STATE(37),
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(42),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat1] = STATE(119),
    [aux_sym_program_block_repeat2] = STATE(124),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [sym__end_of_statement] = STATE(122),
    [sym_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [sym_included_items] = STATE(127),
    [anon_sym_COMMA] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(238),
    [sym__newline] = ACTIONS(238),
  },
  [55] = {
    [sym_parenthesized_expression] = STATE(128),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(242),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym__expression] = STATE(136),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(137),
    [sym_array_slice] = STATE(137),
    [sym_assumed_size] = STATE(137),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_COLON_COLON] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [sym_number_literal] = ACTIONS(260),
    [sym__double_quoted_string] = ACTIONS(260),
    [sym__single_quoted_string] = ACTIONS(260),
    [sym_boolean_literal] = ACTIONS(260),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON_COLON] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(266),
    [sym__double_quoted_string] = ACTIONS(266),
    [sym__single_quoted_string] = ACTIONS(266),
    [sym_boolean_literal] = ACTIONS(266),
    [sym_identifier] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(270),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym__expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [sym__expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [sym_argument_list] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [sym_parameter_assignment] = STATE(155),
    [sym_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym_call_expression] = STATE(157),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [aux_sym_equivalence_statement_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
  },
  [68] = {
    [sym_argument_list] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(308),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
  },
  [70] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(312),
    [sym__newline] = ACTIONS(312),
  },
  [71] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(108),
    [sym__newline] = ACTIONS(108),
  },
  [72] = {
    [sym__expression] = STATE(164),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(314),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym__expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__expression] = STATE(166),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(174),
    [sym__newline] = ACTIONS(174),
  },
  [76] = {
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
  },
  [77] = {
    [sym_argument_list] = STATE(93),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(174),
    [sym__newline] = ACTIONS(174),
  },
  [78] = {
    [anon_sym_STAR] = ACTIONS(326),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(312),
    [sym__newline] = ACTIONS(312),
  },
  [79] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
  },
  [80] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(344),
    [sym__newline] = ACTIONS(344),
  },
  [81] = {
    [anon_sym_EQ] = ACTIONS(346),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
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
  [83] = {
    [sym__end_of_statement] = STATE(177),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [84] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(182),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__expression] = STATE(183),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym_statement_label] = STATE(185),
    [sym_subroutine_call] = STATE(186),
    [sym_keyword_statement] = STATE(186),
    [sym_include_statement] = STATE(186),
    [sym_do_loop_statement] = STATE(186),
    [sym_if_statement] = STATE(186),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(186),
    [sym_pointer_assignment_expression] = STATE(186),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(187),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym_argument_list] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_EQ_GT] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_EQ_GT] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym_loop_control_expression] = STATE(188),
    [sym__end_of_statement] = STATE(177),
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [91] = {
    [sym_parenthesized_expression] = STATE(190),
    [anon_sym_LPAREN] = ACTIONS(364),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__expression] = STATE(192),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(193),
    [sym_array_slice] = STATE(193),
    [sym_assumed_size] = STATE(193),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_EQ_GT] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(368),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_STAR_STAR] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(368),
    [sym__newline] = ACTIONS(368),
  },
  [94] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [sym_block_label_start_expression] = ACTIONS(372),
    [sym_number_literal] = ACTIONS(372),
    [sym__double_quoted_string] = ACTIONS(372),
    [sym__single_quoted_string] = ACTIONS(372),
    [sym_boolean_literal] = ACTIONS(372),
    [sym_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [sym_type_qualifier] = STATE(194),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [sym__declaration_targets] = STATE(195),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym_argument_list] = STATE(93),
    [aux_sym__declaration_targets_repeat1] = STATE(197),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
  },
  [98] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(384),
    [sym__newline] = ACTIONS(384),
  },
  [99] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_EQ_GT] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [aux_sym__declaration_targets_repeat1] = STATE(197),
    [anon_sym_COMMA] = ACTIONS(380),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
  },
  [101] = {
    [aux_sym__declaration_targets_repeat1] = STATE(197),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
  },
  [102] = {
    [sym__declaration_targets] = STATE(200),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(390),
    [sym__newline] = ACTIONS(390),
  },
  [104] = {
    [sym__end_of_statement] = STATE(201),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
  },
  [105] = {
    [sym__end_of_statement] = STATE(201),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
  },
  [106] = {
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
  [107] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [sym_block_label_start_expression] = ACTIONS(394),
    [sym_number_literal] = ACTIONS(394),
    [sym__double_quoted_string] = ACTIONS(394),
    [sym__single_quoted_string] = ACTIONS(394),
    [sym_boolean_literal] = ACTIONS(394),
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [sym__expression] = STATE(202),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [sym__expression] = STATE(204),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym__expression] = STATE(205),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym__expression] = STATE(207),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym__expression] = STATE(209),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym__expression] = STATE(210),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__expression] = STATE(211),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym__expression] = STATE(212),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym__specification_part] = STATE(36),
    [sym_use_statement] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [sym_variable_modification] = STATE(37),
    [sym_intrinsic_type] = STATE(38),
    [sym_type_qualifier] = STATE(39),
    [sym_parameter_statement] = STATE(37),
    [sym_equivalence_statement] = STATE(37),
    [sym_include_statement] = STATE(37),
    [aux_sym_program_block_repeat1] = STATE(119),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [sym_block_label_start_expression] = ACTIONS(422),
    [sym_number_literal] = ACTIONS(422),
    [sym__double_quoted_string] = ACTIONS(422),
    [sym__single_quoted_string] = ACTIONS(422),
    [sym_boolean_literal] = ACTIONS(422),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [sym_block_label_start_expression] = ACTIONS(460),
    [sym_number_literal] = ACTIONS(463),
    [sym__double_quoted_string] = ACTIONS(466),
    [sym__single_quoted_string] = ACTIONS(466),
    [sym_boolean_literal] = ACTIONS(463),
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym__end_of_statement] = STATE(214),
    [sym_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(474),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [sym__end_of_statement] = STATE(214),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [124] = {
    [sym_statement_label] = STATE(40),
    [sym_subroutine_call] = STATE(41),
    [sym_keyword_statement] = STATE(41),
    [sym_include_statement] = STATE(41),
    [sym_do_loop_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(41),
    [sym_pointer_assignment_expression] = STATE(41),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(45),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__end_of_statement] = STATE(214),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [126] = {
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(480),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(482),
    [sym__newline] = ACTIONS(482),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_COLON_COLON] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(484),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(484),
    [sym_number_literal] = ACTIONS(488),
    [sym__double_quoted_string] = ACTIONS(488),
    [sym__single_quoted_string] = ACTIONS(488),
    [sym_boolean_literal] = ACTIONS(488),
    [sym_identifier] = ACTIONS(488),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(218),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(220),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_COLON_COLON] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_number_literal] = ACTIONS(500),
    [sym__double_quoted_string] = ACTIONS(500),
    [sym__single_quoted_string] = ACTIONS(500),
    [sym_boolean_literal] = ACTIONS(500),
    [sym_identifier] = ACTIONS(500),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [sym__expression] = STATE(221),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__expression] = STATE(222),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym_argument_list] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [aux_sym_argument_list_repeat1] = STATE(236),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [aux_sym_argument_list_repeat1] = STATE(236),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(534),
    [sym_comment] = ACTIONS(14),
  },
  [138] = {
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [sym_number_literal] = ACTIONS(538),
    [sym_identifier] = ACTIONS(540),
    [sym_comment] = ACTIONS(14),
  },
  [142] = {
    [sym__expression] = STATE(240),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(241),
    [sym_array_slice] = STATE(241),
    [sym_assumed_size] = STATE(241),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(542),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_COLON] = ACTIONS(544),
    [anon_sym_STAR] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_EQ] = ACTIONS(544),
    [anon_sym_EQ_GT] = ACTIONS(546),
    [anon_sym_PERCENT] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
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
  [144] = {
    [sym__expression] = STATE(242),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_STAR] = ACTIONS(548),
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
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_STAR_STAR] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym__expression] = STATE(243),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [sym__expression] = STATE(244),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym__expression] = STATE(245),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [sym__expression] = STATE(246),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [sym__expression] = STATE(247),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym__expression] = STATE(248),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [sym__expression] = STATE(249),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [sym__expression] = STATE(250),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [154] = {
    [anon_sym_EQ] = ACTIONS(554),
    [sym_comment] = ACTIONS(14),
  },
  [155] = {
    [aux_sym_parameter_statement_repeat1] = STATE(254),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(558),
    [sym_comment] = ACTIONS(14),
  },
  [156] = {
    [sym_argument_list] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(562),
    [sym_comment] = ACTIONS(14),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(560),
    [sym_comment] = ACTIONS(14),
  },
  [158] = {
    [sym_equivalence_set] = STATE(258),
    [anon_sym_LPAREN] = ACTIONS(134),
    [sym_comment] = ACTIONS(14),
  },
  [159] = {
    [aux_sym_equivalence_statement_repeat1] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(564),
    [sym__newline] = ACTIONS(564),
  },
  [160] = {
    [sym__expression] = STATE(261),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(262),
    [sym_array_slice] = STATE(262),
    [sym_assumed_size] = STATE(262),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(566),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(368),
    [sym__newline] = ACTIONS(368),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [sym_argument_list] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(570),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(356),
    [sym__newline] = ACTIONS(356),
  },
  [166] = {
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_STAR_STAR] = ACTIONS(362),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(362),
    [sym__newline] = ACTIONS(362),
  },
  [167] = {
    [sym__expression] = STATE(265),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym__expression] = STATE(266),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [sym__expression] = STATE(267),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [sym__expression] = STATE(268),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym__expression] = STATE(269),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [sym__expression] = STATE(270),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [sym__expression] = STATE(271),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym__expression] = STATE(272),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [175] = {
    [sym__expression] = STATE(273),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [sym__expression] = STATE(276),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(278),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [sym__block_label] = STATE(280),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(580),
    [sym__newline] = ACTIONS(580),
  },
  [179] = {
    [sym_subroutine_call] = STATE(281),
    [sym_keyword_statement] = STATE(281),
    [sym_include_statement] = STATE(281),
    [sym_do_loop_statement] = STATE(281),
    [sym_if_statement] = STATE(281),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(281),
    [sym_pointer_assignment_expression] = STATE(281),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(282),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [sym__end_of_statement] = STATE(283),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [181] = {
    [sym__end_of_statement] = STATE(283),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [182] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(284),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(582),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [184] = {
    [sym__block_label] = STATE(287),
    [sym__end_of_statement] = STATE(288),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [185] = {
    [sym_subroutine_call] = STATE(289),
    [sym_keyword_statement] = STATE(289),
    [sym_include_statement] = STATE(289),
    [sym_do_loop_statement] = STATE(289),
    [sym_if_statement] = STATE(289),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(289),
    [sym_pointer_assignment_expression] = STATE(289),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(290),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [sym__end_of_statement] = STATE(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [187] = {
    [sym__end_of_statement] = STATE(292),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [188] = {
    [sym__end_of_statement] = STATE(293),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [189] = {
    [sym__expression] = STATE(294),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [sym_comment] = ACTIONS(14),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_EQ_GT] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_GT_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_SLASH_EQ] = ACTIONS(500),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_SLASH_SLASH] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_STAR_STAR] = ACTIONS(500),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(500),
    [sym__newline] = ACTIONS(500),
  },
  [192] = {
    [aux_sym_argument_list_repeat1] = STATE(297),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [aux_sym_argument_list_repeat1] = STATE(297),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(14),
  },
  [194] = {
    [sym__declaration_targets] = STATE(300),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_variable_declaration_repeat1] = STATE(301),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_COLON_COLON] = ACTIONS(596),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(598),
    [sym__newline] = ACTIONS(598),
  },
  [196] = {
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(303),
    [sym_pointer_assignment_expression] = STATE(303),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(304),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [aux_sym__declaration_targets_repeat1] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(380),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(602),
    [sym__newline] = ACTIONS(602),
  },
  [198] = {
    [sym__expression] = STATE(308),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [sym__expression] = STATE(309),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(608),
    [sym__newline] = ACTIONS(608),
  },
  [201] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(610),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_DASH] = ACTIONS(610),
    [sym_block_label_start_expression] = ACTIONS(612),
    [sym_number_literal] = ACTIONS(612),
    [sym__double_quoted_string] = ACTIONS(612),
    [sym__single_quoted_string] = ACTIONS(612),
    [sym_boolean_literal] = ACTIONS(612),
    [sym_identifier] = ACTIONS(612),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_EQ] = ACTIONS(614),
    [anon_sym_EQ_GT] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [anon_sym_STAR] = ACTIONS(326),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(620),
    [sym__newline] = ACTIONS(620),
  },
  [204] = {
    [anon_sym_STAR] = ACTIONS(326),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(622),
    [sym__newline] = ACTIONS(622),
  },
  [205] = {
    [anon_sym_STAR] = ACTIONS(624),
    [anon_sym_EQ] = ACTIONS(624),
    [anon_sym_EQ_GT] = ACTIONS(626),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_LT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_EQ_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [anon_sym_STAR_STAR] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(630),
    [anon_sym_EQ_GT] = ACTIONS(632),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(630),
    [anon_sym_EQ_GT] = ACTIONS(632),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(630),
    [anon_sym_EQ_GT] = ACTIONS(632),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(636),
    [anon_sym_EQ_GT] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_LT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_EQ_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(642),
    [anon_sym_EQ_GT] = ACTIONS(644),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(614),
    [anon_sym_EQ_GT] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_EQ] = ACTIONS(614),
    [anon_sym_EQ_GT] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [sym__end_of_statement] = STATE(310),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(648),
    [sym_comment] = ACTIONS(14),
  },
  [215] = {
    [sym__end_of_statement] = STATE(310),
    [sym_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [216] = {
    [sym__end_of_statement] = STATE(310),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [217] = {
    [anon_sym_COLON] = ACTIONS(654),
    [sym_comment] = ACTIONS(14),
  },
  [218] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(656),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [sym__expression] = STATE(317),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(662),
    [anon_sym_COLON] = ACTIONS(664),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [sym__expression] = STATE(320),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_assumed_size] = STATE(321),
    [sym_assumed_shape] = STATE(321),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(666),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [224] = {
    [sym__expression] = STATE(322),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(323),
    [sym_array_slice] = STATE(323),
    [sym_assumed_size] = STATE(323),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [sym__expression] = STATE(324),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(662),
    [anon_sym_COLON] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(662),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__expression] = STATE(325),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_COLON_COLON] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_PLUS] = ACTIONS(668),
    [anon_sym_DASH] = ACTIONS(668),
    [sym_number_literal] = ACTIONS(672),
    [sym__double_quoted_string] = ACTIONS(672),
    [sym__single_quoted_string] = ACTIONS(672),
    [sym_boolean_literal] = ACTIONS(672),
    [sym_identifier] = ACTIONS(672),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym__expression] = STATE(326),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__expression] = STATE(327),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym__expression] = STATE(328),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [sym__expression] = STATE(329),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [232] = {
    [sym__expression] = STATE(330),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [sym__expression] = STATE(331),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [sym__expression] = STATE(332),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [sym__expression] = STATE(333),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [aux_sym_argument_list_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_comment] = ACTIONS(14),
  },
  [237] = {
    [anon_sym_COMMA] = ACTIONS(676),
    [anon_sym_COLON_COLON] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(676),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_DASH] = ACTIONS(676),
    [sym_number_literal] = ACTIONS(680),
    [sym__double_quoted_string] = ACTIONS(680),
    [sym__single_quoted_string] = ACTIONS(680),
    [sym_boolean_literal] = ACTIONS(680),
    [sym_identifier] = ACTIONS(680),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_comment] = ACTIONS(14),
  },
  [239] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_EQ_GT] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(500),
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
  [240] = {
    [aux_sym_argument_list_repeat1] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [aux_sym_argument_list_repeat1] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(686),
    [sym_comment] = ACTIONS(14),
  },
  [242] = {
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [anon_sym_STAR] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_LT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_EQ_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [anon_sym_STAR_STAR] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_LT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_EQ_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [248] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [sym__expression] = STATE(339),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [sym_parameter_assignment] = STATE(340),
    [sym_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(14),
  },
  [253] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(688),
    [sym__newline] = ACTIONS(688),
  },
  [254] = {
    [aux_sym_parameter_statement_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(690),
    [sym_comment] = ACTIONS(14),
  },
  [255] = {
    [sym_call_expression] = STATE(344),
    [sym_identifier] = ACTIONS(692),
    [sym_comment] = ACTIONS(14),
  },
  [256] = {
    [sym__expression] = STATE(346),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_keyword_argument] = STATE(347),
    [sym_array_slice] = STATE(347),
    [sym_assumed_size] = STATE(347),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(694),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [sym_comment] = ACTIONS(14),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(696),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(696),
    [sym__newline] = ACTIONS(696),
  },
  [259] = {
    [aux_sym_equivalence_statement_repeat1] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(698),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(696),
    [sym__newline] = ACTIONS(696),
  },
  [260] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(500),
    [sym__newline] = ACTIONS(500),
  },
  [261] = {
    [aux_sym_argument_list_repeat1] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [aux_sym_argument_list_repeat1] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(703),
    [sym_comment] = ACTIONS(14),
  },
  [263] = {
    [sym_number_literal] = ACTIONS(705),
    [sym_identifier] = ACTIONS(707),
    [sym_comment] = ACTIONS(14),
  },
  [264] = {
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_STAR] = ACTIONS(552),
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
    [anon_sym_SLASH] = ACTIONS(552),
    [anon_sym_STAR_STAR] = ACTIONS(552),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(552),
    [sym__newline] = ACTIONS(552),
  },
  [265] = {
    [anon_sym_STAR] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_SLASH] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(618),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [266] = {
    [anon_sym_STAR] = ACTIONS(628),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_GT] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_GT_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_EQ_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_SLASH_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_SLASH_SLASH] = ACTIONS(628),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_SLASH] = ACTIONS(628),
    [anon_sym_STAR_STAR] = ACTIONS(628),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(628),
    [sym__newline] = ACTIONS(628),
  },
  [267] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(634),
    [sym__newline] = ACTIONS(634),
  },
  [268] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(634),
    [sym__newline] = ACTIONS(634),
  },
  [269] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(634),
    [sym__newline] = ACTIONS(634),
  },
  [270] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_GT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_GT_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_EQ_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_SLASH_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(640),
    [sym__newline] = ACTIONS(640),
  },
  [271] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_GT] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_GT_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_EQ_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_SLASH_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(646),
    [sym__newline] = ACTIONS(646),
  },
  [272] = {
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_SLASH] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [273] = {
    [anon_sym_STAR] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_SLASH] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(618),
    [anon_sym_STAR_STAR] = ACTIONS(618),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [274] = {
    [sym__expression] = STATE(351),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [275] = {
    [sym__expression] = STATE(352),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [276] = {
    [anon_sym_COMMA] = ACTIONS(709),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_LT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [277] = {
    [sym__block_label] = STATE(363),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(733),
    [sym__newline] = ACTIONS(733),
  },
  [278] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(284),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(735),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(737),
    [sym__newline] = ACTIONS(737),
  },
  [280] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(733),
    [sym__newline] = ACTIONS(733),
  },
  [281] = {
    [sym__end_of_statement] = STATE(365),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [282] = {
    [sym__end_of_statement] = STATE(365),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [283] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [sym_block_label_start_expression] = ACTIONS(394),
    [sym_number_literal] = ACTIONS(394),
    [sym__double_quoted_string] = ACTIONS(394),
    [sym__single_quoted_string] = ACTIONS(394),
    [sym_boolean_literal] = ACTIONS(394),
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(284),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [sym_block_label_start_expression] = ACTIONS(460),
    [sym_number_literal] = ACTIONS(463),
    [sym__double_quoted_string] = ACTIONS(466),
    [sym__single_quoted_string] = ACTIONS(466),
    [sym_boolean_literal] = ACTIONS(463),
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(34),
  },
  [285] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(548),
    [anon_sym_LPAREN] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [sym_block_label_start_expression] = ACTIONS(552),
    [sym_number_literal] = ACTIONS(552),
    [sym__double_quoted_string] = ACTIONS(552),
    [sym__single_quoted_string] = ACTIONS(552),
    [sym_boolean_literal] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
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
  [287] = {
    [sym__end_of_statement] = STATE(366),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [288] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(373),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(375),
    [aux_sym__block_if_statement_repeat1] = STATE(376),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [sym__end_of_statement] = STATE(377),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [290] = {
    [sym__end_of_statement] = STATE(377),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [291] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [292] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(745),
    [sym__newline] = ACTIONS(745),
  },
  [293] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(378),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(735),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [294] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(747),
    [anon_sym_PERCENT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [sym__block_label] = STATE(380),
    [sym__end_of_statement] = STATE(366),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_STAR] = ACTIONS(672),
    [anon_sym_EQ] = ACTIONS(672),
    [anon_sym_EQ_GT] = ACTIONS(672),
    [anon_sym_PERCENT] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_LT] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_GT] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_LT_EQ] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_GT_EQ] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_EQ_EQ] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_SLASH_EQ] = ACTIONS(672),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_SLASH_SLASH] = ACTIONS(672),
    [anon_sym_PLUS] = ACTIONS(672),
    [anon_sym_DASH] = ACTIONS(672),
    [anon_sym_SLASH] = ACTIONS(672),
    [anon_sym_STAR_STAR] = ACTIONS(672),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(672),
    [sym__newline] = ACTIONS(672),
  },
  [297] = {
    [aux_sym_argument_list_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(749),
    [sym_comment] = ACTIONS(14),
  },
  [298] = {
    [sym_type_qualifier] = STATE(382),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(374),
    [sym_comment] = ACTIONS(14),
  },
  [299] = {
    [sym__declaration_targets] = STATE(383),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [300] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(751),
    [sym__newline] = ACTIONS(751),
  },
  [301] = {
    [sym__declaration_targets] = STATE(383),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_variable_declaration_repeat1] = STATE(385),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_COLON_COLON] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [302] = {
    [sym_argument_list] = STATE(93),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(755),
    [sym__newline] = ACTIONS(755),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(755),
    [sym__newline] = ACTIONS(755),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(755),
    [sym__newline] = ACTIONS(755),
  },
  [305] = {
    [aux_sym__declaration_targets_repeat1] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(757),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(755),
    [sym__newline] = ACTIONS(755),
  },
  [306] = {
    [sym__expression] = STATE(386),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [sym__expression] = STATE(387),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(768),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(620),
    [sym__newline] = ACTIONS(620),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(768),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(622),
    [sym__newline] = ACTIONS(622),
  },
  [310] = {
    [ts_builtin_sym_end] = ACTIONS(778),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(778),
    [sym_comment] = ACTIONS(14),
  },
  [311] = {
    [sym__end_of_statement] = STATE(397),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [312] = {
    [sym__end_of_statement] = STATE(397),
    [sym_identifier] = ACTIONS(780),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [313] = {
    [sym_identifier] = ACTIONS(782),
    [sym_comment] = ACTIONS(14),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_COLON_COLON] = ACTIONS(550),
    [anon_sym_LPAREN] = ACTIONS(548),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [sym_number_literal] = ACTIONS(552),
    [sym__double_quoted_string] = ACTIONS(552),
    [sym__single_quoted_string] = ACTIONS(552),
    [sym_boolean_literal] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [sym__expression] = STATE(400),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [316] = {
    [sym__expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(796),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [318] = {
    [sym__expression] = STATE(411),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_comment] = ACTIONS(14),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(796),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_comment] = ACTIONS(14),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(814),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(814),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(14),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(818),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(624),
    [anon_sym_STAR] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_LT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_EQ_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [anon_sym_STAR_STAR] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_COLON] = ACTIONS(636),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_LT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_EQ_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(820),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_PLUS] = ACTIONS(820),
    [anon_sym_DASH] = ACTIONS(820),
    [sym_number_literal] = ACTIONS(824),
    [sym__double_quoted_string] = ACTIONS(824),
    [sym__single_quoted_string] = ACTIONS(824),
    [sym_boolean_literal] = ACTIONS(824),
    [sym_identifier] = ACTIONS(824),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
    [aux_sym_argument_list_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(14),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
    [anon_sym_STAR] = ACTIONS(829),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_EQ_GT] = ACTIONS(831),
    [anon_sym_PERCENT] = ACTIONS(829),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_LT] = ACTIONS(829),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(829),
    [anon_sym_GT] = ACTIONS(829),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(829),
    [anon_sym_LT_EQ] = ACTIONS(831),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(829),
    [anon_sym_GT_EQ] = ACTIONS(831),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(829),
    [anon_sym_EQ_EQ] = ACTIONS(831),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(829),
    [anon_sym_SLASH_EQ] = ACTIONS(831),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(829),
    [anon_sym_SLASH_SLASH] = ACTIONS(831),
    [anon_sym_PLUS] = ACTIONS(829),
    [anon_sym_DASH] = ACTIONS(829),
    [anon_sym_SLASH] = ACTIONS(829),
    [anon_sym_STAR_STAR] = ACTIONS(831),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_COLON] = ACTIONS(668),
    [anon_sym_STAR] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(668),
    [anon_sym_EQ] = ACTIONS(668),
    [anon_sym_EQ_GT] = ACTIONS(670),
    [anon_sym_PERCENT] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(672),
    [anon_sym_LT] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_GT] = ACTIONS(668),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_LT_EQ] = ACTIONS(670),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_GT_EQ] = ACTIONS(670),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_EQ_EQ] = ACTIONS(670),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_SLASH_EQ] = ACTIONS(670),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(668),
    [anon_sym_SLASH_SLASH] = ACTIONS(670),
    [anon_sym_PLUS] = ACTIONS(668),
    [anon_sym_DASH] = ACTIONS(668),
    [anon_sym_SLASH] = ACTIONS(668),
    [anon_sym_STAR_STAR] = ACTIONS(670),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [aux_sym_argument_list_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym_comment] = ACTIONS(14),
  },
  [339] = {
    [anon_sym_COMMA] = ACTIONS(837),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(837),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(796),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(839),
    [anon_sym_RPAREN] = ACTIONS(839),
    [sym_comment] = ACTIONS(14),
  },
  [341] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(841),
    [sym__newline] = ACTIONS(841),
  },
  [342] = {
    [aux_sym_parameter_statement_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_RPAREN] = ACTIONS(839),
    [sym_comment] = ACTIONS(14),
  },
  [343] = {
    [sym_argument_list] = STATE(257),
    [aux_sym_equivalence_set_repeat1] = STATE(416),
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym_comment] = ACTIONS(14),
  },
  [344] = {
    [aux_sym_equivalence_set_repeat1] = STATE(416),
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym_comment] = ACTIONS(14),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(498),
    [sym_comment] = ACTIONS(14),
  },
  [346] = {
    [aux_sym_argument_list_repeat1] = STATE(418),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(850),
    [anon_sym_PERCENT] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_GT_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_EQ_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_SLASH_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_STAR_STAR] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [347] = {
    [aux_sym_argument_list_repeat1] = STATE(418),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_comment] = ACTIONS(14),
  },
  [348] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(672),
    [sym__newline] = ACTIONS(672),
  },
  [349] = {
    [aux_sym_argument_list_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(854),
    [sym_comment] = ACTIONS(14),
  },
  [350] = {
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(14),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_LT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [sym__expression] = STATE(421),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [sym__expression] = STATE(422),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym__expression] = STATE(423),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [sym__expression] = STATE(424),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym__expression] = STATE(425),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [sym__expression] = STATE(426),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [359] = {
    [sym__expression] = STATE(427),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [360] = {
    [sym__expression] = STATE(428),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [sym__expression] = STATE(429),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [362] = {
    [sym__expression] = STATE(430),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [363] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(858),
    [sym__newline] = ACTIONS(858),
  },
  [364] = {
    [sym__block_label] = STATE(431),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(858),
    [sym__newline] = ACTIONS(858),
  },
  [365] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(610),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_DASH] = ACTIONS(610),
    [sym_block_label_start_expression] = ACTIONS(612),
    [sym_number_literal] = ACTIONS(612),
    [sym__double_quoted_string] = ACTIONS(612),
    [sym__single_quoted_string] = ACTIONS(612),
    [sym_boolean_literal] = ACTIONS(612),
    [sym_identifier] = ACTIONS(612),
    [sym_comment] = ACTIONS(34),
  },
  [366] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(433),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(434),
    [aux_sym__block_if_statement_repeat1] = STATE(435),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [367] = {
    [sym__block_label] = STATE(436),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(862),
    [sym__newline] = ACTIONS(862),
  },
  [368] = {
    [sym_parenthesized_expression] = STATE(437),
    [anon_sym_LPAREN] = ACTIONS(364),
    [sym_comment] = ACTIONS(14),
  },
  [369] = {
    [sym__block_label] = STATE(439),
    [sym__end_of_statement] = STATE(440),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [370] = {
    [sym_subroutine_call] = STATE(441),
    [sym_keyword_statement] = STATE(441),
    [sym_include_statement] = STATE(441),
    [sym_do_loop_statement] = STATE(441),
    [sym_if_statement] = STATE(441),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(441),
    [sym_pointer_assignment_expression] = STATE(441),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(442),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [371] = {
    [sym__end_of_statement] = STATE(443),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [372] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(866),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(866),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(868),
    [sym_comment] = ACTIONS(14),
  },
  [373] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(870),
    [sym_comment] = ACTIONS(14),
  },
  [374] = {
    [sym__end_of_statement] = STATE(443),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [375] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(433),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(444),
    [aux_sym__block_if_statement_repeat1] = STATE(435),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [376] = {
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(433),
    [aux_sym__block_if_statement_repeat1] = STATE(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(870),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(14),
  },
  [377] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(874),
    [sym__newline] = ACTIONS(874),
  },
  [378] = {
    [sym_statement_label] = STATE(179),
    [sym_subroutine_call] = STATE(180),
    [sym_keyword_statement] = STATE(180),
    [sym_include_statement] = STATE(180),
    [sym_do_loop_statement] = STATE(180),
    [sym_if_statement] = STATE(180),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(180),
    [sym_pointer_assignment_expression] = STATE(180),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(181),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(284),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(876),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [379] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(550),
    [sym_comment] = ACTIONS(14),
  },
  [380] = {
    [sym__end_of_statement] = STATE(447),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [381] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_STAR] = ACTIONS(824),
    [anon_sym_EQ] = ACTIONS(824),
    [anon_sym_EQ_GT] = ACTIONS(824),
    [anon_sym_PERCENT] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_LT] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_GT] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_LT_EQ] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_GT_EQ] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_EQ_EQ] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_SLASH_EQ] = ACTIONS(824),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_SLASH_SLASH] = ACTIONS(824),
    [anon_sym_PLUS] = ACTIONS(824),
    [anon_sym_DASH] = ACTIONS(824),
    [anon_sym_SLASH] = ACTIONS(824),
    [anon_sym_STAR_STAR] = ACTIONS(824),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(824),
    [sym__newline] = ACTIONS(824),
  },
  [382] = {
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_COLON_COLON] = ACTIONS(880),
    [anon_sym_LPAREN] = ACTIONS(878),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(878),
    [anon_sym_PLUS] = ACTIONS(878),
    [anon_sym_DASH] = ACTIONS(878),
    [sym_number_literal] = ACTIONS(882),
    [sym__double_quoted_string] = ACTIONS(882),
    [sym__single_quoted_string] = ACTIONS(882),
    [sym_boolean_literal] = ACTIONS(882),
    [sym_identifier] = ACTIONS(882),
    [sym_comment] = ACTIONS(34),
  },
  [383] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(884),
    [sym__newline] = ACTIONS(884),
  },
  [384] = {
    [sym__declaration_targets] = STATE(448),
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [385] = {
    [aux_sym_variable_declaration_repeat1] = STATE(385),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_COLON_COLON] = ACTIONS(880),
    [anon_sym_LPAREN] = ACTIONS(878),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(878),
    [anon_sym_PLUS] = ACTIONS(878),
    [anon_sym_DASH] = ACTIONS(878),
    [sym_number_literal] = ACTIONS(882),
    [sym__double_quoted_string] = ACTIONS(882),
    [sym__single_quoted_string] = ACTIONS(882),
    [sym_boolean_literal] = ACTIONS(882),
    [sym_identifier] = ACTIONS(882),
    [sym_comment] = ACTIONS(34),
  },
  [386] = {
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(356),
    [sym__newline] = ACTIONS(356),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_GT_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_EQ_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(362),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_STAR_STAR] = ACTIONS(362),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(362),
    [sym__newline] = ACTIONS(362),
  },
  [388] = {
    [sym__expression] = STATE(449),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [389] = {
    [sym__expression] = STATE(450),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [390] = {
    [sym__expression] = STATE(451),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [391] = {
    [sym__expression] = STATE(452),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [392] = {
    [sym__expression] = STATE(453),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [393] = {
    [sym__expression] = STATE(454),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [394] = {
    [sym__expression] = STATE(455),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [sym__expression] = STATE(456),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [396] = {
    [sym__expression] = STATE(457),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [397] = {
    [ts_builtin_sym_end] = ACTIONS(889),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(889),
    [sym_comment] = ACTIONS(14),
  },
  [398] = {
    [sym__end_of_statement] = STATE(458),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [399] = {
    [aux_sym_included_items_repeat1] = STATE(460),
    [anon_sym_COMMA] = ACTIONS(891),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(893),
    [sym__newline] = ACTIONS(893),
  },
  [400] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_GT_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
    [sym__expression] = STATE(461),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [403] = {
    [sym__expression] = STATE(462),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [404] = {
    [sym__expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
    [sym__expression] = STATE(464),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
    [sym__expression] = STATE(465),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
    [sym__expression] = STATE(466),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [408] = {
    [sym__expression] = STATE(467),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [409] = {
    [sym__expression] = STATE(468),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [410] = {
    [sym__expression] = STATE(469),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [411] = {
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(796),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [412] = {
    [sym__expression] = STATE(470),
    [sym_parenthesized_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_DASH] = ACTIONS(660),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [413] = {
    [anon_sym_COMMA] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [anon_sym_STAR] = ACTIONS(820),
    [anon_sym_RPAREN] = ACTIONS(820),
    [anon_sym_EQ] = ACTIONS(820),
    [anon_sym_EQ_GT] = ACTIONS(822),
    [anon_sym_PERCENT] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(824),
    [anon_sym_LT] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_GT] = ACTIONS(820),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_LT_EQ] = ACTIONS(822),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_GT_EQ] = ACTIONS(822),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_EQ_EQ] = ACTIONS(822),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_SLASH_EQ] = ACTIONS(822),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(820),
    [anon_sym_SLASH_SLASH] = ACTIONS(822),
    [anon_sym_PLUS] = ACTIONS(820),
    [anon_sym_DASH] = ACTIONS(820),
    [anon_sym_SLASH] = ACTIONS(820),
    [anon_sym_STAR_STAR] = ACTIONS(822),
    [sym_comment] = ACTIONS(34),
  },
  [414] = {
    [sym_call_expression] = STATE(472),
    [sym_identifier] = ACTIONS(897),
    [sym_comment] = ACTIONS(14),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(899),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(899),
    [sym__newline] = ACTIONS(899),
  },
  [416] = {
    [aux_sym_equivalence_set_repeat1] = STATE(474),
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_RPAREN] = ACTIONS(901),
    [sym_comment] = ACTIONS(14),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(670),
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(14),
  },
  [418] = {
    [aux_sym_argument_list_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(903),
    [sym_comment] = ACTIONS(14),
  },
  [419] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(824),
    [sym__newline] = ACTIONS(824),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_STAR] = ACTIONS(833),
    [anon_sym_PERCENT] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_LT] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_GT] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_LT_EQ] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_GT_EQ] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_EQ_EQ] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_SLASH_EQ] = ACTIONS(833),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(833),
    [anon_sym_SLASH_SLASH] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(833),
    [anon_sym_DASH] = ACTIONS(833),
    [anon_sym_SLASH] = ACTIONS(833),
    [anon_sym_STAR_STAR] = ACTIONS(833),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(833),
    [sym__newline] = ACTIONS(833),
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(905),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(768),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(907),
    [sym__newline] = ACTIONS(907),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [423] = {
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_STAR] = ACTIONS(624),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_LT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_EQ_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [anon_sym_STAR_STAR] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [424] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_LT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [425] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_LT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [426] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_LT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_EQ] = ACTIONS(725),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(723),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_LT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_EQ_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [428] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(729),
    [anon_sym_DASH] = ACTIONS(729),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [429] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(711),
    [anon_sym_STAR_STAR] = ACTIONS(731),
    [sym_comment] = ACTIONS(34),
  },
  [430] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [431] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(909),
    [sym__newline] = ACTIONS(909),
  },
  [432] = {
    [sym__block_label] = STATE(477),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(911),
    [sym__newline] = ACTIONS(911),
  },
  [433] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(913),
    [sym_comment] = ACTIONS(14),
  },
  [434] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(479),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(444),
    [aux_sym__block_if_statement_repeat1] = STATE(480),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(915),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [435] = {
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(479),
    [aux_sym__block_if_statement_repeat1] = STATE(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(14),
  },
  [436] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(911),
    [sym__newline] = ACTIONS(911),
  },
  [437] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(917),
    [sym_comment] = ACTIONS(14),
  },
  [438] = {
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
  [439] = {
    [sym__end_of_statement] = STATE(482),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [440] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_include_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(486),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [441] = {
    [sym__end_of_statement] = STATE(487),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [442] = {
    [sym__end_of_statement] = STATE(487),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [443] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [sym_block_label_start_expression] = ACTIONS(394),
    [sym_number_literal] = ACTIONS(394),
    [sym__double_quoted_string] = ACTIONS(394),
    [sym__single_quoted_string] = ACTIONS(394),
    [sym_boolean_literal] = ACTIONS(394),
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [444] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(444),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [sym_block_label_start_expression] = ACTIONS(460),
    [sym_number_literal] = ACTIONS(463),
    [sym__double_quoted_string] = ACTIONS(466),
    [sym__single_quoted_string] = ACTIONS(466),
    [sym_boolean_literal] = ACTIONS(463),
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(34),
  },
  [445] = {
    [sym_elseif_clause] = STATE(372),
    [aux_sym__block_if_statement_repeat1] = STATE(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(921),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(923),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(926),
    [sym_comment] = ACTIONS(14),
  },
  [446] = {
    [sym__block_label] = STATE(488),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(909),
    [sym__newline] = ACTIONS(909),
  },
  [447] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(479),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(489),
    [aux_sym__block_if_statement_repeat1] = STATE(480),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(915),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [448] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(928),
    [sym__newline] = ACTIONS(928),
  },
  [449] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_SLASH] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(618),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [450] = {
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(628),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_GT] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_GT_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_EQ_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_SLASH_EQ] = ACTIONS(628),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_SLASH_SLASH] = ACTIONS(628),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_SLASH] = ACTIONS(628),
    [anon_sym_STAR_STAR] = ACTIONS(628),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(628),
    [sym__newline] = ACTIONS(628),
  },
  [451] = {
    [anon_sym_COMMA] = ACTIONS(634),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(634),
    [sym__newline] = ACTIONS(634),
  },
  [452] = {
    [anon_sym_COMMA] = ACTIONS(634),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(634),
    [sym__newline] = ACTIONS(634),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(634),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_EQ] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(770),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(634),
    [sym__newline] = ACTIONS(634),
  },
  [454] = {
    [anon_sym_COMMA] = ACTIONS(640),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_GT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_GT_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_EQ_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_SLASH_EQ] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(640),
    [sym__newline] = ACTIONS(640),
  },
  [455] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_GT] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_GT_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_EQ_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_SLASH_EQ] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_SLASH_SLASH] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(646),
    [sym__newline] = ACTIONS(646),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(760),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_SLASH] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(760),
    [anon_sym_STAR_STAR] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(762),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_GT_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_EQ] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_SLASH_SLASH] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(618),
    [anon_sym_STAR_STAR] = ACTIONS(618),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [458] = {
    [ts_builtin_sym_end] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(930),
    [sym_comment] = ACTIONS(14),
  },
  [459] = {
    [sym_identifier] = ACTIONS(932),
    [sym_comment] = ACTIONS(14),
  },
  [460] = {
    [aux_sym_included_items_repeat1] = STATE(491),
    [anon_sym_COMMA] = ACTIONS(891),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(934),
    [sym__newline] = ACTIONS(934),
  },
  [461] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [462] = {
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_STAR] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_LT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_GT_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_EQ_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_EQ] = ACTIONS(626),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(624),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [anon_sym_STAR_STAR] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [464] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [465] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [466] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_LT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_GT_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_EQ_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_EQ] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(636),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [467] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [468] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [469] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_EQ] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_SLASH_SLASH] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_STAR_STAR] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [470] = {
    [anon_sym_COMMA] = ACTIONS(936),
    [anon_sym_STAR] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(936),
    [anon_sym_PERCENT] = ACTIONS(788),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(796),
    [anon_sym_LT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(798),
    [anon_sym_SLASH_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(786),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [471] = {
    [sym_argument_list] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(938),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(938),
    [sym_comment] = ACTIONS(14),
  },
  [472] = {
    [anon_sym_COMMA] = ACTIONS(938),
    [anon_sym_RPAREN] = ACTIONS(938),
    [sym_comment] = ACTIONS(14),
  },
  [473] = {
    [anon_sym_COMMA] = ACTIONS(940),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(940),
    [sym__newline] = ACTIONS(940),
  },
  [474] = {
    [aux_sym_equivalence_set_repeat1] = STATE(474),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(938),
    [sym_comment] = ACTIONS(14),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(822),
    [anon_sym_RPAREN] = ACTIONS(822),
    [sym_comment] = ACTIONS(14),
  },
  [476] = {
    [sym__expression] = STATE(492),
    [sym_parenthesized_expression] = STATE(75),
    [sym_derived_type_member_expression] = STATE(75),
    [sym_logical_expression] = STATE(75),
    [sym_relational_expression] = STATE(75),
    [sym_concatenation_expression] = STATE(75),
    [sym_math_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_complex_literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [477] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(945),
    [sym__newline] = ACTIONS(945),
  },
  [478] = {
    [sym__block_label] = STATE(493),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(945),
    [sym__newline] = ACTIONS(945),
  },
  [479] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(947),
    [sym_comment] = ACTIONS(14),
  },
  [480] = {
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(495),
    [aux_sym__block_if_statement_repeat1] = STATE(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(14),
  },
  [481] = {
    [sym__block_label] = STATE(496),
    [sym__end_of_statement] = STATE(497),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [482] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_include_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(498),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(949),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [483] = {
    [sym_subroutine_call] = STATE(499),
    [sym_keyword_statement] = STATE(499),
    [sym_include_statement] = STATE(499),
    [sym_do_loop_statement] = STATE(499),
    [sym_if_statement] = STATE(499),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(499),
    [sym_pointer_assignment_expression] = STATE(499),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(500),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [484] = {
    [sym__end_of_statement] = STATE(501),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [485] = {
    [sym__end_of_statement] = STATE(501),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [486] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_include_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(949),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [487] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(610),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_DASH] = ACTIONS(610),
    [sym_block_label_start_expression] = ACTIONS(612),
    [sym_number_literal] = ACTIONS(612),
    [sym__double_quoted_string] = ACTIONS(612),
    [sym__single_quoted_string] = ACTIONS(612),
    [sym_boolean_literal] = ACTIONS(612),
    [sym_identifier] = ACTIONS(612),
    [sym_comment] = ACTIONS(34),
  },
  [488] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(951),
    [sym__newline] = ACTIONS(951),
  },
  [489] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(495),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(444),
    [aux_sym__block_if_statement_repeat1] = STATE(503),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [490] = {
    [anon_sym_COMMA] = ACTIONS(955),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(955),
    [sym__newline] = ACTIONS(955),
  },
  [491] = {
    [aux_sym_included_items_repeat1] = STATE(491),
    [anon_sym_COMMA] = ACTIONS(957),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(955),
    [sym__newline] = ACTIONS(955),
  },
  [492] = {
    [anon_sym_STAR] = ACTIONS(326),
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
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(960),
    [sym__newline] = ACTIONS(960),
  },
  [493] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(962),
    [sym__newline] = ACTIONS(962),
  },
  [494] = {
    [sym__block_label] = STATE(504),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(962),
    [sym__newline] = ACTIONS(962),
  },
  [495] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(964),
    [sym_comment] = ACTIONS(14),
  },
  [496] = {
    [sym__end_of_statement] = STATE(506),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [497] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(507),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(966),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(966),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(966),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [498] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_include_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(968),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [499] = {
    [sym__end_of_statement] = STATE(508),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [500] = {
    [sym__end_of_statement] = STATE(508),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_STAR_STAR] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [501] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [sym_block_label_start_expression] = ACTIONS(394),
    [sym_number_literal] = ACTIONS(394),
    [sym__double_quoted_string] = ACTIONS(394),
    [sym__single_quoted_string] = ACTIONS(394),
    [sym_boolean_literal] = ACTIONS(394),
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [502] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_include_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [sym_block_label_start_expression] = ACTIONS(460),
    [sym_number_literal] = ACTIONS(463),
    [sym__double_quoted_string] = ACTIONS(466),
    [sym__single_quoted_string] = ACTIONS(466),
    [sym_boolean_literal] = ACTIONS(463),
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(34),
  },
  [503] = {
    [sym_elseif_clause] = STATE(372),
    [sym_else_clause] = STATE(509),
    [aux_sym__block_if_statement_repeat1] = STATE(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(964),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(14),
  },
  [504] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(970),
    [sym__newline] = ACTIONS(970),
  },
  [505] = {
    [sym__block_label] = STATE(510),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(970),
    [sym__newline] = ACTIONS(970),
  },
  [506] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(511),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [507] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(444),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [508] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(610),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_DASH] = ACTIONS(610),
    [sym_block_label_start_expression] = ACTIONS(612),
    [sym_number_literal] = ACTIONS(612),
    [sym__double_quoted_string] = ACTIONS(612),
    [sym__single_quoted_string] = ACTIONS(612),
    [sym_boolean_literal] = ACTIONS(612),
    [sym_identifier] = ACTIONS(612),
    [sym_comment] = ACTIONS(34),
  },
  [509] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(974),
    [sym_comment] = ACTIONS(14),
  },
  [510] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(976),
    [sym__newline] = ACTIONS(976),
  },
  [511] = {
    [sym_statement_label] = STATE(370),
    [sym_subroutine_call] = STATE(371),
    [sym_keyword_statement] = STATE(371),
    [sym_include_statement] = STATE(371),
    [sym_do_loop_statement] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym__inline_if_statement] = STATE(43),
    [sym__block_if_statement] = STATE(43),
    [sym__expression] = STATE(44),
    [sym_parenthesized_expression] = STATE(33),
    [sym_assignment_expression] = STATE(371),
    [sym_pointer_assignment_expression] = STATE(371),
    [sym_derived_type_member_expression] = STATE(33),
    [sym_logical_expression] = STATE(33),
    [sym_relational_expression] = STATE(33),
    [sym_concatenation_expression] = STATE(33),
    [sym_math_expression] = STATE(33),
    [sym_call_expression] = STATE(374),
    [sym_complex_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [aux_sym_program_block_repeat2] = STATE(444),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKuU_RBRACK_LBRACKdD_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_block_label_start_expression] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(82),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(82),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [512] = {
    [sym__block_label] = STATE(513),
    [sym_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(976),
    [sym__newline] = ACTIONS(976),
  },
  [513] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(980),
    [sym__newline] = ACTIONS(980),
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
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_label, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_label, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_use_statement, 2, .alias_sequence_id = 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 2),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_statement, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include_statement, 2, .alias_sequence_id = 2),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__specification_part, 2),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__specification_part, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_targets, 1),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_modification, 2),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [398] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [401] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [404] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [407] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [410] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [413] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [416] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(21),
  [419] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(27),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [424] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(15),
  [427] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(19),
  [430] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(22),
  [433] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(23),
  [436] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(24),
  [439] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(25),
  [442] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(26),
  [445] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(27),
  [448] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(28),
  [451] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(29),
  [454] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(30),
  [457] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(31),
  [460] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(32),
  [463] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(33),
  [466] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(34),
  [469] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2, .fragile = true), SHIFT_REPEAT(35),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_use_statement, 3, .alias_sequence_id = 1),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_size, 1),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(231),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(238),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_statement, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(279),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(302),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_targets, 2),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_modification, 3),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [620] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [622] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(311),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 4),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [688] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_statement, 4),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_statement_repeat1, 2),
  [698] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_statement_repeat1, 2), SHIFT_REPEAT(158),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(350),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(358),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 3),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__declaration_targets_repeat1, 2),
  [757] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__declaration_targets_repeat1, 2), SHIFT_REPEAT(196),
  [760] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(388),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(389),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(390),
  [766] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(391),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(392),
  [770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(393),
  [772] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(395),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(396),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [780] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(398),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [796] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(406),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_shape, 1),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [824] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [826] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(224),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_assignment, 3),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_statement_repeat1, 2),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_statement, 5),
  [843] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_statement_repeat1, 2), SHIFT_REPEAT(252),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [862] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(438),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [874] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [882] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [886] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(298),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(459),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_included_items, 4),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_set, 5),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(476),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [909] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [911] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [923] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(368),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 6),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [934] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_included_items, 5),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_set_repeat1, 2),
  [940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_equivalence_set, 6),
  [942] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_equivalence_set_repeat1, 2), SHIFT_REPEAT(414),
  [945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [951] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [955] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_included_items_repeat1, 2),
  [957] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_included_items_repeat1, 2), SHIFT_REPEAT(459),
  [960] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [962] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [970] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [976] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [980] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
