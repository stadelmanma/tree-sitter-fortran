#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 509
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 1
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

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
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 36,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 37,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 38,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH = 39,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 40,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH = 41,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 43,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 44,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 45,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 46,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 47,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 48,
  anon_sym_EQ = 49,
  anon_sym_EQ_GT = 50,
  anon_sym_PERCENT = 51,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 52,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 53,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 54,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 55,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 56,
  anon_sym_LT = 57,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 58,
  anon_sym_GT = 59,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 60,
  anon_sym_LT_EQ = 61,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 62,
  anon_sym_GT_EQ = 63,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 64,
  anon_sym_EQ_EQ = 65,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 66,
  anon_sym_SLASH_EQ = 67,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 68,
  anon_sym_SLASH_SLASH = 69,
  anon_sym_PLUS = 70,
  anon_sym_DASH = 71,
  anon_sym_SLASH = 72,
  anon_sym_STAR_STAR = 73,
  anon_sym_COLON = 74,
  sym_block_label_start_expression = 75,
  sym_number_literal = 76,
  sym__double_quoted_string = 77,
  sym__single_quoted_string = 78,
  sym_boolean_literal = 79,
  sym_identifier = 80,
  sym_comment = 81,
  sym__semicolon = 82,
  sym__newline = 83,
  sym_translation_unit = 84,
  sym_program_block = 85,
  sym__variable_declaration_statement = 86,
  sym_variable_declaration = 87,
  sym__variable_modification_statment = 88,
  sym_variable_modification = 89,
  sym__declaration_targets = 90,
  sym_intrinsic_type = 91,
  sym_type_qualifier = 92,
  sym_statement_label = 93,
  sym_subroutine_call = 94,
  sym_keyword_statement = 95,
  sym_do_loop_statement = 96,
  sym_if_statement = 97,
  sym__inline_if_statement = 98,
  sym__block_if_statement = 99,
  sym_elseif_clause = 100,
  sym_else_clause = 101,
  sym__expression = 102,
  sym_parenthesized_expression = 103,
  sym_assignment_expression = 104,
  sym_pointer_assignment_expression = 105,
  sym_derived_type_member_expression = 106,
  sym_logical_expression = 107,
  sym_relational_expression = 108,
  sym_concatenation_expression = 109,
  sym_math_expression = 110,
  sym_call_expression = 111,
  sym_argument_list = 112,
  sym_keyword_argument = 113,
  sym_array_slice = 114,
  sym_assumed_size = 115,
  sym_assumed_shape = 116,
  sym__block_label = 117,
  sym_loop_control_expression = 118,
  sym_complex_literal = 119,
  sym_string_literal = 120,
  sym__end_of_statement = 121,
  aux_sym_translation_unit_repeat1 = 122,
  aux_sym_program_block_repeat1 = 123,
  aux_sym_program_block_repeat2 = 124,
  aux_sym_variable_declaration_repeat1 = 125,
  aux_sym__declaration_targets_repeat1 = 126,
  aux_sym__block_if_statement_repeat1 = 127,
  aux_sym_argument_list_repeat1 = 128,
  alias_sym_block_label = 129,
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
  [sym__variable_declaration_statement] = "_variable_declaration_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym__variable_modification_statment] = "_variable_modification_statment",
  [sym_variable_modification] = "variable_modification",
  [sym__declaration_targets] = "_declaration_targets",
  [sym_intrinsic_type] = "intrinsic_type",
  [sym_type_qualifier] = "type_qualifier",
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
  [aux_sym__declaration_targets_repeat1] = "_declaration_targets_repeat1",
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
  [sym__variable_declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_modification_statment] = {
    .visible = false,
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
  [aux_sym__declaration_targets_repeat1] = {
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
        ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(208);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(255);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(273);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(282);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
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
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(171);
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
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 180:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
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
        ADVANCE(71);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(186);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(190);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(210);
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
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
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
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
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
      if (lookahead == 'T' ||
          lookahead == 't')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(274);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
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
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(292);
      END_STATE();
    case 293:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 300:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(301);
      END_STATE();
    case 302:
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(302);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(293);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(304);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(363);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(396);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(400);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(474);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(490);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(498);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(506);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(532);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(540);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(576);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(564);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(306);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(310);
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
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 318:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(325);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 319:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 320:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 321:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 322:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 323:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 325:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 326:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 327:
      if (lookahead == '\"')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 330:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 331:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 332:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(344);
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
    case 333:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 334:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 335:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 336:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 337:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 339:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 340:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 341:
      if (lookahead == '\'')
        ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 344:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 345:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 347:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(350);
      END_STATE();
    case 359:
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
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
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
    case 360:
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
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
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
    case 361:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(304);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(363);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(396);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(400);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(474);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(490);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(498);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(506);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(532);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(540);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(558);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(564);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('H' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(372);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_block_label_start_expression);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(352);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(356);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(401);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(412);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(413);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(429);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(437);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(442);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(460);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(471);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(491);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(507);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(515);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(521);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(533);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(534);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(556);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(559);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 575:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(559);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(577);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '*')
        ADVANCE(578);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == ',')
        ADVANCE(579);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(599);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 580:
      if (lookahead == ':')
        ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(577);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '*')
        ADVANCE(578);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == ',')
        ADVANCE(579);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(582);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(596);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(598);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(599);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(352);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(356);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(584);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(590);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(594);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(603);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(604);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(610);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(603);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(604);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(610);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(617);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(401);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(609);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(614);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(556);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(599);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(582);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(596);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(598);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(599);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 621:
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(621);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 622:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(623);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(652);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(660);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(673);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(681);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(707);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(723);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(622);
      END_STATE();
    case 623:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(624);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(634);
      END_STATE();
    case 624:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(625);
      END_STATE();
    case 625:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(626);
      END_STATE();
    case 626:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(627);
      END_STATE();
    case 627:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(628);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(629);
      END_STATE();
    case 629:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 634:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 642:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(643);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(651);
      END_STATE();
    case 643:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(646);
      END_STATE();
    case 646:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(647);
      END_STATE();
    case 647:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(650);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 652:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(657);
      END_STATE();
    case 657:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(658);
      END_STATE();
    case 658:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(659);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 660:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(662);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(663);
      END_STATE();
    case 663:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(664);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(667);
      END_STATE();
    case 664:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(665);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 667:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 'S' ||
          lookahead == 's')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 673:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(674);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(678);
      END_STATE();
    case 678:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 681:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(696);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(702);
      END_STATE();
    case 682:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(688);
      END_STATE();
    case 688:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 690:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(691);
      END_STATE();
    case 691:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(692);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(693);
      END_STATE();
    case 693:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(694);
      END_STATE();
    case 694:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(695);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 696:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(698);
      END_STATE();
    case 698:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(699);
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
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 702:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(703);
      END_STATE();
    case 703:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(704);
      END_STATE();
    case 704:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(705);
      END_STATE();
    case 705:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(718);
      END_STATE();
    case 708:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(709);
      END_STATE();
    case 709:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 711:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(712);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(713);
      END_STATE();
    case 713:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(714);
      END_STATE();
    case 714:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(716);
      END_STATE();
    case 716:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(719);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(720);
      END_STATE();
    case 720:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(721);
      END_STATE();
    case 721:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(724);
      END_STATE();
    case 724:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(725);
      END_STATE();
    case 725:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(726);
      END_STATE();
    case 726:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(727);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 729:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(730);
      END_STATE();
    case 730:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(731);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(732);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(733);
      END_STATE();
    case 733:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(734);
      END_STATE();
    case 734:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(735);
      END_STATE();
    case 735:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 737:
      if (lookahead == '\n')
        SKIP(737);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == ')')
        ADVANCE(797);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ':')
        ADVANCE(803);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(805);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(807);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(743);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(748);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(753);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(758);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(747);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(746);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(749);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(754);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(755);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(757);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(763);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 768:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(769);
      END_STATE();
    case 769:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(770);
      END_STATE();
    case 770:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 772:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(773);
      END_STATE();
    case 773:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(776);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(775);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 777:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(778);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(780);
      END_STATE();
    case 778:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(779);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 780:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(781);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 782:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(783);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(785);
      END_STATE();
    case 783:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(784);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 785:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 787:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(788);
      END_STATE();
    case 788:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(792);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(790);
      END_STATE();
    case 790:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 793:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(794);
      END_STATE();
    case 794:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(795);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 807:
      if (lookahead == '\n')
        SKIP(737);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == ')')
        ADVANCE(797);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ':')
        ADVANCE(803);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(805);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(807);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(810);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(811);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(814);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(817);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(820);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 808:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 809:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(770);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(788);
      END_STATE();
    case 810:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(773);
      END_STATE();
    case 811:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(812);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(780);
      END_STATE();
    case 812:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(779);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(776);
      END_STATE();
    case 814:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(815);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(785);
      END_STATE();
    case 815:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(784);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(776);
      END_STATE();
    case 817:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(818);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 818:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(792);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(776);
      END_STATE();
    case 820:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(794);
      END_STATE();
    case 821:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ';')
        ADVANCE(823);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(805);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(824);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ';')
        ADVANCE(823);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(805);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(824);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(810);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(811);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(814);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(817);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(820);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(825);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(827);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(825);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(827);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(617);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(460);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(828);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == ')')
        ADVANCE(829);
      if (lookahead == '*')
        ADVANCE(578);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == ',')
        ADVANCE(579);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(599);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(357);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(828);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == ')')
        ADVANCE(829);
      if (lookahead == '*')
        ADVANCE(578);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == ',')
        ADVANCE(579);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == ':')
        ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(582);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(596);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(598);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(599);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 832:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(833);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(832);
      END_STATE();
    case 833:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(834);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(836);
      END_STATE();
    case 835:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(836);
      END_STATE();
    case 836:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(837);
      END_STATE();
    case 837:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(838);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 839:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(840);
      END_STATE();
    case 840:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(841);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 842:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '=')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(842);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(844);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(845);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(846);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(844);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(845);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(846);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(617);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(847);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(848);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(849);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 849:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(849);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(850);
      END_STATE();
    case 850:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(854);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(610);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(860);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(854);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(610);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(856);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(857);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(857);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        SKIP(861);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == ')')
        ADVANCE(797);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ':')
        ADVANCE(803);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(862);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(863);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(793);
      END_STATE();
    case 863:
      if (lookahead == '\n')
        SKIP(861);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == ')')
        ADVANCE(797);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ':')
        ADVANCE(803);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(862);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(863);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(810);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(811);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(814);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(817);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(820);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 864:
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ';')
        ADVANCE(823);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(862);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(865);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(303);
      if (lookahead == '!')
        ADVANCE(738);
      if (lookahead == '%')
        ADVANCE(767);
      if (lookahead == '(')
        ADVANCE(796);
      if (lookahead == '*')
        ADVANCE(798);
      if (lookahead == '+')
        ADVANCE(799);
      if (lookahead == ',')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(801);
      if (lookahead == '/')
        ADVANCE(802);
      if (lookahead == ';')
        ADVANCE(823);
      if (lookahead == '<')
        ADVANCE(804);
      if (lookahead == '=')
        ADVANCE(862);
      if (lookahead == '>')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(865);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(810);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(811);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(814);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(817);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(820);
      if (lookahead != 0)
        ADVANCE(821);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(867);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(868);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(869);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(866);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 867:
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
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 870:
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
    case 871:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(871);
      END_STATE();
    case 872:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(873);
      END_STATE();
    case 873:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(874);
      END_STATE();
    case 874:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(875);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(876);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(877);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(878);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(876);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(877);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(878);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(617);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(879);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(884);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(885);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 886:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(887);
      END_STATE();
    case 887:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(888);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    case 891:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(892);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(891);
      END_STATE();
    case 892:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(893);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(896);
      END_STATE();
    case 893:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(894);
      END_STATE();
    case 894:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(895);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(886);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(897);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(898);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(899);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(897);
      if (lookahead == '!')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead == '(')
        ADVANCE(346);
      if (lookahead == '+')
        ADVANCE(359);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(898);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(606);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(899);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(612);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(617);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(575);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(884);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(371);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 292},
  [2] = {.lex_state = 300},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 292},
  [5] = {.lex_state = 292},
  [6] = {.lex_state = 302},
  [7] = {.lex_state = 292},
  [8] = {.lex_state = 302},
  [9] = {.lex_state = 304},
  [10] = {.lex_state = 304},
  [11] = {.lex_state = 304},
  [12] = {.lex_state = 302},
  [13] = {.lex_state = 577},
  [14] = {.lex_state = 603},
  [15] = {.lex_state = 577},
  [16] = {.lex_state = 577},
  [17] = {.lex_state = 300},
  [18] = {.lex_state = 577},
  [19] = {.lex_state = 300},
  [20] = {.lex_state = 302},
  [21] = {.lex_state = 300},
  [22] = {.lex_state = 300},
  [23] = {.lex_state = 618},
  [24] = {.lex_state = 621},
  [25] = {.lex_state = 300},
  [26] = {.lex_state = 577},
  [27] = {.lex_state = 577},
  [28] = {.lex_state = 622},
  [29] = {.lex_state = 737},
  [30] = {.lex_state = 737},
  [31] = {.lex_state = 737},
  [32] = {.lex_state = 304},
  [33] = {.lex_state = 302},
  [34] = {.lex_state = 302},
  [35] = {.lex_state = 577},
  [36] = {.lex_state = 577},
  [37] = {.lex_state = 603},
  [38] = {.lex_state = 302},
  [39] = {.lex_state = 302},
  [40] = {.lex_state = 737},
  [41] = {.lex_state = 822},
  [42] = {.lex_state = 304},
  [43] = {.lex_state = 825},
  [44] = {.lex_state = 302},
  [45] = {.lex_state = 304},
  [46] = {.lex_state = 825},
  [47] = {.lex_state = 621},
  [48] = {.lex_state = 292},
  [49] = {.lex_state = 292},
  [50] = {.lex_state = 300},
  [51] = {.lex_state = 828},
  [52] = {.lex_state = 577},
  [53] = {.lex_state = 577},
  [54] = {.lex_state = 832},
  [55] = {.lex_state = 577},
  [56] = {.lex_state = 577},
  [57] = {.lex_state = 737},
  [58] = {.lex_state = 737},
  [59] = {.lex_state = 737},
  [60] = {.lex_state = 300},
  [61] = {.lex_state = 302},
  [62] = {.lex_state = 302},
  [63] = {.lex_state = 302},
  [64] = {.lex_state = 577},
  [65] = {.lex_state = 577},
  [66] = {.lex_state = 577},
  [67] = {.lex_state = 822},
  [68] = {.lex_state = 822},
  [69] = {.lex_state = 822},
  [70] = {.lex_state = 822},
  [71] = {.lex_state = 842},
  [72] = {.lex_state = 844},
  [73] = {.lex_state = 302},
  [74] = {.lex_state = 844},
  [75] = {.lex_state = 577},
  [76] = {.lex_state = 854},
  [77] = {.lex_state = 737},
  [78] = {.lex_state = 737},
  [79] = {.lex_state = 737},
  [80] = {.lex_state = 621},
  [81] = {.lex_state = 300},
  [82] = {.lex_state = 828},
  [83] = {.lex_state = 822},
  [84] = {.lex_state = 304},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 622},
  [87] = {.lex_state = 577},
  [88] = {.lex_state = 577},
  [89] = {.lex_state = 577},
  [90] = {.lex_state = 577},
  [91] = {.lex_state = 861},
  [92] = {.lex_state = 861},
  [93] = {.lex_state = 864},
  [94] = {.lex_state = 302},
  [95] = {.lex_state = 861},
  [96] = {.lex_state = 621},
  [97] = {.lex_state = 864},
  [98] = {.lex_state = 577},
  [99] = {.lex_state = 302},
  [100] = {.lex_state = 302},
  [101] = {.lex_state = 822},
  [102] = {.lex_state = 825},
  [103] = {.lex_state = 825},
  [104] = {.lex_state = 577},
  [105] = {.lex_state = 577},
  [106] = {.lex_state = 577},
  [107] = {.lex_state = 577},
  [108] = {.lex_state = 577},
  [109] = {.lex_state = 577},
  [110] = {.lex_state = 577},
  [111] = {.lex_state = 577},
  [112] = {.lex_state = 577},
  [113] = {.lex_state = 577},
  [114] = {.lex_state = 577},
  [115] = {.lex_state = 304},
  [116] = {.lex_state = 825},
  [117] = {.lex_state = 621},
  [118] = {.lex_state = 292},
  [119] = {.lex_state = 302},
  [120] = {.lex_state = 825},
  [121] = {.lex_state = 302},
  [122] = {.lex_state = 577},
  [123] = {.lex_state = 577},
  [124] = {.lex_state = 842},
  [125] = {.lex_state = 577},
  [126] = {.lex_state = 577},
  [127] = {.lex_state = 577},
  [128] = {.lex_state = 828},
  [129] = {.lex_state = 861},
  [130] = {.lex_state = 737},
  [131] = {.lex_state = 842},
  [132] = {.lex_state = 842},
  [133] = {.lex_state = 737},
  [134] = {.lex_state = 737},
  [135] = {.lex_state = 866},
  [136] = {.lex_state = 828},
  [137] = {.lex_state = 737},
  [138] = {.lex_state = 577},
  [139] = {.lex_state = 737},
  [140] = {.lex_state = 577},
  [141] = {.lex_state = 577},
  [142] = {.lex_state = 577},
  [143] = {.lex_state = 577},
  [144] = {.lex_state = 577},
  [145] = {.lex_state = 577},
  [146] = {.lex_state = 577},
  [147] = {.lex_state = 577},
  [148] = {.lex_state = 828},
  [149] = {.lex_state = 302},
  [150] = {.lex_state = 737},
  [151] = {.lex_state = 737},
  [152] = {.lex_state = 737},
  [153] = {.lex_state = 822},
  [154] = {.lex_state = 822},
  [155] = {.lex_state = 577},
  [156] = {.lex_state = 577},
  [157] = {.lex_state = 577},
  [158] = {.lex_state = 577},
  [159] = {.lex_state = 577},
  [160] = {.lex_state = 577},
  [161] = {.lex_state = 577},
  [162] = {.lex_state = 577},
  [163] = {.lex_state = 577},
  [164] = {.lex_state = 577},
  [165] = {.lex_state = 844},
  [166] = {.lex_state = 621},
  [167] = {.lex_state = 603},
  [168] = {.lex_state = 302},
  [169] = {.lex_state = 822},
  [170] = {.lex_state = 844},
  [171] = {.lex_state = 737},
  [172] = {.lex_state = 621},
  [173] = {.lex_state = 603},
  [174] = {.lex_state = 302},
  [175] = {.lex_state = 822},
  [176] = {.lex_state = 302},
  [177] = {.lex_state = 577},
  [178] = {.lex_state = 871},
  [179] = {.lex_state = 822},
  [180] = {.lex_state = 737},
  [181] = {.lex_state = 842},
  [182] = {.lex_state = 577},
  [183] = {.lex_state = 302},
  [184] = {.lex_state = 737},
  [185] = {.lex_state = 737},
  [186] = {.lex_state = 737},
  [187] = {.lex_state = 861},
  [188] = {.lex_state = 861},
  [189] = {.lex_state = 861},
  [190] = {.lex_state = 577},
  [191] = {.lex_state = 828},
  [192] = {.lex_state = 864},
  [193] = {.lex_state = 621},
  [194] = {.lex_state = 577},
  [195] = {.lex_state = 577},
  [196] = {.lex_state = 577},
  [197] = {.lex_state = 577},
  [198] = {.lex_state = 577},
  [199] = {.lex_state = 577},
  [200] = {.lex_state = 577},
  [201] = {.lex_state = 577},
  [202] = {.lex_state = 577},
  [203] = {.lex_state = 577},
  [204] = {.lex_state = 302},
  [205] = {.lex_state = 825},
  [206] = {.lex_state = 737},
  [207] = {.lex_state = 822},
  [208] = {.lex_state = 822},
  [209] = {.lex_state = 737},
  [210] = {.lex_state = 737},
  [211] = {.lex_state = 737},
  [212] = {.lex_state = 737},
  [213] = {.lex_state = 737},
  [214] = {.lex_state = 737},
  [215] = {.lex_state = 737},
  [216] = {.lex_state = 737},
  [217] = {.lex_state = 302},
  [218] = {.lex_state = 292},
  [219] = {.lex_state = 621},
  [220] = {.lex_state = 302},
  [221] = {.lex_state = 737},
  [222] = {.lex_state = 737},
  [223] = {.lex_state = 737},
  [224] = {.lex_state = 577},
  [225] = {.lex_state = 737},
  [226] = {.lex_state = 828},
  [227] = {.lex_state = 828},
  [228] = {.lex_state = 577},
  [229] = {.lex_state = 577},
  [230] = {.lex_state = 577},
  [231] = {.lex_state = 577},
  [232] = {.lex_state = 577},
  [233] = {.lex_state = 577},
  [234] = {.lex_state = 577},
  [235] = {.lex_state = 577},
  [236] = {.lex_state = 577},
  [237] = {.lex_state = 577},
  [238] = {.lex_state = 828},
  [239] = {.lex_state = 842},
  [240] = {.lex_state = 577},
  [241] = {.lex_state = 842},
  [242] = {.lex_state = 737},
  [243] = {.lex_state = 737},
  [244] = {.lex_state = 842},
  [245] = {.lex_state = 737},
  [246] = {.lex_state = 737},
  [247] = {.lex_state = 737},
  [248] = {.lex_state = 737},
  [249] = {.lex_state = 737},
  [250] = {.lex_state = 737},
  [251] = {.lex_state = 737},
  [252] = {.lex_state = 737},
  [253] = {.lex_state = 737},
  [254] = {.lex_state = 302},
  [255] = {.lex_state = 737},
  [256] = {.lex_state = 842},
  [257] = {.lex_state = 866},
  [258] = {.lex_state = 822},
  [259] = {.lex_state = 822},
  [260] = {.lex_state = 822},
  [261] = {.lex_state = 822},
  [262] = {.lex_state = 822},
  [263] = {.lex_state = 822},
  [264] = {.lex_state = 822},
  [265] = {.lex_state = 822},
  [266] = {.lex_state = 822},
  [267] = {.lex_state = 822},
  [268] = {.lex_state = 577},
  [269] = {.lex_state = 577},
  [270] = {.lex_state = 737},
  [271] = {.lex_state = 621},
  [272] = {.lex_state = 844},
  [273] = {.lex_state = 302},
  [274] = {.lex_state = 302},
  [275] = {.lex_state = 302},
  [276] = {.lex_state = 822},
  [277] = {.lex_state = 844},
  [278] = {.lex_state = 844},
  [279] = {.lex_state = 854},
  [280] = {.lex_state = 876},
  [281] = {.lex_state = 302},
  [282] = {.lex_state = 876},
  [283] = {.lex_state = 302},
  [284] = {.lex_state = 822},
  [285] = {.lex_state = 302},
  [286] = {.lex_state = 302},
  [287] = {.lex_state = 844},
  [288] = {.lex_state = 737},
  [289] = {.lex_state = 621},
  [290] = {.lex_state = 822},
  [291] = {.lex_state = 842},
  [292] = {.lex_state = 622},
  [293] = {.lex_state = 577},
  [294] = {.lex_state = 302},
  [295] = {.lex_state = 577},
  [296] = {.lex_state = 866},
  [297] = {.lex_state = 861},
  [298] = {.lex_state = 828},
  [299] = {.lex_state = 861},
  [300] = {.lex_state = 864},
  [301] = {.lex_state = 621},
  [302] = {.lex_state = 864},
  [303] = {.lex_state = 864},
  [304] = {.lex_state = 737},
  [305] = {.lex_state = 842},
  [306] = {.lex_state = 621},
  [307] = {.lex_state = 861},
  [308] = {.lex_state = 577},
  [309] = {.lex_state = 577},
  [310] = {.lex_state = 822},
  [311] = {.lex_state = 861},
  [312] = {.lex_state = 861},
  [313] = {.lex_state = 861},
  [314] = {.lex_state = 861},
  [315] = {.lex_state = 861},
  [316] = {.lex_state = 861},
  [317] = {.lex_state = 861},
  [318] = {.lex_state = 861},
  [319] = {.lex_state = 292},
  [320] = {.lex_state = 302},
  [321] = {.lex_state = 621},
  [322] = {.lex_state = 577},
  [323] = {.lex_state = 577},
  [324] = {.lex_state = 577},
  [325] = {.lex_state = 737},
  [326] = {.lex_state = 577},
  [327] = {.lex_state = 842},
  [328] = {.lex_state = 737},
  [329] = {.lex_state = 842},
  [330] = {.lex_state = 737},
  [331] = {.lex_state = 842},
  [332] = {.lex_state = 737},
  [333] = {.lex_state = 737},
  [334] = {.lex_state = 737},
  [335] = {.lex_state = 737},
  [336] = {.lex_state = 737},
  [337] = {.lex_state = 737},
  [338] = {.lex_state = 737},
  [339] = {.lex_state = 737},
  [340] = {.lex_state = 737},
  [341] = {.lex_state = 737},
  [342] = {.lex_state = 577},
  [343] = {.lex_state = 842},
  [344] = {.lex_state = 737},
  [345] = {.lex_state = 737},
  [346] = {.lex_state = 842},
  [347] = {.lex_state = 302},
  [348] = {.lex_state = 842},
  [349] = {.lex_state = 842},
  [350] = {.lex_state = 737},
  [351] = {.lex_state = 737},
  [352] = {.lex_state = 577},
  [353] = {.lex_state = 577},
  [354] = {.lex_state = 577},
  [355] = {.lex_state = 577},
  [356] = {.lex_state = 577},
  [357] = {.lex_state = 577},
  [358] = {.lex_state = 577},
  [359] = {.lex_state = 577},
  [360] = {.lex_state = 577},
  [361] = {.lex_state = 577},
  [362] = {.lex_state = 302},
  [363] = {.lex_state = 621},
  [364] = {.lex_state = 844},
  [365] = {.lex_state = 876},
  [366] = {.lex_state = 621},
  [367] = {.lex_state = 300},
  [368] = {.lex_state = 621},
  [369] = {.lex_state = 603},
  [370] = {.lex_state = 302},
  [371] = {.lex_state = 891},
  [372] = {.lex_state = 891},
  [373] = {.lex_state = 822},
  [374] = {.lex_state = 876},
  [375] = {.lex_state = 891},
  [376] = {.lex_state = 302},
  [377] = {.lex_state = 844},
  [378] = {.lex_state = 871},
  [379] = {.lex_state = 302},
  [380] = {.lex_state = 822},
  [381] = {.lex_state = 577},
  [382] = {.lex_state = 302},
  [383] = {.lex_state = 577},
  [384] = {.lex_state = 577},
  [385] = {.lex_state = 842},
  [386] = {.lex_state = 861},
  [387] = {.lex_state = 737},
  [388] = {.lex_state = 842},
  [389] = {.lex_state = 864},
  [390] = {.lex_state = 842},
  [391] = {.lex_state = 822},
  [392] = {.lex_state = 822},
  [393] = {.lex_state = 577},
  [394] = {.lex_state = 577},
  [395] = {.lex_state = 577},
  [396] = {.lex_state = 577},
  [397] = {.lex_state = 577},
  [398] = {.lex_state = 577},
  [399] = {.lex_state = 577},
  [400] = {.lex_state = 577},
  [401] = {.lex_state = 577},
  [402] = {.lex_state = 292},
  [403] = {.lex_state = 302},
  [404] = {.lex_state = 737},
  [405] = {.lex_state = 737},
  [406] = {.lex_state = 577},
  [407] = {.lex_state = 577},
  [408] = {.lex_state = 577},
  [409] = {.lex_state = 577},
  [410] = {.lex_state = 577},
  [411] = {.lex_state = 577},
  [412] = {.lex_state = 577},
  [413] = {.lex_state = 577},
  [414] = {.lex_state = 577},
  [415] = {.lex_state = 737},
  [416] = {.lex_state = 577},
  [417] = {.lex_state = 737},
  [418] = {.lex_state = 302},
  [419] = {.lex_state = 822},
  [420] = {.lex_state = 822},
  [421] = {.lex_state = 737},
  [422] = {.lex_state = 737},
  [423] = {.lex_state = 737},
  [424] = {.lex_state = 737},
  [425] = {.lex_state = 737},
  [426] = {.lex_state = 737},
  [427] = {.lex_state = 737},
  [428] = {.lex_state = 737},
  [429] = {.lex_state = 737},
  [430] = {.lex_state = 302},
  [431] = {.lex_state = 621},
  [432] = {.lex_state = 891},
  [433] = {.lex_state = 876},
  [434] = {.lex_state = 891},
  [435] = {.lex_state = 302},
  [436] = {.lex_state = 871},
  [437] = {.lex_state = 897},
  [438] = {.lex_state = 302},
  [439] = {.lex_state = 897},
  [440] = {.lex_state = 302},
  [441] = {.lex_state = 822},
  [442] = {.lex_state = 876},
  [443] = {.lex_state = 876},
  [444] = {.lex_state = 891},
  [445] = {.lex_state = 621},
  [446] = {.lex_state = 876},
  [447] = {.lex_state = 302},
  [448] = {.lex_state = 861},
  [449] = {.lex_state = 861},
  [450] = {.lex_state = 842},
  [451] = {.lex_state = 864},
  [452] = {.lex_state = 822},
  [453] = {.lex_state = 822},
  [454] = {.lex_state = 822},
  [455] = {.lex_state = 822},
  [456] = {.lex_state = 822},
  [457] = {.lex_state = 822},
  [458] = {.lex_state = 822},
  [459] = {.lex_state = 822},
  [460] = {.lex_state = 822},
  [461] = {.lex_state = 292},
  [462] = {.lex_state = 737},
  [463] = {.lex_state = 737},
  [464] = {.lex_state = 737},
  [465] = {.lex_state = 737},
  [466] = {.lex_state = 737},
  [467] = {.lex_state = 737},
  [468] = {.lex_state = 737},
  [469] = {.lex_state = 737},
  [470] = {.lex_state = 737},
  [471] = {.lex_state = 737},
  [472] = {.lex_state = 577},
  [473] = {.lex_state = 302},
  [474] = {.lex_state = 621},
  [475] = {.lex_state = 891},
  [476] = {.lex_state = 891},
  [477] = {.lex_state = 621},
  [478] = {.lex_state = 897},
  [479] = {.lex_state = 603},
  [480] = {.lex_state = 302},
  [481] = {.lex_state = 822},
  [482] = {.lex_state = 897},
  [483] = {.lex_state = 876},
  [484] = {.lex_state = 302},
  [485] = {.lex_state = 876},
  [486] = {.lex_state = 861},
  [487] = {.lex_state = 822},
  [488] = {.lex_state = 302},
  [489] = {.lex_state = 621},
  [490] = {.lex_state = 891},
  [491] = {.lex_state = 302},
  [492] = {.lex_state = 876},
  [493] = {.lex_state = 897},
  [494] = {.lex_state = 302},
  [495] = {.lex_state = 822},
  [496] = {.lex_state = 897},
  [497] = {.lex_state = 897},
  [498] = {.lex_state = 891},
  [499] = {.lex_state = 302},
  [500] = {.lex_state = 621},
  [501] = {.lex_state = 876},
  [502] = {.lex_state = 876},
  [503] = {.lex_state = 897},
  [504] = {.lex_state = 891},
  [505] = {.lex_state = 302},
  [506] = {.lex_state = 876},
  [507] = {.lex_state = 621},
  [508] = {.lex_state = 302},
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
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
    [sym__variable_declaration_statement] = STATE(32),
    [sym_variable_declaration] = STATE(33),
    [sym__variable_modification_statment] = STATE(32),
    [sym_variable_modification] = STATE(34),
    [sym_intrinsic_type] = STATE(35),
    [sym_type_qualifier] = STATE(36),
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat1] = STATE(42),
    [aux_sym_program_block_repeat2] = STATE(43),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym__variable_declaration_statement] = STATE(32),
    [sym_variable_declaration] = STATE(33),
    [sym__variable_modification_statment] = STATE(32),
    [sym_variable_modification] = STATE(34),
    [sym_intrinsic_type] = STATE(35),
    [sym_type_qualifier] = STATE(36),
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat1] = STATE(45),
    [aux_sym_program_block_repeat2] = STATE(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(80),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(49),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [13] = {
    [sym_argument_list] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_COLON_COLON] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_number_literal] = ACTIONS(94),
    [sym__double_quoted_string] = ACTIONS(94),
    [sym__single_quoted_string] = ACTIONS(94),
    [sym_boolean_literal] = ACTIONS(94),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [anon_sym_LPAREN] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_block_label_start_expression] = ACTIONS(98),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_COLON_COLON] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_number_literal] = ACTIONS(104),
    [sym__double_quoted_string] = ACTIONS(104),
    [sym__single_quoted_string] = ACTIONS(104),
    [sym_boolean_literal] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_COLON_COLON] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(92),
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
  [17] = {
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym__expression] = STATE(59),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(118),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [sym_call_expression] = STATE(61),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [21] = {
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym_statement_label] = STATE(62),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [sym__expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [24] = {
    [sym_loop_control_expression] = STATE(73),
    [sym__end_of_statement] = STATE(74),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [25] = {
    [sym_parenthesized_expression] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(146),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [sym__expression] = STATE(78),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym__expression] = STATE(79),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(160),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [sym_argument_list] = STATE(83),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [sym_block_label_start_expression] = ACTIONS(170),
    [sym_number_literal] = ACTIONS(170),
    [sym__double_quoted_string] = ACTIONS(170),
    [sym__single_quoted_string] = ACTIONS(170),
    [sym_boolean_literal] = ACTIONS(170),
    [sym_identifier] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [33] = {
    [sym__end_of_statement] = STATE(84),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [34] = {
    [sym__end_of_statement] = STATE(85),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [35] = {
    [sym__declaration_targets] = STATE(94),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_COLON_COLON] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [sym__declaration_targets] = STATE(99),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_COLON_COLON] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym_subroutine_call] = STATE(100),
    [sym_keyword_statement] = STATE(100),
    [sym_do_loop_statement] = STATE(100),
    [sym_if_statement] = STATE(100),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(100),
    [sym_pointer_assignment_expression] = STATE(100),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(101),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [sym__end_of_statement] = STATE(103),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
  },
  [39] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
  },
  [40] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_EQ_GT] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__end_of_statement] = STATE(103),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
  },
  [42] = {
    [sym__variable_declaration_statement] = STATE(32),
    [sym_variable_declaration] = STATE(33),
    [sym__variable_modification_statment] = STATE(32),
    [sym_variable_modification] = STATE(34),
    [sym_intrinsic_type] = STATE(35),
    [sym_type_qualifier] = STATE(36),
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat1] = STATE(115),
    [aux_sym_program_block_repeat2] = STATE(46),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(80),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [43] = {
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(116),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [sym__end_of_statement] = STATE(118),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [45] = {
    [sym__variable_declaration_statement] = STATE(32),
    [sym_variable_declaration] = STATE(33),
    [sym__variable_modification_statment] = STATE(32),
    [sym_variable_modification] = STATE(34),
    [sym_intrinsic_type] = STATE(35),
    [sym_type_qualifier] = STATE(36),
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat1] = STATE(115),
    [aux_sym_program_block_repeat2] = STATE(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(222),
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
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(116),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym__end_of_statement] = STATE(118),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(228),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [sym_parenthesized_expression] = STATE(122),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [sym__expression] = STATE(130),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(131),
    [sym_array_slice] = STATE(131),
    [sym_assumed_size] = STATE(131),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_COLON_COLON] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [sym_number_literal] = ACTIONS(250),
    [sym__double_quoted_string] = ACTIONS(250),
    [sym__single_quoted_string] = ACTIONS(250),
    [sym_boolean_literal] = ACTIONS(250),
    [sym_identifier] = ACTIONS(250),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_COLON_COLON] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(256),
    [sym__double_quoted_string] = ACTIONS(256),
    [sym__single_quoted_string] = ACTIONS(256),
    [sym_boolean_literal] = ACTIONS(256),
    [sym_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(260),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [sym__expression] = STATE(133),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym__expression] = STATE(134),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [sym_argument_list] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [sym_argument_list] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(290),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(292),
    [sym__newline] = ACTIONS(292),
  },
  [62] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(294),
    [sym__newline] = ACTIONS(294),
  },
  [63] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
  },
  [64] = {
    [sym__expression] = STATE(152),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(296),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [sym__expression] = STATE(153),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [sym__expression] = STATE(154),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(164),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(164),
    [sym__newline] = ACTIONS(164),
  },
  [69] = {
    [sym_argument_list] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
  },
  [70] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(294),
    [sym__newline] = ACTIONS(294),
  },
  [71] = {
    [anon_sym_EQ] = ACTIONS(326),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
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
  [73] = {
    [sym__end_of_statement] = STATE(165),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [74] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(170),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym__expression] = STATE(171),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [sym_statement_label] = STATE(173),
    [sym_subroutine_call] = STATE(174),
    [sym_keyword_statement] = STATE(174),
    [sym_do_loop_statement] = STATE(174),
    [sym_if_statement] = STATE(174),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(174),
    [sym_pointer_assignment_expression] = STATE(174),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(175),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [sym_argument_list] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_EQ_GT] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_EQ_GT] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym_loop_control_expression] = STATE(176),
    [sym__end_of_statement] = STATE(165),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [81] = {
    [sym_parenthesized_expression] = STATE(178),
    [anon_sym_LPAREN] = ACTIONS(344),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [sym__expression] = STATE(180),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(181),
    [sym_array_slice] = STATE(181),
    [sym_assumed_size] = STATE(181),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_EQ_GT] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_SLASH_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_STAR_STAR] = ACTIONS(348),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
  },
  [84] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [sym_block_label_start_expression] = ACTIONS(352),
    [sym_number_literal] = ACTIONS(352),
    [sym__double_quoted_string] = ACTIONS(352),
    [sym__single_quoted_string] = ACTIONS(352),
    [sym_boolean_literal] = ACTIONS(352),
    [sym_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [sym_block_label_start_expression] = ACTIONS(356),
    [sym_number_literal] = ACTIONS(356),
    [sym__double_quoted_string] = ACTIONS(356),
    [sym__single_quoted_string] = ACTIONS(356),
    [sym_boolean_literal] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym_type_qualifier] = STATE(182),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [sym__declaration_targets] = STATE(183),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym__expression] = STATE(186),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(364),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [sym__expression] = STATE(188),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym__expression] = STATE(189),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_PERCENT] = ACTIONS(160),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [sym_argument_list] = STATE(192),
    [aux_sym__declaration_targets_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [94] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(376),
    [sym__newline] = ACTIONS(376),
  },
  [95] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [aux_sym__declaration_targets_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [97] = {
    [aux_sym__declaration_targets_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [98] = {
    [sym__declaration_targets] = STATE(204),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(402),
    [sym__newline] = ACTIONS(402),
  },
  [100] = {
    [sym__end_of_statement] = STATE(205),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
  },
  [101] = {
    [sym__end_of_statement] = STATE(205),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
  },
  [102] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
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
  [103] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [sym_block_label_start_expression] = ACTIONS(406),
    [sym_number_literal] = ACTIONS(406),
    [sym__double_quoted_string] = ACTIONS(406),
    [sym__single_quoted_string] = ACTIONS(406),
    [sym_boolean_literal] = ACTIONS(406),
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [sym__expression] = STATE(207),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym__expression] = STATE(209),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [sym__expression] = STATE(210),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__expression] = STATE(211),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [sym__expression] = STATE(212),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym__expression] = STATE(213),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__expression] = STATE(214),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym__expression] = STATE(215),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__expression] = STATE(216),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym__variable_declaration_statement] = STATE(32),
    [sym_variable_declaration] = STATE(33),
    [sym__variable_modification_statment] = STATE(32),
    [sym_variable_modification] = STATE(34),
    [sym_intrinsic_type] = STATE(35),
    [sym_type_qualifier] = STATE(36),
    [aux_sym_program_block_repeat1] = STATE(115),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(408),
    [sym_block_label_start_expression] = ACTIONS(422),
    [sym_number_literal] = ACTIONS(422),
    [sym__double_quoted_string] = ACTIONS(422),
    [sym__single_quoted_string] = ACTIONS(422),
    [sym_boolean_literal] = ACTIONS(422),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(116),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [sym_block_label_start_expression] = ACTIONS(457),
    [sym_number_literal] = ACTIONS(460),
    [sym__double_quoted_string] = ACTIONS(463),
    [sym__single_quoted_string] = ACTIONS(463),
    [sym_boolean_literal] = ACTIONS(460),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__end_of_statement] = STATE(218),
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [sym__end_of_statement] = STATE(218),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(473),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [120] = {
    [sym_statement_label] = STATE(37),
    [sym_subroutine_call] = STATE(38),
    [sym_keyword_statement] = STATE(38),
    [sym_do_loop_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(38),
    [sym_pointer_assignment_expression] = STATE(38),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(41),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(116),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym__end_of_statement] = STATE(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [122] = {
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
  [123] = {
    [sym__expression] = STATE(221),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [sym_comment] = ACTIONS(14),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [sym_number_literal] = ACTIONS(489),
    [sym__double_quoted_string] = ACTIONS(489),
    [sym__single_quoted_string] = ACTIONS(489),
    [sym_boolean_literal] = ACTIONS(489),
    [sym_identifier] = ACTIONS(489),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym__expression] = STATE(222),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym__expression] = STATE(223),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(225),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(491),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(493),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym_argument_list] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [aux_sym_argument_list_repeat1] = STATE(239),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [aux_sym_argument_list_repeat1] = STATE(239),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [anon_sym_RPAREN] = ACTIONS(529),
    [sym_comment] = ACTIONS(14),
  },
  [133] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym_number_literal] = ACTIONS(531),
    [sym_identifier] = ACTIONS(533),
    [sym_comment] = ACTIONS(14),
  },
  [136] = {
    [sym__expression] = STATE(243),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(244),
    [sym_array_slice] = STATE(244),
    [sym_assumed_size] = STATE(244),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_STAR] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(537),
    [anon_sym_EQ_GT] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_LT_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_GT_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_EQ_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_SLASH_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_SLASH_SLASH] = ACTIONS(539),
    [anon_sym_PLUS] = ACTIONS(537),
    [anon_sym_DASH] = ACTIONS(537),
    [anon_sym_SLASH] = ACTIONS(537),
    [anon_sym_STAR_STAR] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(537),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [sym__expression] = STATE(245),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_STAR] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_EQ_GT] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_GT] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_EQ_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_SLASH_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_SLASH_SLASH] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(541),
    [anon_sym_DASH] = ACTIONS(541),
    [anon_sym_SLASH] = ACTIONS(541),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(541),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [sym__expression] = STATE(246),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [sym__expression] = STATE(247),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [sym__expression] = STATE(248),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [sym__expression] = STATE(249),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__expression] = STATE(250),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [sym__expression] = STATE(251),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym__expression] = STATE(252),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [sym__expression] = STATE(253),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym__expression] = STATE(255),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(256),
    [sym_array_slice] = STATE(256),
    [sym_assumed_size] = STATE(256),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(547),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym_argument_list] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
  },
  [154] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(342),
    [sym__newline] = ACTIONS(342),
  },
  [155] = {
    [sym__expression] = STATE(259),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [sym__expression] = STATE(260),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [sym__expression] = STATE(261),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [sym__expression] = STATE(262),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [sym__expression] = STATE(263),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym__expression] = STATE(264),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [sym__expression] = STATE(265),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [sym__expression] = STATE(266),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [sym__expression] = STATE(267),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym__expression] = STATE(270),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(272),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [sym__block_label] = STATE(274),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(561),
    [sym__newline] = ACTIONS(561),
  },
  [167] = {
    [sym_subroutine_call] = STATE(275),
    [sym_keyword_statement] = STATE(275),
    [sym_do_loop_statement] = STATE(275),
    [sym_if_statement] = STATE(275),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(275),
    [sym_pointer_assignment_expression] = STATE(275),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(276),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym__end_of_statement] = STATE(277),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [169] = {
    [sym__end_of_statement] = STATE(277),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [170] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(278),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [sym__block_label] = STATE(281),
    [sym__end_of_statement] = STATE(282),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [173] = {
    [sym_subroutine_call] = STATE(283),
    [sym_keyword_statement] = STATE(283),
    [sym_do_loop_statement] = STATE(283),
    [sym_if_statement] = STATE(283),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(283),
    [sym_pointer_assignment_expression] = STATE(283),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(284),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym__end_of_statement] = STATE(286),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(567),
    [sym__newline] = ACTIONS(567),
  },
  [175] = {
    [sym__end_of_statement] = STATE(286),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(567),
    [sym__newline] = ACTIONS(567),
  },
  [176] = {
    [sym__end_of_statement] = STATE(287),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [177] = {
    [sym__expression] = STATE(288),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(569),
    [sym_comment] = ACTIONS(14),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_LT_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_GT_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_EQ_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_SLASH_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_SLASH_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_STAR_STAR] = ACTIONS(489),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(489),
    [sym__newline] = ACTIONS(489),
  },
  [180] = {
    [aux_sym_argument_list_repeat1] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [181] = {
    [aux_sym_argument_list_repeat1] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_comment] = ACTIONS(14),
  },
  [182] = {
    [sym__declaration_targets] = STATE(294),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [aux_sym_variable_declaration_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(579),
    [sym__newline] = ACTIONS(579),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(581),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [sym_argument_list] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(581),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [sym_argument_list] = STATE(299),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(301),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(302),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(587),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [sym__expression] = STATE(304),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(305),
    [sym_array_slice] = STATE(305),
    [sym_assumed_size] = STATE(305),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(589),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_SLASH_EQ] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_STAR_STAR] = ACTIONS(348),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
  },
  [193] = {
    [aux_sym__declaration_targets_repeat1] = STATE(306),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(591),
    [sym__newline] = ACTIONS(591),
  },
  [194] = {
    [sym__expression] = STATE(307),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__expression] = STATE(310),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [sym__expression] = STATE(312),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [sym__expression] = STATE(313),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [sym__expression] = STATE(314),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [sym__expression] = STATE(315),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [sym__expression] = STATE(316),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [sym__expression] = STATE(317),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [sym__expression] = STATE(318),
    [sym_parenthesized_expression] = STATE(91),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(597),
    [sym__newline] = ACTIONS(597),
  },
  [205] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [sym_block_label_start_expression] = ACTIONS(601),
    [sym_number_literal] = ACTIONS(601),
    [sym__double_quoted_string] = ACTIONS(601),
    [sym__single_quoted_string] = ACTIONS(601),
    [sym_boolean_literal] = ACTIONS(601),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_EQ_GT] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(609),
    [sym__newline] = ACTIONS(609),
  },
  [208] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(611),
    [sym__newline] = ACTIONS(611),
  },
  [209] = {
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_EQ_GT] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_EQ_GT] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_EQ_GT] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_EQ_GT] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(212),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(625),
    [anon_sym_EQ_GT] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(631),
    [anon_sym_EQ_GT] = ACTIONS(633),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_EQ_GT] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_EQ_GT] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(200),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(605),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [sym__end_of_statement] = STATE(319),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(637),
    [sym_comment] = ACTIONS(14),
  },
  [219] = {
    [sym__end_of_statement] = STATE(319),
    [sym_identifier] = ACTIONS(639),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [220] = {
    [sym__end_of_statement] = STATE(319),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [221] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_comment] = ACTIONS(34),
  },
  [224] = {
    [sym__expression] = STATE(325),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(651),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__expression] = STATE(328),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_assumed_size] = STATE(329),
    [sym_assumed_shape] = STATE(329),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(653),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [sym__expression] = STATE(330),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(331),
    [sym_array_slice] = STATE(331),
    [sym_assumed_size] = STATE(331),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym__expression] = STATE(332),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_COLON_COLON] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_PLUS] = ACTIONS(655),
    [anon_sym_DASH] = ACTIONS(655),
    [sym_number_literal] = ACTIONS(659),
    [sym__double_quoted_string] = ACTIONS(659),
    [sym__single_quoted_string] = ACTIONS(659),
    [sym_boolean_literal] = ACTIONS(659),
    [sym_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym__expression] = STATE(333),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [sym__expression] = STATE(334),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [232] = {
    [sym__expression] = STATE(335),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [sym__expression] = STATE(336),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [sym__expression] = STATE(337),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [sym__expression] = STATE(338),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [sym__expression] = STATE(339),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [237] = {
    [sym__expression] = STATE(340),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [sym__expression] = STATE(341),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(649),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(651),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(661),
    [sym_comment] = ACTIONS(14),
  },
  [240] = {
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_COLON_COLON] = ACTIONS(665),
    [anon_sym_LPAREN] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [anon_sym_DASH] = ACTIONS(663),
    [sym_number_literal] = ACTIONS(667),
    [sym__double_quoted_string] = ACTIONS(667),
    [sym__single_quoted_string] = ACTIONS(667),
    [sym_boolean_literal] = ACTIONS(667),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(669),
    [sym_comment] = ACTIONS(14),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_SLASH_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(485),
    [anon_sym_STAR_STAR] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(485),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(673),
    [sym_comment] = ACTIONS(14),
  },
  [245] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [248] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [253] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(605),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(489),
    [sym__newline] = ACTIONS(489),
  },
  [255] = {
    [aux_sym_argument_list_repeat1] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [aux_sym_argument_list_repeat1] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(677),
    [sym_comment] = ACTIONS(14),
  },
  [257] = {
    [sym_number_literal] = ACTIONS(679),
    [sym_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(14),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_SLASH_EQ] = ACTIONS(545),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_SLASH_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(545),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_STAR_STAR] = ACTIONS(545),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(545),
    [sym__newline] = ACTIONS(545),
  },
  [259] = {
    [anon_sym_STAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_EQ_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_SLASH] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [260] = {
    [anon_sym_STAR] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_GT_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_EQ_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_SLASH_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_SLASH_SLASH] = ACTIONS(617),
    [anon_sym_PLUS] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(617),
    [anon_sym_SLASH] = ACTIONS(617),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(617),
    [sym__newline] = ACTIONS(617),
  },
  [261] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [262] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [263] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [264] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_GT] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(629),
    [sym__newline] = ACTIONS(629),
  },
  [265] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_GT_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_SLASH_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(635),
    [sym__newline] = ACTIONS(635),
  },
  [266] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_EQ_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_SLASH] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [267] = {
    [anon_sym_STAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_EQ_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_SLASH] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_STAR_STAR] = ACTIONS(607),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [268] = {
    [sym__expression] = STATE(350),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [sym__expression] = STATE(351),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(695),
    [anon_sym_LT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_LT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_EQ_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [sym__block_label] = STATE(362),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(707),
    [sym__newline] = ACTIONS(707),
  },
  [272] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(278),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [273] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(711),
    [sym__newline] = ACTIONS(711),
  },
  [274] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(707),
    [sym__newline] = ACTIONS(707),
  },
  [275] = {
    [sym__end_of_statement] = STATE(364),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [276] = {
    [sym__end_of_statement] = STATE(364),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [277] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [sym_block_label_start_expression] = ACTIONS(406),
    [sym_number_literal] = ACTIONS(406),
    [sym__double_quoted_string] = ACTIONS(406),
    [sym__single_quoted_string] = ACTIONS(406),
    [sym_boolean_literal] = ACTIONS(406),
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(34),
  },
  [278] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(278),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [sym_block_label_start_expression] = ACTIONS(457),
    [sym_number_literal] = ACTIONS(460),
    [sym__double_quoted_string] = ACTIONS(463),
    [sym__single_quoted_string] = ACTIONS(463),
    [sym_boolean_literal] = ACTIONS(460),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_PLUS] = ACTIONS(541),
    [anon_sym_DASH] = ACTIONS(541),
    [sym_block_label_start_expression] = ACTIONS(545),
    [sym_number_literal] = ACTIONS(545),
    [sym__double_quoted_string] = ACTIONS(545),
    [sym__single_quoted_string] = ACTIONS(545),
    [sym_boolean_literal] = ACTIONS(545),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
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
  [281] = {
    [sym__end_of_statement] = STATE(365),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [282] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(372),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(374),
    [aux_sym__block_if_statement_repeat1] = STATE(375),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [sym__end_of_statement] = STATE(376),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(567),
    [sym__newline] = ACTIONS(567),
  },
  [284] = {
    [sym__end_of_statement] = STATE(376),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(567),
    [sym__newline] = ACTIONS(567),
  },
  [285] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [286] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(719),
    [sym__newline] = ACTIONS(719),
  },
  [287] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(377),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_PERCENT] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [sym__block_label] = STATE(379),
    [sym__end_of_statement] = STATE(365),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [290] = {
    [anon_sym_COMMA] = ACTIONS(659),
    [anon_sym_STAR] = ACTIONS(659),
    [anon_sym_EQ] = ACTIONS(659),
    [anon_sym_EQ_GT] = ACTIONS(659),
    [anon_sym_PERCENT] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_GT] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_SLASH_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_SLASH_SLASH] = ACTIONS(659),
    [anon_sym_PLUS] = ACTIONS(659),
    [anon_sym_DASH] = ACTIONS(659),
    [anon_sym_SLASH] = ACTIONS(659),
    [anon_sym_STAR_STAR] = ACTIONS(659),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(659),
    [sym__newline] = ACTIONS(659),
  },
  [291] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(14),
  },
  [292] = {
    [sym_type_qualifier] = STATE(381),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [sym_comment] = ACTIONS(14),
  },
  [293] = {
    [sym__declaration_targets] = STATE(382),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [294] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(725),
    [sym__newline] = ACTIONS(725),
  },
  [295] = {
    [sym__declaration_targets] = STATE(382),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [aux_sym_variable_declaration_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_COLON_COLON] = ACTIONS(727),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [sym_number_literal] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(14),
  },
  [297] = {
    [anon_sym_STAR] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_PERCENT] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_GT] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_EQ_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_SLASH_EQ] = ACTIONS(543),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_SLASH_SLASH] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(541),
    [anon_sym_DASH] = ACTIONS(541),
    [anon_sym_SLASH] = ACTIONS(541),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [sym__expression] = STATE(387),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_keyword_argument] = STATE(388),
    [sym_array_slice] = STATE(388),
    [sym_assumed_size] = STATE(388),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(733),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [299] = {
    [anon_sym_STAR] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_LT_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_GT_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_EQ_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_SLASH_EQ] = ACTIONS(539),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(537),
    [anon_sym_SLASH_SLASH] = ACTIONS(539),
    [anon_sym_PLUS] = ACTIONS(537),
    [anon_sym_DASH] = ACTIONS(537),
    [anon_sym_SLASH] = ACTIONS(537),
    [anon_sym_STAR_STAR] = ACTIONS(539),
    [sym_comment] = ACTIONS(34),
  },
  [300] = {
    [sym_argument_list] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(735),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(735),
    [sym__newline] = ACTIONS(735),
  },
  [301] = {
    [anon_sym_COMMA] = ACTIONS(735),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(735),
    [sym__newline] = ACTIONS(735),
  },
  [302] = {
    [anon_sym_COMMA] = ACTIONS(735),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(735),
    [sym__newline] = ACTIONS(735),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_LT_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_GT_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_EQ_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_SLASH_EQ] = ACTIONS(489),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_SLASH_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_STAR_STAR] = ACTIONS(489),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(489),
    [sym__newline] = ACTIONS(489),
  },
  [304] = {
    [aux_sym_argument_list_repeat1] = STATE(390),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [305] = {
    [aux_sym_argument_list_repeat1] = STATE(390),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(14),
  },
  [306] = {
    [aux_sym__declaration_targets_repeat1] = STATE(306),
    [anon_sym_COMMA] = ACTIONS(741),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(735),
    [sym__newline] = ACTIONS(735),
  },
  [307] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [sym__expression] = STATE(391),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [sym__expression] = STATE(392),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(752),
    [anon_sym_LT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_LT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_EQ_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(609),
    [sym__newline] = ACTIONS(609),
  },
  [311] = {
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [313] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(625),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [316] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_STAR_STAR] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [318] = {
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(605),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(762),
    [sym_comment] = ACTIONS(14),
  },
  [320] = {
    [sym__end_of_statement] = STATE(402),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [321] = {
    [sym__end_of_statement] = STATE(402),
    [sym_identifier] = ACTIONS(764),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_COLON_COLON] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(541),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(541),
    [anon_sym_PLUS] = ACTIONS(541),
    [anon_sym_DASH] = ACTIONS(541),
    [sym_number_literal] = ACTIONS(545),
    [sym__double_quoted_string] = ACTIONS(545),
    [sym__single_quoted_string] = ACTIONS(545),
    [sym_boolean_literal] = ACTIONS(545),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [sym__expression] = STATE(404),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [324] = {
    [sym__expression] = STATE(405),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(766),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(778),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [326] = {
    [sym__expression] = STATE(415),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RPAREN] = ACTIONS(790),
    [sym_comment] = ACTIONS(14),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(792),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(792),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(778),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(794),
    [sym_comment] = ACTIONS(14),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(796),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(798),
    [sym_comment] = ACTIONS(14),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(603),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(613),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(619),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(619),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(619),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(625),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(631),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(603),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(603),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(766),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(800),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(802),
    [anon_sym_DASH] = ACTIONS(802),
    [sym_number_literal] = ACTIONS(806),
    [sym__double_quoted_string] = ACTIONS(806),
    [sym__single_quoted_string] = ACTIONS(806),
    [sym_boolean_literal] = ACTIONS(806),
    [sym_identifier] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [343] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(798),
    [sym_comment] = ACTIONS(14),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_STAR] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_EQ] = ACTIONS(811),
    [anon_sym_EQ_GT] = ACTIONS(813),
    [anon_sym_PERCENT] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_LT] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_GT] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_LT_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_GT_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_EQ_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_SLASH_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_SLASH_SLASH] = ACTIONS(813),
    [anon_sym_PLUS] = ACTIONS(811),
    [anon_sym_DASH] = ACTIONS(811),
    [anon_sym_SLASH] = ACTIONS(811),
    [anon_sym_STAR_STAR] = ACTIONS(813),
    [anon_sym_COLON] = ACTIONS(811),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_STAR] = ACTIONS(655),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_EQ] = ACTIONS(655),
    [anon_sym_EQ_GT] = ACTIONS(657),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_GT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_EQ_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_SLASH_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_SLASH_SLASH] = ACTIONS(657),
    [anon_sym_PLUS] = ACTIONS(655),
    [anon_sym_DASH] = ACTIONS(655),
    [anon_sym_SLASH] = ACTIONS(655),
    [anon_sym_STAR_STAR] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(655),
    [sym_comment] = ACTIONS(34),
  },
  [346] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(817),
    [sym_comment] = ACTIONS(14),
  },
  [347] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(659),
    [sym__newline] = ACTIONS(659),
  },
  [348] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(14),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym_comment] = ACTIONS(14),
  },
  [350] = {
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_LT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_EQ_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [sym__expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [sym__expression] = STATE(421),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [sym__expression] = STATE(422),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym__expression] = STATE(423),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [sym__expression] = STATE(424),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym__expression] = STATE(425),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [sym__expression] = STATE(426),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [359] = {
    [sym__expression] = STATE(427),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [360] = {
    [sym__expression] = STATE(428),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [sym__expression] = STATE(429),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [362] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(823),
    [sym__newline] = ACTIONS(823),
  },
  [363] = {
    [sym__block_label] = STATE(430),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(823),
    [sym__newline] = ACTIONS(823),
  },
  [364] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [sym_block_label_start_expression] = ACTIONS(601),
    [sym_number_literal] = ACTIONS(601),
    [sym__double_quoted_string] = ACTIONS(601),
    [sym__single_quoted_string] = ACTIONS(601),
    [sym_boolean_literal] = ACTIONS(601),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [365] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(432),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(433),
    [aux_sym__block_if_statement_repeat1] = STATE(434),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [366] = {
    [sym__block_label] = STATE(435),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(827),
    [sym__newline] = ACTIONS(827),
  },
  [367] = {
    [sym_parenthesized_expression] = STATE(436),
    [anon_sym_LPAREN] = ACTIONS(344),
    [sym_comment] = ACTIONS(14),
  },
  [368] = {
    [sym__block_label] = STATE(438),
    [sym__end_of_statement] = STATE(439),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
  },
  [369] = {
    [sym_subroutine_call] = STATE(440),
    [sym_keyword_statement] = STATE(440),
    [sym_do_loop_statement] = STATE(440),
    [sym_if_statement] = STATE(440),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(440),
    [sym_pointer_assignment_expression] = STATE(440),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(441),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [370] = {
    [sym__end_of_statement] = STATE(442),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [371] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(833),
    [sym_comment] = ACTIONS(14),
  },
  [372] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [sym_comment] = ACTIONS(14),
  },
  [373] = {
    [sym__end_of_statement] = STATE(442),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [374] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(432),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym__block_if_statement_repeat1] = STATE(434),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [375] = {
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(432),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [sym_comment] = ACTIONS(14),
  },
  [376] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [377] = {
    [sym_statement_label] = STATE(167),
    [sym_subroutine_call] = STATE(168),
    [sym_keyword_statement] = STATE(168),
    [sym_do_loop_statement] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(168),
    [sym_pointer_assignment_expression] = STATE(168),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(169),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(278),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [378] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(543),
    [sym_comment] = ACTIONS(14),
  },
  [379] = {
    [sym__end_of_statement] = STATE(446),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(806),
    [anon_sym_STAR] = ACTIONS(806),
    [anon_sym_EQ] = ACTIONS(806),
    [anon_sym_EQ_GT] = ACTIONS(806),
    [anon_sym_PERCENT] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_GT] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_LT_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_GT_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_EQ_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_SLASH_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_SLASH_SLASH] = ACTIONS(806),
    [anon_sym_PLUS] = ACTIONS(806),
    [anon_sym_DASH] = ACTIONS(806),
    [anon_sym_SLASH] = ACTIONS(806),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(806),
    [sym__newline] = ACTIONS(806),
  },
  [381] = {
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_COLON_COLON] = ACTIONS(845),
    [anon_sym_LPAREN] = ACTIONS(843),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(843),
    [anon_sym_PLUS] = ACTIONS(843),
    [anon_sym_DASH] = ACTIONS(843),
    [sym_number_literal] = ACTIONS(847),
    [sym__double_quoted_string] = ACTIONS(847),
    [sym__single_quoted_string] = ACTIONS(847),
    [sym_boolean_literal] = ACTIONS(847),
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(34),
  },
  [382] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(849),
    [sym__newline] = ACTIONS(849),
  },
  [383] = {
    [sym__declaration_targets] = STATE(447),
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(91),
    [sym_assignment_expression] = STATE(96),
    [sym_derived_type_member_expression] = STATE(91),
    [sym_logical_expression] = STATE(91),
    [sym_relational_expression] = STATE(91),
    [sym_concatenation_expression] = STATE(91),
    [sym_math_expression] = STATE(91),
    [sym_call_expression] = STATE(97),
    [sym_complex_literal] = STATE(91),
    [sym_string_literal] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [384] = {
    [aux_sym_variable_declaration_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_COLON_COLON] = ACTIONS(845),
    [anon_sym_LPAREN] = ACTIONS(843),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(843),
    [anon_sym_PLUS] = ACTIONS(843),
    [anon_sym_DASH] = ACTIONS(843),
    [sym_number_literal] = ACTIONS(847),
    [sym__double_quoted_string] = ACTIONS(847),
    [sym__single_quoted_string] = ACTIONS(847),
    [sym_boolean_literal] = ACTIONS(847),
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(34),
  },
  [385] = {
    [anon_sym_RPAREN] = ACTIONS(854),
    [sym_comment] = ACTIONS(14),
  },
  [386] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_SLASH_EQ] = ACTIONS(487),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(485),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(485),
    [anon_sym_STAR_STAR] = ACTIONS(487),
    [sym_comment] = ACTIONS(34),
  },
  [387] = {
    [aux_sym_argument_list_repeat1] = STATE(450),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_PERCENT] = ACTIONS(503),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(513),
    [anon_sym_SLASH_SLASH] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_STAR_STAR] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(523),
    [sym_comment] = ACTIONS(34),
  },
  [388] = {
    [aux_sym_argument_list_repeat1] = STATE(450),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(858),
    [sym_comment] = ACTIONS(14),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(659),
    [anon_sym_STAR] = ACTIONS(659),
    [anon_sym_EQ] = ACTIONS(659),
    [anon_sym_PERCENT] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_GT] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_SLASH_EQ] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_SLASH_SLASH] = ACTIONS(659),
    [anon_sym_PLUS] = ACTIONS(659),
    [anon_sym_DASH] = ACTIONS(659),
    [anon_sym_SLASH] = ACTIONS(659),
    [anon_sym_STAR_STAR] = ACTIONS(659),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(659),
    [sym__newline] = ACTIONS(659),
  },
  [390] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(860),
    [sym_comment] = ACTIONS(14),
  },
  [391] = {
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_LT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_EQ_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
  },
  [392] = {
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(342),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(342),
    [sym__newline] = ACTIONS(342),
  },
  [393] = {
    [sym__expression] = STATE(452),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [394] = {
    [sym__expression] = STATE(453),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [sym__expression] = STATE(454),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [396] = {
    [sym__expression] = STATE(455),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [397] = {
    [sym__expression] = STATE(456),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [398] = {
    [sym__expression] = STATE(457),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [399] = {
    [sym__expression] = STATE(458),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [400] = {
    [sym__expression] = STATE(459),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [sym__expression] = STATE(460),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(862),
    [sym_comment] = ACTIONS(14),
  },
  [403] = {
    [sym__end_of_statement] = STATE(461),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
    [sym__expression] = STATE(462),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
    [sym__expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [408] = {
    [sym__expression] = STATE(464),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [409] = {
    [sym__expression] = STATE(465),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [410] = {
    [sym__expression] = STATE(466),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [411] = {
    [sym__expression] = STATE(467),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [412] = {
    [sym__expression] = STATE(468),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [413] = {
    [sym__expression] = STATE(469),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [414] = {
    [sym__expression] = STATE(470),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(864),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(864),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(778),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [416] = {
    [sym__expression] = STATE(471),
    [sym_parenthesized_expression] = STATE(29),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(645),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_STAR] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [anon_sym_EQ] = ACTIONS(802),
    [anon_sym_EQ_GT] = ACTIONS(804),
    [anon_sym_PERCENT] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_GT] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_LT_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_GT_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_EQ_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_SLASH_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_SLASH_SLASH] = ACTIONS(804),
    [anon_sym_PLUS] = ACTIONS(802),
    [anon_sym_DASH] = ACTIONS(802),
    [anon_sym_SLASH] = ACTIONS(802),
    [anon_sym_STAR_STAR] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(802),
    [sym_comment] = ACTIONS(34),
  },
  [418] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(806),
    [sym__newline] = ACTIONS(806),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(815),
    [anon_sym_STAR] = ACTIONS(815),
    [anon_sym_PERCENT] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_LT] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_GT] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_LT_EQ] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_GT_EQ] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_EQ_EQ] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_SLASH_EQ] = ACTIONS(815),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_SLASH_SLASH] = ACTIONS(815),
    [anon_sym_PLUS] = ACTIONS(815),
    [anon_sym_DASH] = ACTIONS(815),
    [anon_sym_SLASH] = ACTIONS(815),
    [anon_sym_STAR_STAR] = ACTIONS(815),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(815),
    [sym__newline] = ACTIONS(815),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(866),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(752),
    [anon_sym_LT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_LT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_EQ_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(868),
    [sym__newline] = ACTIONS(868),
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [423] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_LT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_EQ_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [424] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_LT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_EQ_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [425] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_LT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_GT_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_EQ_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_EQ] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(697),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [426] = {
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [428] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_STAR_STAR] = ACTIONS(705),
    [sym_comment] = ACTIONS(34),
  },
  [429] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(687),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(605),
    [sym_comment] = ACTIONS(34),
  },
  [430] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(870),
    [sym__newline] = ACTIONS(870),
  },
  [431] = {
    [sym__block_label] = STATE(473),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(872),
    [sym__newline] = ACTIONS(872),
  },
  [432] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(874),
    [sym_comment] = ACTIONS(14),
  },
  [433] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(475),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym__block_if_statement_repeat1] = STATE(476),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(876),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [434] = {
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(475),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [sym_comment] = ACTIONS(14),
  },
  [435] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(872),
    [sym__newline] = ACTIONS(872),
  },
  [436] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(878),
    [sym_comment] = ACTIONS(14),
  },
  [437] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(36),
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
  [438] = {
    [sym__end_of_statement] = STATE(478),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
  },
  [439] = {
    [sym_statement_label] = STATE(479),
    [sym_subroutine_call] = STATE(480),
    [sym_keyword_statement] = STATE(480),
    [sym_do_loop_statement] = STATE(480),
    [sym_if_statement] = STATE(480),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(480),
    [sym_pointer_assignment_expression] = STATE(480),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(481),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(880),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [440] = {
    [sym__end_of_statement] = STATE(483),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [441] = {
    [sym__end_of_statement] = STATE(483),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [442] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [sym_block_label_start_expression] = ACTIONS(406),
    [sym_number_literal] = ACTIONS(406),
    [sym__double_quoted_string] = ACTIONS(406),
    [sym__single_quoted_string] = ACTIONS(406),
    [sym_boolean_literal] = ACTIONS(406),
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(34),
  },
  [443] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [sym_block_label_start_expression] = ACTIONS(457),
    [sym_number_literal] = ACTIONS(460),
    [sym__double_quoted_string] = ACTIONS(463),
    [sym__single_quoted_string] = ACTIONS(463),
    [sym_boolean_literal] = ACTIONS(460),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(34),
  },
  [444] = {
    [sym_elseif_clause] = STATE(371),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(882),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(884),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(887),
    [sym_comment] = ACTIONS(14),
  },
  [445] = {
    [sym__block_label] = STATE(484),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(870),
    [sym__newline] = ACTIONS(870),
  },
  [446] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(475),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(485),
    [aux_sym__block_if_statement_repeat1] = STATE(476),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(876),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [447] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(889),
    [sym__newline] = ACTIONS(889),
  },
  [448] = {
    [anon_sym_STAR] = ACTIONS(811),
    [anon_sym_EQ] = ACTIONS(811),
    [anon_sym_PERCENT] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(815),
    [anon_sym_LT] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_GT] = ACTIONS(811),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_LT_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_GT_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_EQ_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_SLASH_EQ] = ACTIONS(813),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(811),
    [anon_sym_SLASH_SLASH] = ACTIONS(813),
    [anon_sym_PLUS] = ACTIONS(811),
    [anon_sym_DASH] = ACTIONS(811),
    [anon_sym_SLASH] = ACTIONS(811),
    [anon_sym_STAR_STAR] = ACTIONS(813),
    [sym_comment] = ACTIONS(34),
  },
  [449] = {
    [anon_sym_STAR] = ACTIONS(655),
    [anon_sym_EQ] = ACTIONS(655),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_GT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_EQ_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_SLASH_EQ] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(655),
    [anon_sym_SLASH_SLASH] = ACTIONS(657),
    [anon_sym_PLUS] = ACTIONS(655),
    [anon_sym_DASH] = ACTIONS(655),
    [anon_sym_SLASH] = ACTIONS(655),
    [anon_sym_STAR_STAR] = ACTIONS(657),
    [sym_comment] = ACTIONS(34),
  },
  [450] = {
    [aux_sym_argument_list_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(891),
    [sym_comment] = ACTIONS(14),
  },
  [451] = {
    [anon_sym_COMMA] = ACTIONS(806),
    [anon_sym_STAR] = ACTIONS(806),
    [anon_sym_EQ] = ACTIONS(806),
    [anon_sym_PERCENT] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_GT] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_LT_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_GT_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_EQ_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_SLASH_EQ] = ACTIONS(806),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_SLASH_SLASH] = ACTIONS(806),
    [anon_sym_PLUS] = ACTIONS(806),
    [anon_sym_DASH] = ACTIONS(806),
    [anon_sym_SLASH] = ACTIONS(806),
    [anon_sym_STAR_STAR] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(806),
    [sym__newline] = ACTIONS(806),
  },
  [452] = {
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_STAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_EQ_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_SLASH] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_STAR] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_GT_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_EQ_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_SLASH_EQ] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_SLASH_SLASH] = ACTIONS(617),
    [anon_sym_PLUS] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(617),
    [anon_sym_SLASH] = ACTIONS(617),
    [anon_sym_STAR_STAR] = ACTIONS(617),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(617),
    [sym__newline] = ACTIONS(617),
  },
  [454] = {
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_LT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_EQ_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [455] = {
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_LT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_EQ_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_LT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_GT_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_EQ_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_EQ] = ACTIONS(754),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(754),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(623),
    [sym__newline] = ACTIONS(623),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_GT] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(629),
    [sym__newline] = ACTIONS(629),
  },
  [458] = {
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_GT_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_SLASH_EQ] = ACTIONS(635),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_SLASH_SLASH] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(758),
    [anon_sym_DASH] = ACTIONS(758),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(635),
    [sym__newline] = ACTIONS(635),
  },
  [459] = {
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_STAR] = ACTIONS(744),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_EQ_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_SLASH] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_STAR_STAR] = ACTIONS(760),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [460] = {
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_STAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(746),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_GT_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_EQ_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_EQ] = ACTIONS(607),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_SLASH_SLASH] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_STAR_STAR] = ACTIONS(607),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(607),
    [sym__newline] = ACTIONS(607),
  },
  [461] = {
    [ts_builtin_sym_end] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(14),
  },
  [462] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_SLASH_SLASH] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(615),
    [sym_comment] = ACTIONS(34),
  },
  [464] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [465] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [466] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [467] = {
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(627),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(625),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [468] = {
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_EQ] = ACTIONS(633),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(631),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [469] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [470] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_LT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_GT_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_EQ] = ACTIONS(605),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(603),
    [anon_sym_SLASH_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_STAR_STAR] = ACTIONS(605),
    [sym_comment] = ACTIONS(34),
  },
  [471] = {
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_PERCENT] = ACTIONS(770),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(778),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(786),
    [anon_sym_DASH] = ACTIONS(786),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [472] = {
    [sym__expression] = STATE(487),
    [sym_parenthesized_expression] = STATE(67),
    [sym_derived_type_member_expression] = STATE(67),
    [sym_logical_expression] = STATE(67),
    [sym_relational_expression] = STATE(67),
    [sym_concatenation_expression] = STATE(67),
    [sym_math_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_complex_literal] = STATE(67),
    [sym_string_literal] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(136),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(136),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [473] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(897),
    [sym__newline] = ACTIONS(897),
  },
  [474] = {
    [sym__block_label] = STATE(488),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(897),
    [sym__newline] = ACTIONS(897),
  },
  [475] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(14),
  },
  [476] = {
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(490),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [sym_comment] = ACTIONS(14),
  },
  [477] = {
    [sym__block_label] = STATE(491),
    [sym__end_of_statement] = STATE(492),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [478] = {
    [sym_statement_label] = STATE(479),
    [sym_subroutine_call] = STATE(480),
    [sym_keyword_statement] = STATE(480),
    [sym_do_loop_statement] = STATE(480),
    [sym_if_statement] = STATE(480),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(480),
    [sym_pointer_assignment_expression] = STATE(480),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(481),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(493),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [479] = {
    [sym_subroutine_call] = STATE(494),
    [sym_keyword_statement] = STATE(494),
    [sym_do_loop_statement] = STATE(494),
    [sym_if_statement] = STATE(494),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(494),
    [sym_pointer_assignment_expression] = STATE(494),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(495),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [480] = {
    [sym__end_of_statement] = STATE(496),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
  },
  [481] = {
    [sym__end_of_statement] = STATE(496),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
  },
  [482] = {
    [sym_statement_label] = STATE(479),
    [sym_subroutine_call] = STATE(480),
    [sym_keyword_statement] = STATE(480),
    [sym_do_loop_statement] = STATE(480),
    [sym_if_statement] = STATE(480),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(480),
    [sym_pointer_assignment_expression] = STATE(480),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(481),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(497),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [483] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [sym_block_label_start_expression] = ACTIONS(601),
    [sym_number_literal] = ACTIONS(601),
    [sym__double_quoted_string] = ACTIONS(601),
    [sym__single_quoted_string] = ACTIONS(601),
    [sym_boolean_literal] = ACTIONS(601),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [484] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(903),
    [sym__newline] = ACTIONS(903),
  },
  [485] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(490),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym__block_if_statement_repeat1] = STATE(498),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [486] = {
    [anon_sym_STAR] = ACTIONS(802),
    [anon_sym_EQ] = ACTIONS(802),
    [anon_sym_PERCENT] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_GT] = ACTIONS(802),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_LT_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_GT_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_EQ_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_SLASH_EQ] = ACTIONS(804),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(802),
    [anon_sym_SLASH_SLASH] = ACTIONS(804),
    [anon_sym_PLUS] = ACTIONS(802),
    [anon_sym_DASH] = ACTIONS(802),
    [anon_sym_SLASH] = ACTIONS(802),
    [anon_sym_STAR_STAR] = ACTIONS(804),
    [sym_comment] = ACTIONS(34),
  },
  [487] = {
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_EQ] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(907),
    [sym__newline] = ACTIONS(907),
  },
  [488] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(909),
    [sym__newline] = ACTIONS(909),
  },
  [489] = {
    [sym__block_label] = STATE(499),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(909),
    [sym__newline] = ACTIONS(909),
  },
  [490] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(14),
  },
  [491] = {
    [sym__end_of_statement] = STATE(501),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(565),
    [sym__newline] = ACTIONS(565),
  },
  [492] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [493] = {
    [sym_statement_label] = STATE(479),
    [sym_subroutine_call] = STATE(480),
    [sym_keyword_statement] = STATE(480),
    [sym_do_loop_statement] = STATE(480),
    [sym_if_statement] = STATE(480),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(480),
    [sym_pointer_assignment_expression] = STATE(480),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(481),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(497),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(915),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [494] = {
    [sym__end_of_statement] = STATE(503),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
  },
  [495] = {
    [sym__end_of_statement] = STATE(503),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_EQ] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_STAR_STAR] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
  },
  [496] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [sym_block_label_start_expression] = ACTIONS(406),
    [sym_number_literal] = ACTIONS(406),
    [sym__double_quoted_string] = ACTIONS(406),
    [sym__single_quoted_string] = ACTIONS(406),
    [sym_boolean_literal] = ACTIONS(406),
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(34),
  },
  [497] = {
    [sym_statement_label] = STATE(479),
    [sym_subroutine_call] = STATE(480),
    [sym_keyword_statement] = STATE(480),
    [sym_do_loop_statement] = STATE(480),
    [sym_if_statement] = STATE(480),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(480),
    [sym_pointer_assignment_expression] = STATE(480),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(481),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(497),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [sym_block_label_start_expression] = ACTIONS(457),
    [sym_number_literal] = ACTIONS(460),
    [sym__double_quoted_string] = ACTIONS(463),
    [sym__single_quoted_string] = ACTIONS(463),
    [sym_boolean_literal] = ACTIONS(460),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(34),
  },
  [498] = {
    [sym_elseif_clause] = STATE(371),
    [sym_else_clause] = STATE(504),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(911),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [sym_comment] = ACTIONS(14),
  },
  [499] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(917),
    [sym__newline] = ACTIONS(917),
  },
  [500] = {
    [sym__block_label] = STATE(505),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(917),
    [sym__newline] = ACTIONS(917),
  },
  [501] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(506),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [502] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(919),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [503] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [sym_block_label_start_expression] = ACTIONS(601),
    [sym_number_literal] = ACTIONS(601),
    [sym__double_quoted_string] = ACTIONS(601),
    [sym__single_quoted_string] = ACTIONS(601),
    [sym_boolean_literal] = ACTIONS(601),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(34),
  },
  [504] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(921),
    [sym_comment] = ACTIONS(14),
  },
  [505] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(923),
    [sym__newline] = ACTIONS(923),
  },
  [506] = {
    [sym_statement_label] = STATE(369),
    [sym_subroutine_call] = STATE(370),
    [sym_keyword_statement] = STATE(370),
    [sym_do_loop_statement] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym__inline_if_statement] = STATE(39),
    [sym__block_if_statement] = STATE(39),
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(29),
    [sym_assignment_expression] = STATE(370),
    [sym_pointer_assignment_expression] = STATE(370),
    [sym_derived_type_member_expression] = STATE(29),
    [sym_logical_expression] = STATE(29),
    [sym_relational_expression] = STATE(29),
    [sym_concatenation_expression] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_call_expression] = STATE(373),
    [sym_complex_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_block_label_start_expression] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(76),
    [sym__single_quoted_string] = ACTIONS(76),
    [sym_boolean_literal] = ACTIONS(74),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [507] = {
    [sym__block_label] = STATE(508),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(923),
    [sym__newline] = ACTIONS(923),
  },
  [508] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(927),
    [sym__newline] = ACTIONS(927),
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
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_label, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_label, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1, .fragile = true),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_declaration_statement, 2),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_declaration_statement, 2),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_modification_statment, 2),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_modification_statment, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_targets, 1),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_modification, 2),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [410] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [413] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [416] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [419] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [424] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(14),
  [427] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(18),
  [430] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(19),
  [433] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(20),
  [436] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(21),
  [439] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(22),
  [442] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(23),
  [445] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(24),
  [448] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(25),
  [451] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(26),
  [454] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(27),
  [457] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(28),
  [460] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(29),
  [463] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(30),
  [466] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(31),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 3),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_size, 1),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(233),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(285),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(300),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_targets, 2),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_modification, 3),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(320),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(349),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(357),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 1),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__declaration_targets_repeat1, 2),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [741] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__declaration_targets_repeat1, 2), SHIFT_REPEAT(190),
  [744] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(393),
  [746] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [748] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(395),
  [750] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(396),
  [752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [754] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(398),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(400),
  [760] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(403),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [778] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(410),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_shape, 1),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [806] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [808] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(227),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(437),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [851] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(292),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [866] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(472),
  [868] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [870] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [872] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [884] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(367),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [889] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 6),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [903] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [909] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [917] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [923] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
